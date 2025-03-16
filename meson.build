project('meson_rfpc', 'c',
  version : '0.1')

target_name = 'milkduo'

link_args = [ '-T', meson.project_source_root() / 'memmap', '-Wl,-Map,' + target_name + '.map']
add_project_link_arguments(link_args, language : ['c', 'cpp'] )

target_elf = executable(target_name, 'start.S', 'hal_uart_dw.c', 'uart.c', 'main.c',
                        name_suffix : 'elf')

target_bin  = custom_target(target_name + '.bin',
                            output             : ['bin'],
                            command            : [find_program('objcopy'), '-O', 'binary', target_elf, target_name + '.bin'],
                            depends            : [target_elf],
                            console            : true,
                            build_always_stale : true,
                            build_by_default   : true)

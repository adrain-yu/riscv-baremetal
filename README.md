## Build from source


### Setup

```shell
meson setup build --cross-file cross.ini
```
### Build

```shell
meson compile -C build -v
```

### Meson

### Subprojescts
It need a wrap file, if [git], `patch_directory` is the patch directory,  The directory
must be placed in subprojects/packagefiles, when download, the patch will copy into
Subprojects directory.


### Co-Work

```shell
1. Create one wip-BSP-issue_number-feature branch
2. Push wip-BSP-issue_number-feature branch to remote github
3. PR
4. Merge
5. Delete wip-BSP-issue_number-feature branch
```

## License

All rights reserved.


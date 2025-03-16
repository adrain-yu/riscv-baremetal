## Build from source


### Setup

```shell
meson setup build --cross-file cross.ini
```
### Build

```shell
meson compile -C build -v
```

##Meson

###Subprojescts
It need a wrap file, if [git], `patch_directory` is the patch directory,  The directory
must be placed in subprojects/packagefiles, when download, the patch will copy into
Subprojects directory.



## License

All rights reserved.


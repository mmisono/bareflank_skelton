This directory shows that how to use [bareflank](https://github.com/Bareflank/hypervisor) with custom extension.

## Compilation
```sh
git clone https://github.com/mmisono/bareflank_skelton --recursive
cd bareflank_skelton
mkdir build && cd build
cmake ../hypervisor -DDEFAULT_VMM=bareflank_skelton -DEXTENSION=../skelton
make
```

## Usage
```sh
make driver_quick
make quick
make status
meke dump
```

## License
MIT

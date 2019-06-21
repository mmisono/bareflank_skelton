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
- load hypervisor
```sh
make driver_quick
make quick
```

- do vmcall with given argument
```sh
% ./user/x86_64-userspace-elf/build/user 123
rax=123, ret=1
% ./user/x86_64-userspace-elf/build/user 1234
rax=1234, ret=0
```

- check status and debug message (message is also outputted to serial console)
```sh
make status
meke dump
```

- unload hypervisor
```sh
make unload
```

## Source
- [skelton/vmm/main.cpp](skelton/vmm/main.cpp): vmm code (vmcall handler)
- [skelton/user/main.cpp](skelton/user/main.cpp): userland code (do vmcall)

## License
MIT

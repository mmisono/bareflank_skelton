#include <iostream>

#include <intrinsics.h>

int main(int argc, char* argv[])
{
    int rax = 0;
    if (argc >= 2) {
        rax = atoi(argv[1]);
    }

    auto ret = ::intel_x64::vm::call(rax);

    std::cout << "rax=" << rax << ", ret=" << ret << '\n';
}

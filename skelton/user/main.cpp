#include <iostream>

#include <intrinsics.h>

int main()
{
    auto ret = ::intel_x64::vm::call(0x1234);

    std::clog << ret << '\n';
}

#include "from_rust.h"
#include <iostream>

int main() {
    struct Args args = {
        "hi from cpp!",
        650000,
        65.0001,
        reinterpret_cast<const short *>(L"wchar, Hi from cpp!")
    };
    struct Returns ret = set_get(args);
    std::cout << "Returned data" << std::endl;
    std::cout << "first: " << ret.first << std::endl;
    std::cout << "second: " << ret.sec << std::endl;
    std::wcout << L"third: " << ret.third << std::endl;
}

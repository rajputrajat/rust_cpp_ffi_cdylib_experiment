#include "from_rust.h"
#include <iostream>

  /* int first; */
  /* const char *sec; */
  /* const short *third; */

int main() {
    struct Args args = {
        "hi from cpp!",
        650000,
        65.0001,
        L"wchar, Hi from cpp!"
    };
    struct Returns ret = set_get(args);
    std::cout << "Returned data" << std::endl;
    std::cout << ret.first << std::endl;
    std::cout << ret.sec << std::endl;
    std::cout << ret.third << std::endl;

}

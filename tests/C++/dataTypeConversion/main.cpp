#include <iostream>
#include <string>
#include <stdlib.h>
int main() {
    int x = 102114 / 2564;
    std::string xString = std::to_string(x);
    char fString[] = "4.0800";
    char* fEnd;
    float f1;
    f1 = strtof (fString, &fEnd);
    std::cout << xString << "\n";
    std::cout << f1 << "\n";
    return 0;
}
#include <iostream>
int main() {
    int x = 102114 / 2564;
    int y = 1018362 * 102;
    switch (x) {
        case 39:
            std::cout << 1024/256 << "\n";
            std::cout << "X - T" << "\n";
            std::cout << x << "\n";
            break;
        default:
            std::cout << 1024*256 << "\n";
            std::cout << "X - F" << "\n";
            std::cout << x << "\n";
            break;
    }
    switch (y) {
        case 9:
            std::cout << 1024/256 << "\n";
            std::cout << "Y - T" << "\n";
            std::cout << y << "\n";
            break;
        default:
            std::cout << 1024*256 << "\n";
            std::cout << "Y - F" << "\n";
            std::cout << y << "\n";
            break;
    }
    return 0;
}
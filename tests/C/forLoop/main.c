#include <stdio.h>
int main() {
    for(int i = 0; i < 1000; i++){
        printf("%s%d%s\n", "Test Num: ", i+1, " ------");
        printf("%d\n"  , 21348 + 1831254);
        printf("%d\n"  , 51312 - 2156);
        printf("%d\n"  , 2556 * 25613);
        printf("%d\n"  , 102114 / 2564);
        printf("%d\n"  , 125 * 256 * (512+1024));
        printf("%d\n"  , 125 * 256 * (6457+1024));
    }
    return 0;
}
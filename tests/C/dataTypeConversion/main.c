#include <stdio.h>
int main() {
    int x = 102114 / 2564;
    const char* fString = "4.0800";
    float f;
    char xString[9];
    sprintf(xString, "%d", x);
    printf("%s\n", xString);
    sscanf(fString, "%f", &f);
    printf("%f\n", f);
    return 0;
}
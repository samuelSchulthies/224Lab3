#include <stdio.h>

int main()
{
    unsigned char u = 0xE;
    unsigned char c = 14;

    if (u == c) {
        printf("They are the same!\n");
    }
    else {
        printf("They are different!\n");
    }
    return 0;
}
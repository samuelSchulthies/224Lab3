#include <stdio.h>

int main()
{

    // This is our char being converted
    unsigned char c = 'A';
    unsigned int j = 8;
    unsigned int bits [j];
    int x = (int) c;

    // You'll also need an array to store the bit string,
    // either chars or ints will work

    /*
        Add your binary conversion code here
    */

    for (int i = 0; i < j; i++){
        if (x%2 == 1){
            bits[i] = 1;
        }
        if (x%2 == 0){
            bits[i] = 0;
        }
        x = x / 2;
    }


    // Print out the resulting binary number
    for(int i = 0; i < j; i++){
        printf("%d", bits[i]);
    }

    return 0;
}



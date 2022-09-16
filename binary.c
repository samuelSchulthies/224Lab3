#include <stdio.h>

int main()
{

    // This is our char being converted
    unsigned char c = 'A';
    unsigned char u = 'p';
    unsigned char y = 'w';
    unsigned char z = 'o';
    unsigned char v = '!';

    unsigned int j = 8;
    unsigned int bits [j];

    int x = (int) c;
    int e = (int) u;
    int r = (int) y;
    int t = (int) z;
    int b = (int) v;

    int collection [5] = {x,e,r,t,b};

    // You'll also need an array to store the bit string,
    // either chars or ints will work

    /*
        Add your binary conversion code here
    */

    for (int h = 0; h < 5; h++){
        for (int i = 0; i < j; i++){
            if (collection[h]%2 == 1){
                bits[i] = 1;
            }
            if (collection[h]%2 == 0){
                bits[i] = 0;
            }
            collection[h] = collection[h] / 2;
        }
    }


    // Print out the resulting binary number
    for (int j = 0; j < 5; ++j){
        for(int i = j - 1; i >= 0; i--){
            printf("%d", bits[i]);
        }
        printf("\n");
    }

    return 0;
}



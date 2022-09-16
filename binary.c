#include <stdio.h>

int main()
{

    // This is our char being converted
    unsigned char a = 'A';
    unsigned char p = 'p';
    unsigned char w = 'w';
    unsigned char o = 'o';
    unsigned char x = '!';

    int aCast = (int) a;
    int pCast = (int) p;
    int wCast = (int) w;
    int oCast = (int) o;
    int xCast = (int) x;

    int collection [5] = {aCast,pCast,wCast,oCast,xCast};

    int binaryStorage [5][8] = {};

    // You'll also need an array to store the bit string,
    // either chars or ints will work

    /*
        Add your binary conversion code here
    */

    for (int ROW = 0; ROW < 5; ROW++){
        for (int COL = 0; COL < 8; COL++){
            if (collection[ROW]%2 == 1) {
                binaryStorage [ROW][COL] = 1;
            }
            else {
                binaryStorage [ROW][COL] = 0;
            }
            collection[ROW] = collection[ROW] / 2;
        }

    }


    // Print out the resulting binary number
    for (int ROW = 0; ROW < 5; ROW++){
        for(int COL = COL - 1; COL >= 0; COL--){
            printf("%d", binaryStorage[ROW][COL]);
        }
        printf("\n");
    }

    return 0;
}

//int * arraySwitcher(int temp){
//    if (temp == aCast)
//}



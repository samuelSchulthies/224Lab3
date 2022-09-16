#include <stdio.h>

int main()
{

    // These are our chars being converted
    unsigned char a = 'A';
    unsigned char p = 'p';
    unsigned char w = 'w';
    unsigned char o = 'o';
    unsigned char x = '!';

    // Chars cast to ints to obtain ASCII values
    int aCast = (int) a;
    int pCast = (int) p;
    int wCast = (int) w;
    int oCast = (int) o;
    int xCast = (int) x;

    //An array of each ASCII value
    int collection [5] = {aCast,pCast,wCast,oCast,xCast};

    //An array storing the characters
    char charCollection [5] = {a,p,w,o,x};

    //A 2 dimensional array storing the binary conversions of each character on each row
    int binaryStorage [5][8] = {};

    //Binary conversion function check the ASCII value and stores the binary output in the 2D array
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


    //Prints the character and its ASCII in binary from the 2D array
    for (int ROW = 0; ROW < 5; ROW++){
        printf("character %c in binary: ", charCollection[ROW]);
        for(int COL = 7; COL >= 0; COL--){
            printf("%d", binaryStorage[ROW][COL]);
        }
        printf("\n");
    }

    return 0;
}



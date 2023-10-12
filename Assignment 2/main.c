#include <stdlib.h>
#include <stdio.h>

#define TD 6
#define FG 3
#define S 2
#define TD2P 8
#define TDFG 7

int main()
{
    //-- VARIABLE DECLARATIONS --//
    int userInput = 2;
    
    //-- MAIN LOOP --//
    printf("Enter 0 or 1 to STOP.\n");
    while (userInput > 1)
    {
        printf("Enter the NFL score: ");
        scanf("%d", &userInput);

        //TODO - Bruteforce Functionality

        printf("Possible combinations of scoring plays: ");
    }
    

    return 0;
}
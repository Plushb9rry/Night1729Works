//Created by NIGHT FURY 5.01.2021 F1U7R2Y9

#include <stdio.h>
#include <conio.h>

    int main()

    {
        int i, space, rows, k = 0;
        // FOR 1ST TRIANGLE 
        for (i = 1; i <= 5; ++i, k = 0) 
        {
            for (space = 1; space <= rows - i; ++space) 
            {
                printf("  ");
            } 
            while (k != 2 * i - 1) 
            {
                printf("* ");
                ++k;
            }
            printf("\n");
        }
        //FOR 2ND TRIANGLE
         for (i = 1; i <= 7; ++i, k = 0) 
        {
            for (space = 1; space <= rows - i; ++space) 
            {
                printf("  ");
            } 
            while (k != 2 * i - 1) 
            {
                printf("* ");
                ++k;
            }
            printf("\n");
        }



        
        return 0;
    }

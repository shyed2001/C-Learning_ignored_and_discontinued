/*@Shyed Shahriar Housaini
Copyright: @uthor*/
/**
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
#include <math.h>
#include <stdbool.h>
#include<ctype.h>
#include <string.h>
#include <strings.h>
}**/
//#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main (int argc, char *argv[])

{

    /// int k = argv[1];
         if (argc!=2)

         /// isalpha(argv[1]) || k == " " )
          {
                printf("Usage: ./caesar key. Please put in a integer key in the command line.\n");

                return 1;
          }
         else
         {
            printf(" %s\n", argv[0]);
            printf(" \n" );
            printf(" %s\n", argv[1]);

        }
     printf(" \n" );
     return 0;
}

 /**  for (int i=0; i<10; i++)
   {
    printf(" argv[%d] = %s\n", i, argv[i]);
   }**/

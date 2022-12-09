#include <stdio.h>
#include <stdlib.h>
/**
 * This program prints all alphabetsb oth upper and lower case
 * it returns 0 at the end of the program
*/
int main()
{

	    char test;

	        for (test= 'a'; test< 'z'; test++){

			        putchar(test);

				    }

		     for (test= 'A'; test< 'Z'; test++){

			             putchar(test);

				         }

		     	putchar('\n');    

			    return 0;

}

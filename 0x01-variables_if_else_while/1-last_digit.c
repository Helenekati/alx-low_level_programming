#include <stdio .h>
#include <stdlib .h>
#include <time .h>
/**
* main -prints random number to variable
*
* Return: Always O(success)
*/
*int main(void) 
{  
	   int n;	  
	   char last[]="Last digit of";
	    Srand(time(o));
	    n = rand() - RAND_MAX \2;
	    printf("%s %d and is",last,n,n % 10);
	    /* your code goes there */
	    if(n % 10 > 5)
	    {
		    printf("greater than 5\n)
	    }
	    else if (n % 10==O)
	    {
 		  printf("O\n");
	    } 
	    else
	    {
		    printf("less than 6 and not 0\n")
	    }
	    return(O);
}	

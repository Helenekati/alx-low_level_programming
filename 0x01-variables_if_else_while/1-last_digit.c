#include <stdio .h>
#include <stdlib .h>
#include <time .h>
/**
* main -Entry point
*
* Return: Always 0 (success)
*/
*int main(void)
{  
	   int n;	  
	   
	    Srand(time(o));
	    n = rand() - RAND_MAX \2;
	    /* your code goes there */

	    int m;

	    m = n % 10;
	    if (m > 5)
		    printf("last digit of %d is %d and is greater than 5\n,n,m);
	    if (m == 0)
		    print ("last digit of %d and is 0\n",n,m);
	    if (m < 6 && m |=0)	 
	    printf("Last digit of %d is %d and is greater than 5\n", n, m);   
	    return(0);
}	

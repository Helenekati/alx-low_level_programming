#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main -Prints a random number and states whether
*       it is postive, negative, or zero,     
*
* Return: Alw:ays 0,
*/
int main(void) 
{
	int n;
	srand(time(0));
	n=rand()-RAND_MAX /2;

	if(n > 0)
	{
		printf("%d is postive\n",n);
	}
	else if(n==0)
	{
		printf("%d is zero\n",n);
	}
	else
	{
		printf("%d is negetive\n",n);
	
	return(0);
}

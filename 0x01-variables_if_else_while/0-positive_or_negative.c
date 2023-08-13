#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if(n>0){
	/*if the first condition is true, do this*/
		printf("%d is positive/n", n)
	}
	else if(n==0){
	 /*if the first condition is true, do this*/
		printf("%d is zero", n)
	}
	else {
	/*if all fails, do this*/
		printf("%d is negative", n)
	}
	return (0);
}

#include <stdio.h>
int main ()
{
	int m=45, n=75;
	printf("m=%d, n=%d, \n",m,n);
	++m;
	n--;
	printf("m=%D, n=%d\n",m,n);
	m++;
	n--;
	printf("m=%d, n=%d, \n",m,n);
	
	return 0;
}

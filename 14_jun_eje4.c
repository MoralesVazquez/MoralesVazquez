#include<stdio.h>
int main()
{
	int n,res,v=1;
	while (v!=0)
	{
	puts ("ingresa un numero");
	scanf ("%d ",&n);
	res=n % 2;
	if (res!=0)
	{
		printf ("es numero primo\n");
	}
	else
	{
		printf ("no es numero primo\n");
	}
	printf ("¿quieres continuar?\n");
	scanf ("%d ",&v);
    }
	return 0;
}

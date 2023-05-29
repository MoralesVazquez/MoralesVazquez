#include<stdio.h>
int MiNumero;
int main()
{
	int j;
	printf("Cual es tu numero favorito? ");
	scanf("%d",&MiNumero);
	int NumeroInteracciones=10;
	int i;
	for(i=2;i<NumeroInteracciones;i=i+2)
	{
		printf("Interacciones Numero: %d\n",i);
	}
	printf("la variable i vale: %d\n",i);
	printf("la variable MiNumero vale: %d\n",MiNumero);
	printf("la variable NumeroInteracciones vale: %d\n",NumeroInteracciones);
}

#include<stdio.h>
int main()
{
	float num;
	printf("Ingrese un numero: ");
	scanf("%f",&num);
	if (num==0){
		printf("Es igual");}
	if (num>0){
		printf("Es positivo");}
	else{
		printf("Es negativo");}
	return 0;
}

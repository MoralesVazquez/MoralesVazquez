/*ejercicios 2 Junio
desarrollar un programa que diga
si un numero es mayor,menor o igual a 0 con la funcion 'si,simple*/
#include<stdio.h>
int main()
{
	float num;
	printf("Ingrese un numero: ");
	scanf("%f",&num);
	if (num==0){
		printf("Es igual");}
	if (num<0){
		printf("Es menor");}
	if (num>0){
		printf("Es mayor");}
	return 0;
}

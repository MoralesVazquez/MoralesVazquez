#include<stdio.h>
int main()
{
	float num,num2;
	printf("Ingrese dos numeros: ");
	scanf("%f %f",&num,&num2);
	if (num<num2){
		printf("El numero menor es %f",num);}
	if (num>num2){
		printf("El numero mayor es %f",num);}
	return 0;
}

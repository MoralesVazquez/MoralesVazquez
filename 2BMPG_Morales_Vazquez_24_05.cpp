#include<stdio.h>

int main()
{
	int num1,num2,resultado,op;
	printf("Ingrese el primer numero: ");
	scanf("%d",&num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&num2);
	printf("\n");
	printf("1)Suma\n");
	printf("2)Resta\n");
	printf("3)Divicion\n");
	scanf("%d",&op);
		switch (op)
		{
		case 1:
		    resultado=num1+num2;
		    printf("El resultado es %d",resultado);
		break;
		case 2:
		    resultado=num1-num2;
		    printf("El resultado es %d",resultado);
		break;
		case 3:
			resultado=num1/num2;
			printf("El resultado es de %d",resultado);
		break;
	    }
	return 0;
}

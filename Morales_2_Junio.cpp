/*ejercicios 2 de junio
desarrollar un programa en el lenguaje c
que pida una calificacion entre 1 y 10
y evalue si es mayor a 6 mande un mensaje de aprobado*/
#include<stdio.h>
int main()
{
	float cal;
	char nota[]="aprobado";
	printf("Ingrese una calificacion(1-10): ");
	scanf("%f",&cal);
	if (cal>5){
		puts(nota);
	}
	return 0;
}

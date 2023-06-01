#include<stdio.h>
int main()
{
	int gasto,tarifa,gastoanterior;
	printf("Numero de kw por hora \n");
	scanf("%d",&gasto);
	printf("Gasto anterior \n");
	scanf("%d",&gastoanterior);
	if (gastoanterior<gasto){
	if (gasto<1000 &&gasto>0){
		tarifa=1.2;
		printf("monto: %d",tarifa*gasto);
	}
	if (gasto>1000 && gasto<1850){
		tarifa=1.8;
		printf("monto: %d",tarifa*gasto);
	}
	if (gasto>1850){
		tarifa=2.1;
		printf("monto: %d",tarifa*gasto);
	}
}
else{
	printf("Tarifa Invalida");
}
}

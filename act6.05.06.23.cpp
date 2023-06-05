#include<stdio.h>
main()
{
  int v;
  int p,t,c;
  printf("ingresar vehiculo\n");
  scanf("%d",&v);
  switch(v){
  	case 1:
  		printf("automovil particular\n");
  		t=500;
  		printf("ingrese la cantidad que pagara\n");
  		printf("tarifa de 500\n");
  		scanf("%d",&p);
  		c=p-t;
  		printf("su cambio es: %d",c);
  		break;
  		
  		case 2:
  		printf("autobus\n");
  		t=600;
  		printf("ingrese la cantidad que pagara\n");
  		printf("tarifa de 600\n");
  		scanf("%d",&p);
  		c=p-t;
  		printf("su cambio es: %d",c);
  		break;
  		
  		case 3:
  		printf("motocicleta\n");
  		t=100;
  		printf("ingrese la cantidad que pagara\n");
  		printf("tarifa de 100\n");
  		scanf("%d",&p);
  		c=p-t;
  		printf("su cambio es: %d",c);
  		break;
  		
  		default:
  		printf("error");
  		break;
  }
  return 0;
}

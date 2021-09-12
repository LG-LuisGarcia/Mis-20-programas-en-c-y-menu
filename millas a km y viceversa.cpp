#include<stdio.h>
#include<conio.h>
#define km 0.6214
#define milla 1.6093

float km_mi(float cantidad){
	return cantidad*km;
}
float mi_km(float cantidad){
	return cantidad*milla;
}
main(){
	int op;
	float cantidad;
	printf(" CONVERTIR\n  1.-Km a Millas\n  2.-Millas a Km\n Respuesta : ");
	scanf("%d",&op);
	printf("Poner aca la cantidad de millas a km: ");
	scanf("%f", &cantidad);
	switch (op){
	    case 1:
		printf(" %.2f km es igual a %.2f millas", cantidad,km_mi(cantidad));
		break;
		case 2:
			printf(" %.2f millas equivale a %.2f km",cantidad,mi_km(cantidad));
			break;
			default:
				printf("la opcion no es correcta");
	}
	getch();
	
	return 0;
}

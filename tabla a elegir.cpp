#include<stdio.h>
#include<conio.h>

int main(){
	
	int i, n;
	printf ("Poner el numero para dar una tabla: ");
	scanf ("%d",&n);
	for (i=1;i<=10;i++)
	printf("%2d X %2d = %3d\n",n,i,i*n);

	return 0;
}

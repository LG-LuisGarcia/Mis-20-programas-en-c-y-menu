#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char a[20];
	int x,z, esp=0,letras=0;
	
	printf("Poner una frase o oracion aca: ");
	scanf("%[^\n]",&a);
	
	z = strlen(a);
	for (x=0; x<=z; x++)
	{
		if(a[x]== ' ')
		{
			esp++;
		}
	}
	
	letras = z-esp;
	
	printf("espacios: %d\n",esp);
	printf("palabras: %d\n",letras);
	
	return 0;
}

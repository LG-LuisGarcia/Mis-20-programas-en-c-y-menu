#include <iostream>
#include <cstdlib>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main() {

    int opcion;
    bool repetir = true;
    do {
        system("cls");
     
        cout << "\n\n Bienvenido al menu de Programas :)" << endl;
        cout << "\nSeleccione la opcion que desee:" << endl;
        cout << "1. Suma, Resta, Multiplicacion y Division de dos numeros" << endl;
        cout << "2. Determinar si un numero es par o impar" << endl;
        cout<<"3. Tabla de multiplicar a elegir" <<endl;
        cout<<"4. Tablas de multiplicar del 1 al 10" <<endl;
        cout<<"5. Palindroma" <<endl;
        cout<<"6. Fecha"<<endl;
        cout<<"7. Edades"<<endl;
        cout<<"8. Multiplicacion grafica"<<endl;
        cout<<"9. Arabigos a romanos"<<endl;
        cout<<"10. Decimales a binarios"<<endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
        	
            case 1:

int n1, n2;
printf("introduzca primer numero: ");
scanf("%d", &n1);
printf("introduzca segundo numero: ");
scanf("%d", &n2);

printf("\n la suma es: %d", n1+n2);
printf("\n la resta es: %d", n1-n2);
printf("\n la multiplicacion es: %d", n1*n2);
printf("\n la division es: %d \n", n1/  n2);    

printf ("Presiona ENTER para elegir otro programa \n");               
system("pause>nul"); 
                break;
                
            case 2:
int numero;
	
	cout<<"Escriba aca un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El nunero es impar";
	}
	
      
system("pause>nul"); 
                break;
     case 3:
	     	int i, n;
	printf ("Poner el numero para dar una tabla: ");
	scanf ("%d",&n);
	for (i=1;i<=10;i++)
	printf("%2d X %2d = %3d\n",n,i,i*n);       
        system("pause>nul"); 
                break;
    case 4:
		for(int i = 1;i<=10;i++){
		cout<<"-------------------------"<<endl;
		cout<<"Esta es la tabla del: "<<i<<endl;
		
		
		for(int m = 0; m <=10; m++){
			cout<<i<<" x " <<m<<" = "<<i * m<<endl;
		}
	}
	       system("pause>nul"); 
                break;    
    case 5:
    	char cadena[100], copia[100];
	
	cout<<"Poner la palabra aca: "<<endl;
	cin>>cadena;
	
	for(int i=(strlen(cadena)-1);i>=0;i--){
		copia[strlen(cadena)-1-i]=cadena[i];
	}
	copia[strlen(cadena)]='\0';
	
	if(strcmp(cadena,copia)==0){
		cout<<"Es palindroma";
	}else{
		cout<<"La palabra no es palindroma";
	}
	system("pause>nul"); 
                break;  
    case 6:
    		int dia,mes,anio;
	int fecha;
	cout<<"ingrese el anio, mes y el dia aca: "<<endl; 
	cin>>anio>>mes>>dia;
	
	fecha = (anio * 10000) + (mes * 100) + dia;
	
	cout<<fecha<<endl;
	
	system("pause>nul"); 
                break;  
    case 7:
    	int edad;
	
	cout<<"Poner su edad aca: ";
	cin>>edad;
	
	if((edad>=18)&&(edad<=25)){
		cout<<"Su edad se encuentra en el rango de [18-25]";
	}
	else{
		cout<<"Su edad no se encuentra en el rango";
	}
	system("pause>nul"); 
                break;  
    case 8:
    	float a,b,Mul;
	cout<< "ESCRIBA EL PRIMER DIGITO:\n";
 	cin>>a;
 	cout<<"ESCRIBA EL SEGUNDO DIGITO:\n";
 	cin>>b;
 	
	 Mul= a*b;
	 
	cout<<"\t"<<a<<endl;
	cout<<"    x  "<<"\t "<<b<<endl;
	cout<<"____________"<<endl;
	cout<<"\t"<<Mul<<endl;
	system("pause>nul"); 
                break; 
	case 9:
	int Numero,unidades,decenas,centenas,millar;
	
	cout<<"Poner un numero aca: ";
	cin>>Numero;
	
	unidades = Numero%10; Numero/=10;
	decenas = Numero%10; Numero/=10;
	centenas = Numero%10; Numero/10;
	millar = Numero%10; Numero/10;
	
	switch(millar){
		case 1:cout<<"M"; break;
		case 2:cout<<"MM"; break;
		case 3:cout<<"MMM"; break;
	}
	switch(centenas){
		case 1:cout<<"C"; break;
		case 2:cout<<"CC"; break;
		case 3:cout<<"CCC"; break;
		case 4:cout<<"CD"; break;
		case 5:cout<<"D"; break;
		case 6:cout<<"DC"; break;
		case 7:cout<<"DCC"; break;
		case 8:cout<<"DCCC"; break;
		case 9:cout<<"CM"; break;
	}
	switch(decenas){
		case 1:cout<<"X"; break;
		case 2:cout<<"XX"; break;
		case 3:cout<<"XXX"; break;
		case 4:cout<<"XL"; break;
		case 5:cout<<"L"; break;
		case 6:cout<<"LX"; break;
		case 7:cout<<"LXX"; break;
		case 8:cout<<"LXXX"; break;
		case 9:cout<<"XC"; break;
	}
	switch(unidades){
		case 1:cout<<"I"; break;
		case 2:cout<<"II"; break;
		case 3:cout<<"III"; break;
		case 4:cout<<"IV"; break;
		case 5:cout<<"V"; break;
		case 6:cout<<"VI"; break;
		case 7:cout<<"VII"; break;
		case 8:cout<<"VIII"; break;
		case 9:cout<<"IX"; break;
	}
	 system("pause>nul"); 
                break; 
    case 10:
    	int decimal;
	short binario[8];
	
	cout<<"Poner el valor decimal para poder convertir: "<<endl;
	cin>>decimal;
	
	for(int i = 0; i<8; i++)
	{
		binario [i] = decimal % 2;
		decimal /= 2; 
	}
	
	cout<<"El numero binario es: "<<endl;
	
	for(int i = 7; i>=0; i--)
	{
		cout<<binario[i];
	}
	
	cout<<endl;
	system("pause>nul"); 
                break; 
case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
				  	  
    return 0;
}
                
  


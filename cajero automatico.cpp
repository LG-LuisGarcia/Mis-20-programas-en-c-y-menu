#include<iostream>

using namespace std;

int main(){
	int saldo_inicial = 1000,opc;
	float extra,saldo = 0, retiro;
	
	cout<<"\tBienvenido al cajero :)"<<endl;
	cout<<"1. Ingresar dinero en su cuenta"<<endl;
	cout<<"2. Retirar dinero de su cuenta"<<endl;
	cout<<"3. Salir de todo"<<endl;
	cout<<"Opcion: ";
	cin>>opc;
	
			
	switch(opc){
		case 1:
			cout<<"Poner la cantidad de dinero a ingresar: ";
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero en su cuenta: "<<saldo;break;
			
			case 2:
				cout<<"Poner aca la cantidad de dinero que desea retirar: ";
				cin>>retiro;
				
				if(retiro > saldo_inicial){
					cout<<"No tiene esa cantidad de dinero en su cuenta";
				}
				else {
					saldo = saldo_inicial-retiro;
					cout<<"Su dinero en cuenta es: "<<saldo;
				}
				case 3: break;
	}
	
	return 0;
}	


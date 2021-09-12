#include<iostream>

using namespace std;

int main(){
	int dia,mes,anio;
	int fecha;
	cout<<"ingrese el anio, mes y el dia aca: "<<endl; 
	cin>>anio>>mes>>dia;
	
	fecha = (anio * 10000) + (mes * 100) + dia;
	
	cout<<fecha<<endl;
	
	return 0;
}

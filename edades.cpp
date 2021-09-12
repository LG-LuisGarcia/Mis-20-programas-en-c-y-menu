#include<iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"Poner su edad aca: ";
	cin>>edad;
	
	if((edad>=18)&&(edad<=25)){
		cout<<"Su edad se encuentra en el rango de [18-25]";
	}
	else{
		cout<<"Su edad no se encuentra en el rango";
	}
	
	return 0;
}

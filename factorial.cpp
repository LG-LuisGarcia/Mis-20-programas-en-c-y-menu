#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero, factorial = 1;
	
	cout<<"Poner un numero: "; cin>>numero;
	
	for(int i=1;i<=numero;i++){
		factorial *=i;
	}
	
	cout<<"/El factorial es: "<<factorial<<endl;
	
	
	
	
	return 0;
}

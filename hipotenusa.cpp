#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int co,ca;
	float h;
	
	cout<<"Poner aca el cateto opuesto: ";
	cin>>co;
	
	cout<<"Poner aca el cateto adyacente: ";
	cin>>ca;
	
	h= sqrt(pow(co,2)+pow(ca,2));
	
	cout<<"La hipotenusa es: "<<h;
	
	cin.get();
	return 0;
}

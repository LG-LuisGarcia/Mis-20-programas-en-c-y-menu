#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
	for(int i = 1;i<=10;i++){
		cout<<"-------------------------"<<endl;
		cout<<"Esta es la tabla del: "<<i<<endl;
		
		
		for(int m = 0; m <=10; m++){
			cout<<i<<" x " <<m<<" = "<<i * m<<endl;
		}
	}
	
	

	return 0;
}

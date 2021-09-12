#include <cstdlib>
#include <iostream>
 
 
using namespace std;
 
int main() {
 
   int numero, n1, n2, n3, n4, n5;
   cout<<"Escribe un numero de uno a diez mil (numeros): "; cin>>numero;
   n1 = numero / 10000;
   n2 = (numero / 1000) % 10;
   n3 = (numero / 100) % 10;
   n4 = (numero / 10) % 10;
   n5 = (numero % 10);
 
   cout<<"\n"<<n1<<" -> Decenas de mil "<<endl;
   cout<<n2<<" -> Unidades de mil "<<endl;
   cout<<n3<<" -> Centenas"<<endl;
   cout<<n4<<" -> Decenas"<<endl;
   cout<<n5<<" -> Unidades \n"<<endl; 
   if(numero > 10000){
      cout<<"El numero ingresado excede el rango de valores";
   }else{
      if(n1 == 1){
      cout<<"Diez mil";
      }
      
      if(n2 == 1){
         cout<<"MIL Y DECIMALES ";
      }else if(n2 == 2){
         cout<<"DOS MIL Y DECIMALES";
      }else if(n2 == 3){
         cout<<"TRES MIL Y DECIMALES";
      }else if(n2 == 4){
         cout<<"CUATRO MIL Y DECIMALES ";
      }else if(n2 == 5){
         cout<<"CINCO MIL Y DECIMALES ";
      }else if(n2 == 6){
        cout<<"SEIS MIL Y DECIMALES";
      }else if(n2 == 7){
         cout<<"SIETE MIL Y DECIMALES";
      }else if(n2 == 8){
         cout<<"OCHO MIL Y DECIMALES";
      }else if(n2 == 9){
         cout<<"NUEVE MIL Y DECIMALES";
      }
      
      if(n3 == 1 && n4 == 0 && n5 == 0){
         cout<<"CIEN Y DECIMALES";
      }else if(n3 == 1){
         cout<<"CIENTO Y DECIMALES";
      }else if(n3 == 2){
         cout<<"DOSCIENTOS Y DECIMALES";
      }else if(n3 == 3){
         cout<<"TRESCIENTOS Y DECIMALES";
      }else if(n3 == 4){
         cout<<"CUATROCIENTOS Y DECIMALES";
      }else if(n3 == 5){
         cout<<"QUINIENTOS Y DECIMALES";
      }else if(n3 == 6){
         cout<<"SEISCIENTOS Y DECIMALES";
      }else if(n3 == 7){
         cout<<"SETECIENTOS Y DECIMALES";
      }else if(n3 == 8){
         cout<<"OCHOCIENTOS Y DECIMALES";
      }else if(n3 == 9){
         cout<<"NOVECIENTOS Y DECIMALES";
      }
      
      if(n4 == 1 && n5 == 0){
         cout<<"Diez Y DECIMALES";
      }else if(n4 == 1 && n5 == 1){
         cout<<"ONCE Y DECIMALES";
      }else if(n4 == 1 && n5 == 2){
         cout<<"DOCE Y DECIMALES";
      }else if(n4 == 1 && n5 == 3){
         cout<<"TRECE Y DECIMALES";
      }else if(n4 == 1 && n5 == 4){
         cout<<"CATORCE Y DECIMALES";
      }else if(n4 == 1 && n5 == 5){
         cout<<"QUINCE Y DECIMALES";
      }else if(n4 == 1){
         cout<<"DIECISEIS Y DECIMALES";
      }
      if(n4 == 2 && n5 == 0){
         cout<<"VEINTE Y DECIMALES";
      }else if(n4 == 2){
         cout<<"VEINTI Y DECIMALES";
      }else if(n4 == 3 && n5 == 0){
         cout<<"TREINTA Y DECIMALES";
      }else if(n4 == 3){
         cout<<"TREINTA Y DECIMALES";
      }else if(n4 == 4 && n5 == 0){
         cout<<"CUARENTA Y DECIMALES";
      }else if(n4 == 4){
         cout<<"CUARENTA Y DECIMALES ";
      }else if(n4 == 5 && n5 == 0){
         cout<<"CINCUENTA Y DECIMALES";
      }else if(n4 == 5){
         cout<<"CINCUENTA Y DECIMALES";
      }else if(n4 == 6 && n5 == 0){
         cout<<"SESENTA Y DECIMALES";
      }else if(n4 == 6){
         cout<<"SESENTA Y DECIMALES";
      }else if(n4 == 7 && n5 == 0){
         cout<<"SETENTA Y DECIMALES";
      }else if(n4 == 7){
         cout<<"SETENTA Y DECIMALES";
      }else if(n4 == 8 && n5 == 0){
         cout<<"OCHENTA Y DECIMALES";
      }else if(n4 == 8){
         cout<<"OCHENTA Y DECIMALES";
      }else if(n4 == 9 && n5 == 0){
         cout<<"NOVENTA Y DECIMALES";
      }
      else if(n4 == 9){
         cout<<"NOVENTA Y DECIMALES ";
      }
       
      if(n5 == 1 && n4 > 1){
         cout<<"UNO DECIMAL";
      }else if(n5 == 1 && n4 == 0){
         cout<<"UNO DECIMAL"; 
      }else if(n5 == 2 && n4 > 1){
         cout<<"DOS DECIMAL";
      }else if(n5 == 2 && n4 == 0){
         cout<<"DOS DECIMAL";
      }else if(n5 == 3 && n4 > 1){
         cout<<"TRES DECIMAL";
      }else if(n5 == 3 && n4 == 0){
         cout<<"TRES DECIMAL"; 
      }else if(n5 == 4 && n4 > 1){
         cout<<"CUATRO DECIMAL";
      }else if(n5 == 4 && n4 == 0){
         cout<<"CUATRO DECIMAL"; 
      }else if(n5 == 5 && n4 > 1){
         cout<<"CINCO DECIMAL";
      }else if(n5 == 5 && n4 == 0){
         cout<<"CINCO DECIMAL";
      }else if(n5 == 6){
         cout<<"SEIS DECIMAL";
      }else if(n5 == 7){
         cout<<"SIETE DECIMAL";
      }else if(n5 == 8){
         cout<<"OCHO DECIMAL";
      }else if(n5 == 9){
         cout<<"NUEVE DECIMAL";
      }
   }
}
 

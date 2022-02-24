#include<iostream>
#include<conio.h>

using namespace std;

void hexa(){
	system("cls");
	float num,decimal,num2;
	int aux,aux2,aux3,aux4,aux5;
	
	cout<<"Ingrese un numero con punto decimal: ";
	cin>>num;
		
	aux = num;
	decimal = num - aux;
	
	cout<<"El numero en hexadecimal es (";
	
	do{
		aux4 = aux%16;
		aux /=16;
		
		switch(aux4){
			case 10: cout<<"A"; break;
			case 11: cout<<"B"; break;
			case 12: cout<<"C"; break;
			case 13: cout<<"D"; break;
			case 14: cout<<"E"; break;
			case 15: cout<<"F"; break;
			default: cout<<aux4; break;	
		}
	
		if(aux<16 and aux>0){
			aux5 = aux;
		}
						
	}while(aux!=0);
	
	cout<<".";
	
	do{
		decimal *=16;
		aux2 = decimal;
		if(decimal>1){
			aux3 = decimal;
			decimal -= aux3;
		}
		cout<<aux2;
	}while(decimal!=0);
	
	cout<<")";
	
	getch();
}


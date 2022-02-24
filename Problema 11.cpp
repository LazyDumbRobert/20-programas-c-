#include<iostream>
#include<conio.h>

using namespace std;

void binarios(){
	system("cls");
	float num,decimal,num2;
	int aux,aux2,aux3;
	
	cout<<"Ingrese un numero con punto decimal: ";
	cin>>num;
		
	aux = num;
	decimal = num - aux;
	cout<<"El numero en binario es (";
	do{
		cout<<aux%2;
		aux /=2;
		
	}while(aux!=0);
	cout<<".";
	do{
		decimal *=2;
		aux2 = decimal;
		if(decimal>1){
			aux3 = decimal;
			decimal -= aux3;
		}
		cout<<aux2;
	}while(decimal!=1.00);
	
	cout<<")";
	
	getch();
}



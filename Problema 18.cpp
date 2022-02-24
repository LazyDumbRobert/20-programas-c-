#include<iostream>
#include<conio.h>

using namespace std;

void positivonegativo(){
	system("cls");
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero>0){
		cout<<"El numero es positivo"<<endl;
	}
	if(numero<0){
		cout<<"El numero es negativo"<<endl;
	}
	if(numero==0){
		cout<<"El numero es igual a 0"<<endl;
	}
	
	getch();
}



//Determinar si un numero es par o impar

#include<iostream>
#include<conio.h>

using namespace std;

void determinarparimpar(){	
	system("cls");
	int n1;
	cout<<"Ingrese un numero: ";
	cin>>n1;
	
	if(n1%2==0){
		cout<<"El numero es par."<<endl;
		getch();
	}else{
		cout<<"El numero es impar."<<endl;
		getch();
	}	
}
	

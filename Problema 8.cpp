#include<iostream>
#include<conio.h>

using namespace std;

void tablaX(){
	system("cls");
	int num;
	
	cout<<"Ingrese el numero de la tabla de multiplicar que desea: ";
	cin>>num;
	
	for(int i=1; i<=10; i++){
		int aux;
		aux = i*num;
		cout<<num<<"x"<<i<<" = "<<aux<<endl;
	}
	
	getch();
}

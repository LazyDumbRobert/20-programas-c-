//Suma, resta, multiplicación y división de dos números

#include<iostream>
#include<conio.h>
using namespace std;

int numero1, numero2,resultado1;

void suma();
void resta();
void mltp();
void div();
void PedirDatos();
void menuProblema1();

void suma(){
	int a, b;
	a = numero1;
	b = numero2;
	float suma;
	suma = a + b;
	cout<<"La suma es: "<<suma;
	getch();
}

void resta(){
	int a, b;
	a = numero1;
	b = numero2;
	float resta;
	resta = a - b;
	cout<<"La resta es: "<<resta;
	getch();
}


void mltp(){
	int a, b;
	a = numero1;
	b = numero2;
	float mltp;
	mltp = a*b;
	cout<<"La multiplicacion es: "<<mltp;
	getch();
}

void div(){
	int a,b;
	a = numero1;
	b = numero2;
	float div;
	div = a/b;
    cout<<"La division es: "<<div;
    getch();
}

void PedirDatos(){
	system("cls");
	cout<<"Ingrese el primer numero: ";
	cin>>numero1;
	cout<<"Ingrese el segundo numero: ";
	cin>>numero2;
}

void menuProblema1(){
	int opp1;
	do{	
		system("cls");
		cout<<"1.Suma"<<endl;
		cout<<"2.Resta"<<endl;
		cout<<"3.Multiplicacion"<<endl;
		cout<<"4.Division"<<endl;
		cout<<"0.Salir"<<endl;
		cout<<"Ingrese la opcion que desea realizar: ";
		cin>>opp1;
		
		switch(opp1){
			case 1: PedirDatos(); suma(); break;
			case 2: PedirDatos(); resta(); break;
			case 3: PedirDatos(); mltp(); break;
			case 4: PedirDatos(); div(); break;
		}	
	}while(opp1!=0);
		
	
}

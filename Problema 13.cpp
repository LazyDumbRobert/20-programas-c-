#include<iostream>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
#include<math.h>
using namespace std;


void cuadrado(){
	cout<<"--------CUADRADO--------"<<endl;
	cout<<"\n";
	for(int i=0; i<9;i++){
		for(int j=0; j<19;j++){
			cout<<"*";
		}
	cout<<"\n";	
	}
}

void triangulo(){
	cout<<"----------TRIANGULO----------"<<endl;
	cout<<"\n";
	
	for(int i=0; i<20; i++){
		for(int k=0; k<19-i; k++){
			cout<<" ";
			}
		for(int k=0; k<i*2-1; k++){
		cout<<"*";
		}
	cout<<"\n";
	}	
}

void rectangulo(){
	cout<<"--------RECTANGULO--------"<<endl;
	cout<<"\n";
	for(int i=0; i<10;i++){
		for(int j=0; j<40;j++){
			cout<<"*";
		}
	cout<<"\n";	
	}
}

void circulo(){
	cout<<"----------CIRCULO----------"<<endl;
	cout<<"\n\n";
	cout<<"        *************                "<<endl;
	cout<<"      *****************                "<<endl;
	cout<<"     *******************                "<<endl;
	cout<<"    *********************                "<<endl;
	cout<<"    *********************                "<<endl;
	cout<<"    *********************                "<<endl;
	cout<<"     *******************                "<<endl;
	cout<<"      *****************                "<<endl;
	cout<<"        *************                "<<endl;

}
void menuFigs(){
	system("cls");
	int op;
	
	do{
		cout<<"1.Cuadrado"<<endl;
		cout<<"2.Triangulo"<<endl;
		cout<<"3.Rectangulo"<<endl;
		cout<<"4.Circulo"<<endl;
		cout<<"0.Salir"<<endl;
		cout<<"Ingrese la opcion que desea realizar: ";
		cin>>op;
	
		switch(op){
			case 1: system("cls"); cuadrado(); break;
			case 2: system("cls"); triangulo(); break;
			case 3: system("cls"); rectangulo(); break;
			case 4: system("cls"); circulo(); break;
		}
		getch();
		system("cls");
	}while(op!=0);

}

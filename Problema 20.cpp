#include<iostream>
#include<conio.h>
using namespace std;

void matriz(){
	system("cls");
	int notas[2][3];
	
	for(int i=0; i<2; i++){
		for(int i2=0; i2<3 ; i2++){
			cout<<"Ingrese el dato de "<<"["<<i<<"]"<<"["<<i2<<"]"<<": ";
			cin>>notas[i][i2];
		}	
	}
	system("cls");
	cout<<"\tMatriz resultante"<<endl;
	for(int i=0; i<2; i++){
		for(int i2=0; i2<3 ; i2++){
			cout<<"["<<i<<"]"<<"["<<i2<<"]"<<"= "<<notas[i][i2]<<endl;	
		}	
	}	
	
	getch();
}


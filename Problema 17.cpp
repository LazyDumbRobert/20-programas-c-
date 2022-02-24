#include<iostream>
#include<conio.h>
using namespace std;

void organizararreglo(){
	system("cls");
	int t1,i,t2,n=0;
	
	cout<<"Ingrese el tamano del arreglo que desea: ";
	cin>>t1;
	
	int numeros[t1];
	
	for(i=0; i<t1; i++){
		cout<<"Ingrese el digito numero "<<i+1<<" del arreglo: ";
		cin>>numeros[i];
	}
	system("cls");
	for(n; n<t1; n++){	
		for(i=0; i<t1; i++){
			if(numeros[i]>numeros[n]){
				t2 = numeros[i];
				numeros[i] = numeros[n];
				numeros[n] = t2;
				}
		}	
	}	

	for(i=0; i<t1; i++){
		cout<<"Numero "<<"["<<i+1<<"]: "<<numeros[i]<<endl;
	}

	getch();
}

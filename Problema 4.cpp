//Determinar si una palabra es palidramo

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
	
void palindroma(){
	system("cls");
	
	char palabra[100];
	int n,contador=0,aux;
	
	cout<<"Ingrese una palabra: ";
	fflush(stdin);
	gets(palabra);

	
	n = strlen(palabra);
	aux = n-1;
	
	strupr(palabra);

	
	for(int i=0; i<n; i++){
			
			if(palabra[i] == palabra[aux]){
				
				contador++;
			}
			aux--;
	}

	if(contador==n){
		cout<<"La palabra es polindroma"<<endl;
		getch();
	}else{
		cout<<"La palabra no es polindroma"<<endl;
		getch();
	}
}
	
	


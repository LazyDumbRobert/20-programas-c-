//Forma grafica de multiplicación

#include<iostream>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<cstdlib>

using namespace std;

int xgrafica(){
	
	system("cls");
	
	int numero,numero2, unidades, decenas, centenas, millar,unidades2, decenas2, centenas2, millar2, resultado,resultado2,resultado3,resultado4;
	int aux1, aux2,resultaux2,aux3,aux4;
	
	cout<<"Digite un numero menor a mil: ";
	cin>>numero;
	cout<<"Digite un segundo numero menor a mil: ";
	cin>>numero2;
	
	aux1=numero;
	aux2=numero2;
	aux3=numero;
	aux4=numero2;
	
//------------descomponiendo el primero numero---------------//
	unidades = numero%10; numero /= 10;
	decenas = numero%10; numero /=10; 
	centenas = numero%10; numero /=10;
	millar = numero%10; numero /= 10;

//------------descomponiendo el segundo numero---------------//
	unidades2 = numero2%10; numero2 /= 10;
	decenas2 = numero2%10; numero2 /=10; 
	centenas2 = numero2%10; numero2 /=10;
	millar2 = numero2%10; numero2 /= 10;
//----------------------------------------------------------//	
	
	cout<<"\n";
	cout<<"\n";
	
	cout<<"\t   "<<aux1;
	cout<<"\n\tx  "<<aux2;
	cout<<"\n\t---------";
	
	for(int i=1; i<5; i++){
		switch(i){
			case 1: resultado = unidades2*aux1; if(resultado == 0){cout<<"\t\n\t-------------";  i=4; break;} cout<<"\n\t     "<<resultado; break;
			case 2: resultado2 = decenas2*aux1; if(resultado2 == 0){cout<<"\t\n\t-------------";  i=4; break;} cout<<"\n\t   "<<resultado2; break;
			case 3: resultado3 = centenas2*aux1; if(resultado3 == 0){cout<<"\t\n\t-------------";  i=4; break;} cout<<"\n\t "<<resultado3; break;
			case 4: resultado4 = millar2*aux1; if(resultado4 == 0){cout<<"\t\n\t-------------";  i=4; break;} cout<<"\t\n  "<<resultado4; break;
		} 
	}

	cout<<"\n";
	cout<<"\t   "<<aux3*aux4;
	
	getch();
}

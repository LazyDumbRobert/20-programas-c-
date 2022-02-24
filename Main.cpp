#include "Problema 1.cpp"
#include "Problema 2.cpp"
#include "Problema 3.cpp"
#include "Problema 4.cpp"
#include "Problema 5.cpp"
#include "Problema 6.cpp"
#include "Problema 7.cpp"
#include "Problema 8.cpp"
#include "Problema 9.cpp"
#include "Problema 10.cpp"
#include "Problema 11.cpp"
#include "Problema 12.cpp"
#include "Problema 13.cpp"
#include "Problema 14.cpp"
#include "Problema 15.cpp"
#include "Problema 16.cpp"
#include "Problema 17.cpp"
#include "Problema 18.cpp"
#include "Problema 19.cpp"
#include "Problema 20.cpp"
#include "Menu universal.cpp"
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int op;
	
	do{
		op = menu();
		
		switch(op){
			case 1: menuProblema1(); break;
			case 2: determinarparimpar(); break;
			case 3: menuproblema3(); break;
			case 4: palindroma(); break;
			case 5: romanos(); break;
			case 6: numletras(); break;
			case 7: decimalletras(); break;
			case 8: tablaX(); break;
			case 9: tablasX(); break;
			case 10: xgrafica(); break;
			case 11: binarios(); break;
			case 12: hexa(); break;
			case 13: menuFigs(); break;
			case 14: marco(); break;
			case 15: cajero(); break;
			case 16: hipotenusa(); break;
			case 17: organizararreglo(); break;
			case 18: positivonegativo(); break;
			case 19: salarioneto(); break;
			case 20: matriz(); break;
			
		}

	}while(op!=0);

	return 0;	
	getch();
}

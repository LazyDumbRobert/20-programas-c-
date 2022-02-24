#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void hipotenusa(){
	system("cls");
	float opuesto, adyacente, hipotenusa;
	
	cout<<"Ingrese el valor del cateto opuesto: ";
	cin>>opuesto;
	
	cout<<"Ingrese el valor del cateto adyacente: ";
	cin>>adyacente;
	
	hipotenusa = sqrt(pow(opuesto,2)+pow(adyacente,2));
	
	cout<<"El valor de la hipotenusa resultante es: "<<hipotenusa<<endl;
	
	getch();
}

#include<iostream>
#include<conio.h>

using namespace std;

void salarioneto(){
	system("cls");
	const float topelsr=12000;
	
	float salarioB, salarioN, isr;
	
	cout<<"Ingrese el salario total del empleado: ";
	cin>>salarioB;
	
	if(salarioB<topelsr){
		isr = salarioB*0.05;
	} else{
		isr = salarioB*0.07;
	}
	
	salarioN = salarioB-isr;
	
	cout<<"El salario neto es: "<<"Q."<<salarioN<<endl;
	
	getch();
}



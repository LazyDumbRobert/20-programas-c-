#include<iostream>
#include<conio.h>

using namespace std;

int menu(){
	int op1;
	system("cls");
	cout<<"1.Suma, Resta, Multiplicacion y Division de dos numeros"<<endl;
	cout<<"2.Determinar si un numero es par o impar"<<endl;
	cout<<"3.Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
	cout<<"4.Determinar si una palabra o un numero es palindromo"<<endl;
	cout<<"5.Conversion de numeros arabigos a romanos (minimo 1,000)"<<endl;
	cout<<"6.Conversion de numeros enteros a letras"<<endl;
	cout<<"7.Conversion de numeros enteros con decimal a letras"<<endl;
	cout<<"8.Una tabla de multiplicar"<<endl;
	cout<<"9.Todas las tablas de multiplicar del 1 al 10"<<endl;
	cout<<"10.Crear de forma grafica la multiplicacion manual"<<endl;
	cout<<"11.Conversion de numeros decimales a binario"<<endl;
	cout<<"12.Conversion de numeros decimales a hexadecimales"<<endl;
	cout<<"13.Crear Figuras Geometricas Basicas"<<endl;
	cout<<"14.Mover un punto en toda la pantalla"<<endl;
	cout<<"15.Simulacion de un Cajero (Automata)"<<endl;
	cout<<"16.Calcular la hipotenusa"<<endl;
	cout<<"17.Organizar un arreglo de numeros"<<endl;
	cout<<"18.Determinar si un numero es positivo o negativo"<<endl;
	cout<<"19.Calcular el salario neto dependiendo de tu salario"<<endl;
	cout<<"20.Realizar una matriz"<<endl;
	cout<<"0.Salir"<<endl;
	cout<<"\n\nIngrese la opcion que desea realizar: ";
	cin>>op1;
	
	return op1;
}

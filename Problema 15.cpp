#include<iostream>
#include<conio.h>

float total;


using namespace std;

void ingresar();
void retirar();
void consultar();

void cajero(){
	system("cls");
	int op;
	
	do{
		system("cls");
		cout<<"---------------CAJERO AUTOMATICO--------------";
		cout<<"\n1.Ingresar dinero";
		cout<<"\n2.Retirar dinero";
		cout<<"\n3.Consultar saldo";
		cout<<"\n0.Salir";
		cout<<"\nIngrese la opcion que desea realizar: ";
		cin>>op;
		
		switch(op){
			case 1: ingresar(); break;
			case 2: if(total==0){
					system("cls");
					cout<<"Usted no cuenta con dinero en su cuenta, vuelva a intentarlo"<<endl;
					getch();
					}else{
						retirar();  break;	
					}
					break;
			
			case 3: consultar(); break;
			case 0: system("cls"); cout<<"Vuelva pronto!"<<endl; break;
		}
	}while(op!=0);
	
	getch();
}

void ingresar(){
	system("cls");
	float monto;
	cout<<"Ingrese el monto que desea ingresar a su cuenta: ";
	cin>>monto;
	total +=monto;
	cout<<"El monto de "<<monto<<" se ha ingresado correctamente"<<endl;
	getch();
}

void retirar(){
	bool bandera = true;
	float retiro;
	do{
		system("cls");
		cout<<"Ingrese el monto que desea retirar: ";
		cin>>retiro;	
		
		if(retiro>total){
			system("cls");
			cout<<"Usted no cuenta con esta cantidad de dinero, vuelva a intentarlo"<<endl;
			getch();
		}else{
			total -=retiro;
			cout<<"Se ha retirado el monto de "<<retiro<<" exitosamente, tome su efectivo"<<endl;
			bandera = false;
			getch();
		}
	}while(bandera);	
}

void consultar(){
	system("cls");
	cout<<"Su saldo actual es de: "<<total<<endl;
	getch();
}

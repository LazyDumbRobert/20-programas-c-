// Convertir medida a otras medidas

#include<iostream>
#include<conio.h>

using namespace std;

float n1,result;
int op;

float func1(float a);
float func2(float a);
float func3(float a);
float func4(float a);
float func5(float a);
float func6(float a);
void menuproblema3();
	
	
void menuproblema3(){
	system("cls");
	do{
		cout<<"1. Kilometros a millas";
		cout<<"\n2. Millas a kilometros";
		cout<<"\n3. Metros a pulgadas";
		cout<<"\n4. Pulgadas a metros";
		cout<<"\n5. Libras a kilos";
		cout<<"\n6. Kilos a libras";
		cout<<"\n7. Salir";
		cout<<"\nIngrese el de la opcion que desea realizar: ";
		cin>>op;
		system("cls");
		
		switch(op){
			
			case 1: cout<<"Ingrese la medida en km: "; cin>>n1; result=func1(n1); cout<<"La medida en millas es: "<<result; getch(); system("cls"); break;
			
			case 2: cout<<"Ingrese la medida en millas: "; cin>>n1; result=func2(n1); cout<<"La medida en km es: "<<result; getch(); system("cls"); break;
			
			case 3: cout<<"Ingrese la medida en metros: "; cin>>n1; result=func3(n1); cout<<"La medida en pulgadas es: "<<result; getch(); system("cls"); break;
			
			case 4: cout<<"Ingrese la medida en pulgadas: "; cin>>n1; result=func4(n1); cout<<"La medida en metros es: "<<result; getch(); system("cls"); break;
				
			case 5: cout<<"Ingrese la medida en libras: "; cin>>n1; result=func5(n1); cout<<"La medida en kilos es: "<<result; getch(); system("cls"); break;
				
			case 6: cout<<"Ingrese la medida en kilogramos: "; cin>>n1; result=func6(n1); cout<<"La medida en libras es: "<<result; getch(); system("cls"); break;

		}
		
	}while(op!=7);
}	
	

float func1(float a){
	float millas;
	millas = a/1.609;
	return millas;
}

float func2(float a){
	float km;
	km = a*1.609;
	return km;
}

float func3(float a){
	float pulgadas;
	pulgadas = a*39.37;
	return pulgadas;
}

float func4(float a){
	float metros;
	metros = a/39.37;
	return metros;
}

float func5(float a){
	float kg;
	kg = a/2.205;
	return kg;
}

float func6(float a){
	float libras;
	libras = a*2.205;
	return libras;
}

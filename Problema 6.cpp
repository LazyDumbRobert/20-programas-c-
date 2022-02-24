//De numeros arabigos a numeros romanos

#include<iostream>
#include<conio.h>

using namespace std;

int numletras(){
	system("cls");
	int numero, unidades, decenas, centenas, millar,aux;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"Cero."<<endl;
	}
	if(numero>=0 and numero<=9999){
		unidades = numero%10; numero /= 10;
		decenas = numero%10; numero /=10; 
		centenas = numero%10; numero /=10;
		millar = numero%10; numero /= 10;
	}else{
		cout<<"El numero es demasiado grande."<<endl;
		return 0;
	}
	
	switch(millar){
		case 1: cout<<"Mil "; break;
		case 2: cout<<"Dos mil "; break;
		case 3: cout<<"Tres mil "; break;
		case 4: cout<<"Cuatro mil "; break;
		case 5: cout<<"Cinco mil "; break;
		case 6: cout<<"Seis mil "; break;
		case 7: cout<<"Siete mil "; break;
		case 8: cout<<"Ocho mil "; break;
		case 9: cout<<"Nueve mil "; break;
			
	}
	
	switch(centenas){
		case 1: cout<<"ciento "; break;
		case 2: cout<<"dos cientos "; break;
		case 3: cout<<"tres cientos "; break;
		case 4: cout<<"cuatro cientos "; break;
		case 5: cout<<"quinientos "; break;
		case 6: cout<<"seis cientos "; break;
		case 7: cout<<"setecientos "; break;
		case 8: cout<<"ocho cientos "; break;
		case 9: cout<<"novecientos "; break;
	}
	

	if(decenas==1 and unidades==1){
		cout<<"once";
		getch();
		return 0; 	
		
	}
	if(decenas==1 and unidades==2){
		cout<<"doce";
		getch();
		return 0; 	
	}
	if(decenas==1 and unidades ==3){
		cout<<"trece";
		getch();
		return 0; 	
	}
	if(decenas==1 and unidades==4){
		cout<<"catorce";
		getch();
		return 0; 	
	}
	if(decenas==1 and unidades==5){
		cout<<"quince";
		getch();
		return 0; 	
	}else{
		switch(decenas){
		case 1: if(decenas==1 and unidades==0){cout<<"diez";}else{cout<<"diez y ";} break;
		case 2: if(decenas==2 and unidades==0){cout<<"viente";}else{cout<<"veinte y ";} break;
		case 3: if(decenas==3 and unidades==0){cout<<"treinta";}else{cout<<"treinta y ";} break;
		case 4: if(decenas==4 and unidades==0){cout<<"cuarenta";}else{cout<<"cuarenta y ";} break;
		case 5: if(decenas==5 and unidades==0){cout<<"cincuenta";}else{cout<<"cincuenta y ";} break;
		case 6: if(decenas==6 and unidades==0){cout<<"sesenta";}else{cout<<"sesenta y ";} break;
		case 7: if(decenas==7 and unidades==0){cout<<"setenta";}else{cout<<"setenta y ";} break;
		case 8: if(decenas==8 and unidades==0){cout<<"ochenta";}else{cout<<"ochenta y ";} break;
		case 9: if(decenas==9 and unidades==0){cout<<"noventa";}else{cout<<"noventa y ";} break;
		}	
		
		switch(unidades){
		case 1: cout<<"uno "; break;
		case 2: cout<<"dos"; break;
		case 3: cout<<"tres "; break;
		case 4: cout<<"cuatro "; break;
		case 5: cout<<"cinco "; break;
		case 6: cout<<"seis "; break;
		case 7: cout<<"siete "; break;
		case 8: cout<<"ocho "; break;
		case 9: cout<<"nueve "; break;
		}
	}
	getch();
}
	
	

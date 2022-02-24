//De numeros decimales a numeros romanos

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int decimalletras(){
	system("cls");
	float numero;
	int unidades, decenas, centenas, millar,aux,aux2;
	int unidades2, decenas2, centenas2, millar2;
	
	cout<<"Digite un numero con punto decimal (ingresar 4 decimales para que no aproxime): ";
	cin>>numero;
	
	aux=numero;
	numero-=aux;
	
	numero *=1000;
	aux2=numero;
	
	
	if(aux==0){
		cout<<"Cero."<<endl;
	}
	if(aux>=0 and aux<=9999){
		unidades = aux%10; aux /= 10;
		decenas = aux%10;  aux/=10; 
		centenas = aux%10; aux /=10;
		millar = aux%10; aux /= 10;
	}else{
		cout<<"El numero es demasiado grande."<<endl;
		return 0;
	}
	
	if(aux2==0){
		cout<<"Cero."<<endl;
	}
	if(aux2>=0 and aux2<=9999){
		unidades2 = aux2%10; aux2 /= 10;
		decenas2 = aux2%10;  aux2 /=10; 
		centenas2 = aux2%10; aux2 /=10;
		millar2 = aux2%10; aux2 /= 10;
	}
	
	if(centenas==0 and decenas==0 and unidades==0){
		switch(millar){
		case 1: cout<<"Mil punto "; break;
		case 2: cout<<"Dos mil punto "; break;
		case 3: cout<<"Tres mil punto "; break;
		case 4: cout<<"Cuatro mil punto "; break;
		case 5: cout<<"Cinco mil punto "; break;
		case 6: cout<<"Seis mil punto "; break;
		case 7: cout<<"Siete mil punto "; break;
		case 8: cout<<"Ocho mil punto "; break;
		case 9: cout<<"Nueve mil punto "; break;		
		}
	}else{
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
	}
	
	if(decenas==0 and unidades==0){
		switch(centenas){
		case 1: cout<<"ciento punto "; break;
		case 2: cout<<"dos cientos punto "; break;
		case 3: cout<<"tres cientos punto "; break;
		case 4: cout<<"cuatro cientos punto "; break;
		case 5: cout<<"quinientos punto "; break;
		case 6: cout<<"seis cientos punto "; break;
		case 7: cout<<"setecientos punto "; break;
		case 8: cout<<"ocho cientos punto "; break;
		case 9: cout<<"novecientos punto "; break;
		}
	}else{
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
	}
	
	switch(decenas){
	case 1: if(unidades>6){cout<<"diez y "; break;} 
			if(unidades==0){cout<<"diez punto "; break;}
			if(decenas==1 and unidades==1){cout<<"once punto "; break;}
			if(decenas==1 and unidades==5){cout<<"quince punto "; break;}
			if(decenas==1 and unidades ==3){cout<<"trece punto "; break;}
			if(decenas==1 and unidades==4){cout<<"catorce punto "; break;}
			if(decenas==1 and unidades==2){cout<<"doce punto "; break;}
	case 2: if(decenas==2 and unidades==0){cout<<"viente punto ";}else{cout<<"veinte y ";} break;
	case 3: if(decenas==3 and unidades==0){cout<<"treinta punto ";}else{cout<<"treinta y ";} break;
	case 4: if(decenas==4 and unidades==0){cout<<"cuarenta punto ";}else{cout<<"cuarenta y ";} break;
	case 5: if(decenas==5 and unidades==0){cout<<"cincuenta punto ";}else{cout<<"cincuenta y ";} break;
	case 6: if(decenas==6 and unidades==0){cout<<"sesenta punto ";}else{cout<<"sesenta y ";} break;
	case 7: if(decenas==7 and unidades==0){cout<<"setenta punto ";}else{cout<<"setenta y ";} break;
	case 8: if(decenas==8 and unidades==0){cout<<"ochenta punto ";}else{cout<<"ochenta y ";} break;
	case 9: if(decenas==9 and unidades==0){cout<<"noventa punto ";}else{cout<<"noventa y ";} break;
	}
	
		
	switch(unidades){
	case 1: if(decenas==1){cout<<""; break;}else{cout<<"uno punto "; break;}
	case 2: if(decenas==1){cout<<""; break;}else{cout<<"dos punto "; break;}
	case 3: if(decenas==1){cout<<""; break;}else{cout<<"tres punto "; break;}
	case 4: if(decenas==1){cout<<""; break;}else{cout<<"cuatro punto "; break;}
	case 5: if(decenas==1){cout<<""; break;}else{cout<<"cinco punto "; break;}
	case 6: cout<<"seis punto "; break;
	case 7: cout<<"siete punto "; break;
	case 8: cout<<"ocho punto "; break;
	case 9: cout<<"nueve punto "; break;
	}
	
	switch(millar2){
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
	
	switch(centenas2){
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

	switch(decenas2){
		case 1: if(unidades>6){cout<<"diez y "; break;} 
				if(unidades==0){cout<<"diez"; break;}
				if(decenas2==1 and unidades2==1){cout<<"once"; break;}
				if(decenas2==1 and unidades2==5){cout<<"quince"; break;}
				if(decenas2==1 and unidades2==3){cout<<"trece"; break;}
				if(decenas2==1 and unidades2==4){cout<<"catorce"; break;}
				if(decenas2==1 and unidades2==2){cout<<"doce"; break;}
		case 2: if(decenas2==2 and unidades2==0){cout<<"viente";}else{cout<<"veinte y ";} break;
		case 3: if(decenas2==3 and unidades2==0){cout<<"treinta";}else{cout<<"treinta y ";} break;
		case 4: if(decenas2==4 and unidades2==0){cout<<"cuarenta";}else{cout<<"cuarenta y ";} break;
		case 5: if(decenas2==5 and unidades2==0){cout<<"cincuenta";}else{cout<<"cincuenta y ";} break;
		case 6: if(decenas2==6 and unidades2==0){cout<<"sesenta";}else{cout<<"sesenta y ";} break;
		case 7: if(decenas2==7 and unidades2==0){cout<<"setenta";}else{cout<<"setenta y ";} break;
		case 8: if(decenas2==8 and unidades2==0){cout<<"ochenta";}else{cout<<"ochenta y ";} break;
		case 9: if(decenas2==9 and unidades2==0){cout<<"noventa";}else{cout<<"noventa y ";} break;
	}
		
	switch(unidades2){
		case 1: if(decenas2==1){cout<<""; break;}else{cout<<"uno"; break;}
		case 2: if(decenas2==1){cout<<""; break;}else{cout<<"dos"; break;}
		case 3: if(decenas2==1){cout<<""; break;}else{cout<<"tres"; break;}
		case 4: if(decenas2==1){cout<<""; break;}else{cout<<"cuatro"; break;}
		case 5: if(decenas2==1){cout<<""; break;}else{cout<<"cinco"; break;}
		case 6: cout<<"seis"; break;
		case 7: cout<<"siete"; break;
		case 8: cout<<"ocho"; break;
		case 9: cout<<"nueve"; break;
		}
	getch();
}
	

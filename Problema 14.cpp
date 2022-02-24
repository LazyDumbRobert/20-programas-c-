#include<iostream>
#include<gotoxy.h>
using namespace std;

void delay(int a){
	int add;
	int time;
	int i;
	time=a*100000;
	for (i=0;i<time;i++){
		add*=i;
		add++;
		add++;
	}
}

void marco(){
	system("cls");
	int i=3,xcol;
	
	char vtitulo[] =" * ";

	
	for(xcol=2;xcol<=117;xcol++){
		if(xcol==117){
			system("cls");
			xcol=2;
			i++;
		}
		gotoxy(xcol,i); printf(vtitulo);
		delay(15);
	}
	getch();
}


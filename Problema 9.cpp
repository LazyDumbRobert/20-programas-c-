#include<iostream>
#include<conio.h>

using namespace std;

void tablasX(){
	system("cls");
	
	for(int i=1; i<=10; i++){
		for(int i2=1; i2<=10; i2++){
			int aux;
			aux = i*i2;
			cout<<i2<<"x"<<i<<" = "<<aux<<endl;
		}	
	cout<<"---------------------------------"<<endl;
	}
	
	getch();
}

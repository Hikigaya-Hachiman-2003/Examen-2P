//================================================
//==> Nombre del programa: Suma de varios numeros
//==> Archivo : RuanoJharol-sumaN.cpp
//==>Autor: Ruano Jama Jharol
//==>Fecha de elaboración: 2022-04-20
//==>Fecha ultima actualización: 2022-05-12
//=================================================
#include <iostream>
using namespace std;
int main(){
	int rj_x=0, rj_a;
	float  rj_y=0, rj_b;
	cout<<"Ingrese todos lo valores que desa sumar: ";
	cin>> rj_a;
	do{
		cout<<"Ingrese el valor a sumar"<< rj_x+1<<endl;
		cin>> rj_b;
		 rj_x= rj_x+1;
		 rj_y= rj_y+ rj_b;
	}while ( rj_x< rj_a);
		cout<<"El resultado final de la sumatoria es de: "<< rj_y<<endl;
cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de varios numeros"<<endl;
cout<<"//==> Archivo : RuanoJharol-sumaN.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Jharol"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//=================================================";
		return(0);
}

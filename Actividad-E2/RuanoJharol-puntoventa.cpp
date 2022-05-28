//================================================
//==> Nombre del programa: Ingresar x cantidad de productos y calcular, iva, descuento,
//==>total a pagar y el valor de la suma de todos los productos 
//==> Archivo : RuanoJharol-puntoventa.cpp
//==>Autor: Ruano Jama Jharol
//==>Fecha de elaboración: 2022-04-20
//==>Fecha ultima actualización: 2022-05-12
//=================================================
#include <iostream>
using namespace std;
int main(){
	int rj_a=0,rj_x;
	float rj_pg=0,rj_p;
	float rj_iva=0.15,rj_des=0.12,rj_IVA,rj_DES,rj_TPF;
	cout<<"Ingrese todos lo valores que desea sumar: ";
	cin>>rj_x;
	do{
		cout<<"Ingrese el valor a sumar"<<rj_a+1<<endl;
		cin>>rj_p;
		rj_a=rj_a+1;
		rj_pg=rj_pg+rj_p;
	}while (rj_a<rj_x);
		cout<<"El resultado final de la sumatoria es de: "<<rj_pg<<endl;
	rj_IVA=rj_pg*rj_iva;
	rj_DES=rj_pg*rj_des;
	rj_TPF=rj_pg-rj_DES+rj_IVA;
	cout<<"El iva es de: "<<rj_IVA<<"$"<<endl;
	cout<<"El descuento es de: "<<rj_DES<<"$"<<endl;
	cout<<"El total a pagar final es de: "<<rj_TPF<<"$"<<endl;
cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Ingresar x cantidad de productos y calcular, iva, descuento,"<<endl;
cout<<"//==>total a pagar y el valor de la suma de todos los productos "<<endl;
cout<<"//==> Archivo : RuanoJharol-puntoventa.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Jharol"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-20"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//=================================================";
	return 0;

}

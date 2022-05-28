//================================================
//==> Nombre del programa: Cuenta Monedas
//==> Archivo : RuanoJharol-cuentamoneda.cpp
//==>Autor: Ruano Jama Jharol
//==>Fecha de elaboración: 2022-05-17
//==>Fecha ultima actualización: 2022-05-19
//=================================================
#include<iostream>
using namespace std;
int main()
{
   int rj_x,rj_cm=0,rj_md=0,rj_mv=0,rj_mc=0;
   float rj_y,rj_m=0,rj_md1=0,rj_mv2=0,rj_mc3=0,rj_d=0.10, rj_v=0.25, rj_c=0.50;
   cout<<"Cantidad de monedas a ingresar "<<endl; 
   cin>>rj_x;
  do{
    cout<<"Ingrese la moneda:"<<endl;
	cin>>rj_y;
    rj_cm=rj_cm+1;
    rj_m=rj_m+rj_y;
    if(rj_y==rj_d){
        rj_md=rj_md+1;
        rj_md1=rj_md1+rj_y;
    }
      if(rj_y==rj_v){
          rj_mv=rj_mv+1;
          rj_mv2=rj_mv2+rj_y;
      }
       if(rj_y==rj_c){
          rj_mc=rj_mc+1;
          rj_mc3=rj_mc3+rj_y;
       }
  }while(rj_cm<rj_x);
cout<<" La cantidad de monedas ingresadas es de: "<<rj_cm<<endl;
cout<<" La suma total de las monedas es de: "<<rj_m<<" $"<<endl;
cout<<"//================================================"<<endl;
cout<<" La cantidad de moneda de 10cts es: "<<rj_md<<endl; 
cout<<" El total de la(s) moneda(s) de 10cts es: "<<rj_md1<<" $"<<endl;
cout<<"//================================================"<<endl;
cout<<" La cantidad de moneda de 25cts es: "<<rj_mv<<" cts"<<endl;
cout<<" El total de la(s) moneda(s) de 25cts es: "<<rj_mv2<<" $"<<endl;
cout<<"//================================================"<<endl;
cout<<" La cantidad de moneda de 50cts es: "<<rj_mc<<" cts"<<endl;
cout<<" El total de la(s) moneda(s) de 50cts es: "<<rj_mc3<<" $"<<endl;

cout<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Cuenta moneda"<<endl;
cout<<"//==> Archivo : RuanoJharol-cuentamoneda.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Jharol"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-17"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//=================================================";
return 0;
}

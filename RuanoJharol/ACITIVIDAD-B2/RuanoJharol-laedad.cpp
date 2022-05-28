//================================================
//==> Nombre del programa: Calcular edad en dias, meses, años
//==> Archivo : RuanoJharol-laedad.cpp
//==>Autor: Ruano Jama Jharol
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-12
//=================================================
#include <iostream>
using namespace std;
void calcularEdad( int rj_aa,int rj_ma,int rj_da,int rj_an,int rj_mn,int rj_dn);
int main ()
{
    int rj_aa;  
    int rj_ma; 
    int rj_da; 
    int rj_an; 
    int rj_mn; 
    int rj_dn; 
    cout<<"Ingresar la fecha actual: "<<endl;
    cout << "Ano Actual: ";   
	cin >> rj_aa;
    cout << "Mes Actual: ";   
	cin >> rj_ma;
    cout << "Dia Actual: ";  
	cin >> rj_da;
    cout<<"Ingresar la fecha de nacimiento: "<<endl;
    cout << "Ano Nacimiento: ";  
	cin >> rj_an;
    cout << "Mes de Nacimiento: ";  
	cin >> rj_mn;
    cout << "Dia de Nacimiento: ";  
	cin >> rj_dn;
    calcularEdad(rj_aa,rj_ma,rj_da,rj_an,rj_mn,rj_dn);
    return 0;
}
void calcularEdad( int rj_aa , int rj_ma, int rj_da, int rj_an, int rj_mn, int rj_dn)
{
    int rj_dia , rj_mes;
    if (rj_da<rj_dn)
    {  
        rj_da=rj_da+30; 
        rj_ma=rj_ma-1; 
        rj_dia=rj_da-rj_dn; 
    }
    else 
        rj_dia=rj_da-rj_dn;
    if(rj_ma<rj_mn)
    {   
        rj_ma=rj_ma+12; 
        rj_aa=rj_aa-1 ; 
        rj_mes=rj_ma-rj_mn; 
    }
    else 
        rj_mes = rj_ma - rj_mn; 
    cout << "La edad es de: "<<endl;
    cout << " Anos: " <<rj_aa - rj_an << endl; 
    cout << " Meses: " << rj_mes << endl; 
    cout << " Dias: " << rj_dia << endl; 
cout<<"//================================================"<<endl;
cout<<" //==> Nombre del programa: Calcular edad en dias, meses, años"<<endl;
cout<<"//==> Archivo : RuanoJharol-laedad.cpp"<<endl;
cout<<"//==>Autor: Ruano Jama Jharol"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//=================================================";
}

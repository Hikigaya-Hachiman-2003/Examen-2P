# Programas en C++ de Ruano Jama Jharol
## Información del autor 
- Apellidos y Nombre: Ruano Jama Jharol
- Correo de contacto:  jharol.ruano.jama@utelvt.edu.ec
- Video explicativo acerca de la introducción de la programación:
https://www.youtube.com/watch?v=XJY5Vm8MtKM

## Programas

### Comparar 2 números 
En el siguiente programa vamos a poder comparar lo que son 2 números, y después de un proceso que se va a ejecutar descubriremos cuál número es mayor o sí son iguales.

#### Funcionalidad 

1. El programa nos va a pedir ingresar el primer número.

		cout<<"Escriba el primer numero: ";
		cin>>rj_a;
    
2. Luego de eso nos va a pedir ingresar el segundo número.

		cout<<"Escriba el segundo numero: ";
		cin>>rj_b;
    
3. Luego se va a realizar un proceso en el cual se va a comparar si los 2 números son iguales.

		if(rj_a==rj_b)
    
4. Después se va a realizar un proceso, donde se va a comparar si el primer número es mayor que el segundo número.

		else if(rj_a>rj_b)
    
5. Luego, se va a realizar otra proceso donde se va a comparar si el segundo número es mayor que el primer número.

		if(rj_b>rj_a)

#### Salida

1. En caso de que el tercer punto sea verdadero nos va a imprimir el siguiente resultado:

		{
		cout<<"Los numeros son  iguales";
		}
    
2. En caso de que el cuarto punto sea verdadero nos va a imprimir el siguiente resultado:

		{
		cout<<"El numero mayor es: "<<rj_a<<endl;
		}
  
3. En caso de que el quinto punto sea verdadero nos va a imprimir el siguiente resultado:

		{
		cout<<"El numero mayor es: "<<rj_b<<endl;
		}

#### Diagrama de Flujo
![RuanoJharol-compara](https://user-images.githubusercontent.com/101405632/170842823-1a3d8b90-e38f-4cc2-81f2-7238302b32ee.jpg)

================================================
### Suma de varios números
En el siguiente programa vamos a poder sumar varias cantidades de números dependiendo de nuestra necesidad.

#### Funcionalidad 

1. El programa nos va a pedir ingresar la cantidad de valores que vamos a sumar.

		cout<<"Ingrese todos lo valores que desa sumar: ";
		cin>> rj_a;
    
2. Luego el programa nos va a pedir el valor de cada uno de los números a sumar.

		do{
		cout<<"Ingrese el valor a sumar"<< rj_x+1<<endl;
		cin>> rj_b;
    
3. Luego se realiza un proceso donde se suman todos los valores.

		 rj_x= rj_x+1;
		 rj_y= rj_y+ rj_b;
4. Y por último comparamos sí la cantidad de numeros ingresados es igual a la solicitada, caso contrario se repetira el proceso.

		 }while ( rj_x< rj_a);

#### Salida

1. Nos imprime el siguiente resultado:

		cout<<"El resultado final de la sumatoria es de: "<< rj_y<<endl;

#### Diagrama de Flujo

![RuanoJharol-sumaN](https://user-images.githubusercontent.com/101405632/170842963-e823bc6d-6fca-4bdd-b542-c72e80d4b1b0.jpg)

================================================
### Punto de Venta
En el siguiente programa vamos a poder calcular el valor total de una venta de varios productos, calculando: el IVA, el descuento, el valor bruto y el total a pagar.

#### Funcionalidad 

1. El programa nos va a pedir ingresar la cantidad de valores que vamos a sumar.

		cout<<"Ingrese todos lo valores que desea sumar: ";
		cin>>rj_x;
    
2. Luego nos va a pedir ingresar el valor de los respectivos productos.

		do{
		cout<<"Ingrese el valor a sumar"<<rj_a+1<<endl;
		cin>>rj_p;
    
3. Se realiza el respectivo proceso de suma de los productos.

		rj_a=rj_a+1;
		rj_pg=rj_pg+rj_p;
    
4.  Se compara sí la cantidad de numeros productos ingresados es igual a la solicitada, caso contrario se repetira el proceso.
 
		}while (rj_a<rj_x);
    
5. Luego se calcula el IVA, el descuento y el total a pagar final.

		rj_IVA=rj_pg*rj_iva;
		rj_DES=rj_pg*rj_des;
		rj_TPF=rj_pg-rj_DES+rj_IVA;

#### Salida

1. Por último se imprime los siguientes resultados:

		cout<<"El resultado final de la sumatoria es de: "<<rj_pg<<endl;
		cout<<"El iva es de: "<<rj_IVA<<"$"<<endl;
		cout<<"El descuento es de: "<<rj_DES<<"$"<<endl;
		cout<<"El total a pagar final es de: "<<rj_TPF<<"$"<<endl;

#### Diagrama de Flujo

![RuanoJharol-puntoventa](https://user-images.githubusercontent.com/101405632/170842931-fff09e07-8acc-4e64-9834-36ba84dac6ac.jpg)

================================================
### Calcular Edad
Con el siguiente programa vamos a poder calcular la edad de una persona, animal u objeto, en años, meses y días.

#### Funcionalidad 

1. Lo primero que nos va a pedir el programa va a ser ingresar la fecha actual en el formato año, mes y día. 

		cout<<"Ingresar la fecha actual: "<<endl;
 		cout << "Año Actual: ";   
		cin >> rj_aa;
		cout << "Mes Actual: ";   
		cin >> rj_ma;
		cout << "Día Actual: ";  
		cin >> rj_da;
    
2. Luego nos va a pedir ingresar la fecha de nacimiento con el formato año, mes y día.
 
		cout<<"Ingresar la fecha de nacimiento: "<<endl;
		cout << "Ano Nacimiento: ";  
		cin >> rj_an;
		cout << "Mes de Nacimiento: ";  
		cin >> rj_mn;
		cout << "Dia de Nacimiento: ";  
		cin >> rj_dn;
    
3. Sí el día actual es menor que el día de nacimiento, se realiza el siguiente procedimiento; caso contrario se resta normalmente:
 
		if (rj_da<rj_dn)
		{  
				rj_da=rj_da+30; 
				rj_ma=rj_ma-1; 
				rj_dia=rj_da-rj_dn; 
		}
		else 
				rj_dia=rj_da-rj_dn;
        
4. Sí el mes actual es menor que el mes de nacimiento, se realiza el siguiente procedimiento; caso contrario se resta normalmente:

   		 if(rj_ma<rj_mn)
		{   
				rj_ma=rj_ma+12; 
				rj_aa=rj_aa-1 ; 
				rj_mes=rj_ma-rj_mn; 
		}
		else 
				rj_mes = rj_ma - rj_mn; 

#### Salida

1. Por ultimo se imprimen los siguientes resultados:

		cout << "La edad es de: "<<endl;
		cout << " Anos: " <<rj_aa - rj_an << endl; 
		cout << " Meses: " << rj_mes << endl; 
		cout << " Dias: " << rj_dia << endl; 

#### Diagrama de Flujo

![RuanoJharol-laedad](https://user-images.githubusercontent.com/101405632/170842917-4fde3fbf-a42b-4b86-ac6d-332b472fcd34.jpg)

================================================
### Cuenta Moneda
Con el siguiente programa se va a poder clasificar y contabilizar las distintas monedas de: 10 centavos, 25 centavos y 50 centavos; además de saber el total de todo esa sumatoria y cuánto se hace en cada una de los respectivos monedas.

#### Funcionalidad 

1. El programa nos va a pedir ingresar una cantidad de monedas.

  		 cout<<"Cantidad de monedas a ingresar "<<endl; 
   		cin>>rj_x;
      
2. Luego nos va a pedir que ingresemos la moneda respectiva. 
 
   		 do{
    		cout<<"Ingrese la moneda:"<<endl;
			cin>>rj_y;
      
3. Se realiza el proceso de suma y acumulación de las monedas. 

  		  rj_cm=rj_cm+1;
   		 rj_m=rj_m+rj_y;
       
4. Se realiza un proceso donde se clasifican las monedas respectivamente. 
 
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
           
5. Por último, se compara sí la cantidad de monedas ingresadas es igual al requerido, caso contrario se repite el proceso. 

 		 }while(rj_cm<rj_x);

#### Salida

1. Para finalizar se imprimen los siguientes resultados:
 
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

#### Diagrama de Flujo

![RuanoJharol-cuentamoneda](https://user-images.githubusercontent.com/101405632/170842888-1b759fe8-1956-4fa0-8a92-288394fb027c.jpg)

## Indicaciones para descargar y ejecutar los programas:

1. Escribir en el terminal de Termux:
 
		git clone https://github.com/Hikigaya-Hachiman-2003/Examen-2P.git
    
2. Para revisar los programas se hace uso del comando:
 
		ls 
    
3. Con el siguiente comando ingresa a un directorio:

		 cd Examen-2P
     
4. Para revisar el programa se utiliza el comando:
 
		vim RuanoJharol-compara.cpp
    
5. Para salir y guardar, se presiona el "Esc", luego ":wq" y finalmente en "enter":

![image](https://user-images.githubusercontent.com/101405632/170844868-6509dfb6-bca1-4347-a687-f07f8667d0a0.png)

6. Para volverlo ejecutable usamos el comando: 

![image](https://user-images.githubusercontent.com/101405632/170845006-dff3ddf0-7785-4a61-8653-8fb95b570473.png)

7. Para ejecutar un programa se utiliza el comando:

		 ./RuanoJharol-sumaN

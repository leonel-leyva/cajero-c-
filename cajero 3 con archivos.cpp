#include <iostream>
//LIBRERIA NOS SIRVE PARA using namespace std; Y YA NO LO ESCRIBES MAS 
#include<stdlib.h>
//LIBRERIA NOS SIGRVE PARA LA OPCION 	system("cls"); QUE ES PARA LIMPIAR PANTALLA
#include<conio.h>
// para abiri archivos 
#include <fstream>
//esta linea me sirbe para cuando escriba no me pida el std:: 
using namespace std;
//  saldos
int sal_inicial = 0;
// para sumar el depocito
int abono=0;
// para restar 
int retirar=0;
//acumula todo lo ingresado en las cuentas 
int pagar=0;
// declaracion de nip (contraseña)del usuario fijos para poder usar el cambio de nip
string contra, contra2,contra3,contra4;
// usuario definido 
string usuario;
//  de servicio 
double agua=0,luz=0,tel=0;
//saldo y contadores y la opcion que escoja en el usuario 
int opc = 0,saldo = 0,cont = 0,opc2=0;
// declaracion de la respueta 
int resp=0;
fstream docu;
bool encontrar =false ;
void ingreso();
void menu2();
void almacena_datos();

void saldos_total(){
	system("cls");
	cout<<endl;
	cout<<"********SALDO EN CUENTA ************"<<endl;
	cout<<"*************************************"<<endl;
	cout<<endl;
	cout<<" SU DINERO EN CUNTA ES DE : "<<saldo;
	cout<<endl;	
}

void num_usuario(){
	cout<<"********REGISTRO DE NUEVO USUARIO************"<<endl;
	cout<<"*************************************"<<endl;
	cout<<endl;
	string num="1234567890";
	string num_tarjeta;
	
	int x;
	for(x=0; x<10;x++)
	{
		
	num_tarjeta+=num[rand() %(0-10)];
	
	}
	
	cout<<"NUMERO DE TARJETA : "<< num_tarjeta <<'\n';
	
	do {
	cout<<"INGRESE EL NIP QUE DESE ASIGNAR \n";
	cin>>contra;

	} while (contra.length()!=4);

	docu.open(num_tarjeta.c_str(),ios::app);
	docu<<contra<<'\n';
	docu<<0<<"\n";
	
	docu.close();
	system("cls");
	menu2();
}
//pagos de servicio 
void pago_servivio(){
	cout<<"********PAGO DE SERVICIOS************"<<endl;
	cout<<"*************************************"<<endl;
	cout<<endl;
	cout<<" INGRESE LA CANTIDAD A PAGAR : "<<endl ;
	cin>>pagar;
	
		if((saldo>=pagar && pagar>0)) 
		{
			cout<<"PAGOS A SERVIVIOS   "<<endl;
			cout<<"1-AGUA "<<endl;
			cout<<"2-luz "<<endl;
			cout<<"3-TELEFONO "<<endl;
			cin>>opc2;
				switch(opc2)
				{
					case 1:
						 	saldo=saldo-pagar;
						 	agua+=pagar;
						   cout<<" SALDO RESTANTE: "<<saldo<<'\n'; 
						   break;//fin del caso 1
					case 2:  
						 	saldo=saldo-pagar;
						 	luz+=pagar;
						   cout<<"SALDO RESTANTE : "<<saldo<<'\n';
					break;
					case 3:  
					   	
						 	saldo=saldo-pagar;
						 	tel+=pagar;
						   cout<<"SALDO RESTANTE : "<<saldo<<'\n';
					break;
			}
		}
		else
		{
		  cout<<"NO CUENTA CON DINERO SUFICIENTE  "<<'\n';	
		}
		
		almacena_datos();	
}

void menu2()
{
	int nuevo;
	   cout << "---------------------------------------------------\n" ;
		cout << "---------BIENBENIDO AL BANCO LEYVA----------------- \n";
		cout << "---------------------------------------------------\n"	;
		cout <<endl;
		cout <<"1- INGRSEAR CUENTA "<<endl;
		cout <<"2- CREAR NUEVA CUENTA "<<endl;
	
		cin>> nuevo;
	
	if (nuevo == 2){
		system ("cls");
		num_usuario();
		
	} 
else if (nuevo == 1){
		system ("cls");
	return;
}
}
		
 
void chequeo(){
encontrar = false;
contra2="";

docu.open(usuario.c_str());
docu>>contra2;

if (contra==contra2)
{
	encontrar=true;
	docu>>saldo;
}
docu.close();		
}

//transaccion  a cuentas
void transa(){
	cout<<"********TRANFERENCIAS ***************"<<endl;
	cout<<"*************************************"<<endl;
	cout<<endl;
	 string aux_usuario,nip_aux2;
       double monto,monto_tra;
       
       cout<<" INGRESE EL USUARIO A TRANFERIR  ";cin>>aux_usuario;
    if(aux_usuario==usuario)
    {
    	cout<<"NO SE PUEDE TRANFERIRI USTED MISMO  "<<endl;
    	
	}
	else
	{
		docu.open(aux_usuario.c_str());
       if(docu!=NULL)
       {
       	   cout<<"INGRESE DINERO ";cin>>monto;
       	   if(monto>0 && saldo>=monto )
       	   {
       	   	   docu>>nip_aux2;
       	   	   docu>>monto_tra;
       	   	   docu.close();
       	   	   docu.open(aux_usuario.c_str());
       	   	   saldo=saldo-monto;
       	   	   monto_tra+=monto;
       	   	   docu<<nip_aux2<<'\n';
       	   	   docu<<monto_tra<<'\n';
       	   	  
       	   	    docu.close();
  	 
       	   	   cout<<"MONTO TRANFERIDO  "<<monto;
		   }
		   else
		   {
		   	  cout<<"NO TIENE SALDO SUFICIENTE  "<<endl;
		   }
	   }
       else
       {
       	 cout<<"NO SE ENCONTRO EL USUARIO  "<<endl;
	   }
	}

		}
	

	
// mopulo para cambiar nip 
void nip_cambio(){
 	cout<<"********CAMBIO DE NIP ************"<<endl;
	cout<<"*************************************"<<endl;
	cout<<endl;
  	 	cout<<"INGRESE SU NIP ACTUAL "<<endl ;
		cin>>contra3;
  	 	
  	 	if(contra==contra3)
  	 	{
  	 		do
  	 		{
	            cout<<"INGRESE EL NIP NUEVO   "<<endl;
				cin>>contra4;
	            
			}while(contra4.length()!=4);
			
			contra=contra4;	
	     }
	   	almacena_datos();
      system("cls");
}


//suma dinero a la cuenta del usuario 
void deposito(){
	cout<<"**************DEPOCITO****************"<<endl;
	cout<<"*************************************"<<endl;
    cout<<endl;
	cout<<"INGRESE LA CANTIDAD A INGRESAR : "; 
	 cin>>abono;
    cout<<endl; 
    
    if(abono>0 )
   {
   	if (  abono%20==0 ||  abono% 50==0 ){
   	   		saldo=saldo+abono;
   	   	
        cout<<" EL DEPOCITO FUE REALISADO FABORABLE MENTE  "<<endl;
        system("pause ");
        almacena_datos();
		  }
		  	 else
	 {
 
	cout<<" EL MONTO NO FUE INGRESADO "<<endl;
	   system("pause ");
	}
	}

}  
   
   
   //para retirar dineto
void retiro(){
cout<<"**************RETIROS****************"<<endl;	
cout<<"*************************************"<<endl;
cout<<endl;
cout<<"INGRESE LA CANTIDAD : "; 
 cin>>retirar;
if(retirar>0 ||saldo < retirar) 
{	
     if ( retirar%20==0 ||  retirar% 50==0 ) {
     	saldo = saldo - retirar;	
 			cout<<"EL RETIRO FUE EXITOSO "<<endl;
	 }
	 else{  
 				
 	     	cout<<"no tienes dinero en tu cuenta para retirar";
		} 
 			
	 }
 		
 	 	
	almacena_datos();
 }
  
  void almacena_datos()
 {
 	docu.open(usuario.c_str());
 	docu<<contra<<'\n';
 	docu<<saldo<<'\n';
 	docu.close();
 }
 
  void genera()
{
		docu.open(usuario.c_str());
		docu>>contra;
		docu>>saldo;
		
		docu.close();
}

//principal
 int main() {
 
 	//cambia color de letra y fondo 
	system("color 0a");
		
	 menu2();
	while (cont != 3)
	{
	
		cout << "INGRESE SU NUMERO DE CUENTA  : ";
	        	cin >> usuario;
				cout << "INGRESE SU PIN :  ";
	          	cin >> contra;
	          	system("cls");
		       chequeo();
		
		if (encontrar == true)
	          	{
	          		system("cls");		  
	       do	{   
		cont=0;	
		genera();
	    cout << "---------------------------------------------------\n" ;
		cout << "---------BIENBENIDO AL BANCO LEYVA----------------- \n";
		cout << "---------------------------------------------------\n"	;
		cout << endl;
				//MENU PRICIPAR PARA EL CLIENTE 
				
				cout << "*1-DEPOCITAR EN CUENTA \n";
				cout << "*2-HACER UN RETIRO \n";
				cout << "*3-DESEA CAMBIAR SU PIN \n";
				cout << "*4-TRANSACCION \n";
				cout << "*5-CHEQUEO DE SALDO" << endl;
				cout << "*6-PAGO DE SERVICIO "<< endl;
				cout << "*7-SALIR \n" << endl;
				cout << "--------------------------------------------\n";
				cout << "*POR FAVOR PONGA LA OPCION DECIEADA  \n";
				cin >> opc;
				// este codigo lo puse para limpiar la pantalla cada que eliges algo y no se aumente los archivos 
  
       
				switch (opc){
				
				case 1:
				system("cls");
				deposito();
				system("cls");
					break;
					
				case 2:
				system("cls");
				retiro();
				system("pause");
				system("cls");
				
					break;
				
				case 3:
				system("cls");
				nip_cambio();
				system("pause");
				system("cls");
					break;
					
				case 4:
			system("cls");		
			 transa();
			system("pause");
			system("cls");
					break;	
					
				case 5:
				system("cls");
					saldos_total();
				system("pause");
				system("cls");
					break;	
					
					case 6:
				system("cls");	
					pago_servivio();
				system("pause");
				system("cls");		
					break;
					
					case 7:
			    system("cls"); 		
					 menu2();
				system("pause");
				system("cls");	 
					break;
					
				}

			} while (opc != 7);
	         	
			}
			
			    else {
			    			system("cls");
		      	cont += 1;
		      
			cout << "---------------------------------------------------------------------\n";
			cout << "  LOS DATOS SON INCORRECTOS INTENTE NUEVA MENTE : \n ";
			cout << "  USTED TIENE TAN SOLO 3 OPORTINIDADES \n";
			cout << "  USTED YA LLEVA " << cont;
			cout << endl;
			cout << "-------------------------------------------------------------------------\n";
				system("pause");
				system("cls");
			  }  
		
				}		
		}






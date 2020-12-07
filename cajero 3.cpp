#include <iostream>
//LIBRERIA NOS SIRVE PARA using namespace std; Y YA NO LO ESCRIBES MAS 
#include<stdlib.h>
//LIBRERIA NOS SIGRVE PARA LA OPCION 	system("cls"); QUE ES PARA LIMPIAR PANTALLA
#include<conio.h>

//esta linea me sirbe para cuando escriba no me pida el std:: 
using namespace std;

//para el usuario checar sus datos 
string nombre="",nip="";

// acumuladro de saldos
double sal_inicial = 0,sal_inicial2 = 0,sal_inicial3 = 0;
// para sumar el depocito
double sumar=0;
// para restar 
double retirar=0;
//acumula todo lo ingresado en las cuentas 
double acumulador=0,acumulador2=0,acumulador3=0;
// declaracion de nip (contraseña)del usuario fijos para poder usar el cambio de nip
string nip1="1234", nip2="5678", nip3="12345" , nip4;
// usuario definido 
string usuario="1234567890", usuario2="0987654321", usuario3="1029384756" , usuario4;
//saldo y contadores y la opcion que escoja en el usuario 
int opc = 0,saldo = 0,cont = 0;
//para las tranferencias 
int transacion =0;

int saldo1, saldo2, saldo3,correcto=0;

// declaracion de la respueta 
int resp=0;



//checar  por que no me da el chequeo de saldo todal 
void chequeo(){
	
	if (nip==nip1){
		cout<<"EL SALDO ACTUAL ES DE : $ "; 
	cout<<sal_inicial;
	}
	
	else if (nip==nip2){
	cout<<"EL SALDO ACTUAL ES DE : $ "; 
	cout<<sal_inicial2;
	}

	else {
			cout<<"EL SALDO ACTUAL ES DE : $ "; 
	cout<<sal_inicial3;
	}	

	
}


void transa(){
cout << "INGRESE  EL USUARIO QUE DESEA HACER LA TRANSACCION:   " ;
cin>> usuario4;
	
	  if (usuario4 == usuario || usuario4 == usuario2  || usuario4 == usuario3){
		
		cout <<"INGRESE LA CANTIDAD A TRANERIR  :";
		cin>>transacion;
		
			if (transacion >=sal_inicial  || transacion >= sal_inicial2 || transacion >= sal_inicial3 ){
			
			cout <<"NO TIENE  DINERO SUFICIENTE ";
		}
			
		 if(sal_inicial <= transacion ||  sal_inicial2 <= transacion || sal_inicial3 <= transacion ){
			//tranferencia a ucuarios 1 asia 2 y 3 
			if (nombre == usuario  && usuario4 == usuario2 ){
				 
				 sal_inicial -= transacion;
				 sal_inicial2+= transacion;	
			
			}
			else if (nombre == usuario  && usuario4 == usuario3 ){
				 
				 sal_inicial -= transacion;
				 sal_inicial3+= transacion;	
			
			}
			//tranferencia a ucuarios 2 asia 1 y 3 
			else if (nombre == usuario2  && usuario4 == usuario ){
				 
				 sal_inicial2 -= transacion;
				 sal_inicial+= transacion;
			
			}
			else if (nombre == usuario2  && usuario4 == usuario3 ){
				 
				 sal_inicial2 -= transacion;
				 sal_inicial3+= transacion;	
			
			}
				//tranferencia a ucuarios 3 asia 1 y 2 
		    else if (nombre == usuario3  && usuario4 == usuario ){
				 
				 sal_inicial3 -= transacion;
				 sal_inicial+= transacion;	
			
			}
				 
			else if (nombre == usuario3  && usuario4 == usuario2){
				 
				 sal_inicial3 -= transacion;
				 sal_inicial2+= transacion;	
				
			}
		cout <<"LA TRANSACCION FUE REALISADA CON EXITO ";
		}
		}
	}
	
	
 
 
	
	
	
// mopulo para cambiar nip 
void nip_cambio(){
	

	// falta checar que me cambie bien el nip por que no me lo cambia correctamente 
	 cout<<endl;
  	  cout<<"INGRESE SU ANTIGUO NIP: \n";
  	  cin>>nip;
  	  cout<<endl;
 	system("cls");
  	 
if ( nip==nip1){
	 //cambio de nip del primero usuario 
     	cout<<"USUARIO  "<< nombre <<"   INGRESE SU NUEVO NIP \n";
		cin>>nip1;
     	nip=nip1;
     	//cambio de nip del segundo usuario 
     }
     if  (nip==nip2){
	 //cambio de nip del primero usuario 
     	cout<<"INGRESE SU NUEVO NIP \n";
		cin>>nip2;
     	nip=nip2;
     }
	 //cambio de nip del segundo usuario 
    if  (nip==nip3){
	 //cambio de nip del primero usuario 
     	cout<<"INGRESE SU NUEVO NIP \n";
		cin>>nip3;
     	nip=nip3; 
}	
	
}



//suma dinero a la cuenta del usuario 
double deposito(double sumar){

   if(nombre == usuario  && nip==nip1)
   {
       cout << endl;
       sal_inicial=sal_inicial+sumar;
       acumulador+=sal_inicial;
   }
   
   else if(nombre == usuario2 && nip ==nip2)
   {   
       sal_inicial2=sal_inicial2+sumar;    
        acumulador2+=sal_inicial2;
   }
   else 
   {
       sal_inicial3=sal_inicial3+sumar;   
         acumulador3+=sal_inicial3;   
   }
   return ((acumulador)||(acumulador2)||(acumulador3));
}  
   
   
   //para retirar dineto
double retiro(double retirar){

   if(nombre == usuario && nip==nip1)
   {
       
       	if (retirar > sal_inicial)
					{
						cout << "NO TIENE DINERO SUFICIENTE";
						cout << endl;

					}
					else
					{
          // se arreglo los acomuladores  para poder aumentar o retirar dinero 
						sal_inicial  = sal_inicial - retirar;
					
					}
      
       acumulador+=sal_inicial;
   }
   
   else if(nombre == usuario2  && nip == nip2)
   {
       	if (retirar > sal_inicial2)
					{
						cout << "NO TIENE DINERO SUFICIENTE";
						cout << endl;

					}
					else
					{
          // se arreglo los acomuladores  para poder aumentar o retirar dinero 
					 sal_inicial2  = sal_inicial2 - retirar;
						cout << endl;
				
					}  
       acumulador+=sal_inicial2;
   }
   else 
   {
       	if (retirar > sal_inicial3)
					{
						cout << "NO TIENE DINERO SUFICIENTE";
					}
					else
					{
          // se arreglo los acomuladores  para poder aumentar o retirar dinero 
						sal_inicial3  = sal_inicial3 - retirar;
						cout << endl;
					
					}
      
       acumulador+=sal_inicial3;
   }
    cout<<"SU RETIRO FUE REALISADO CON EXITO ";  
    return ((acumulador)||(acumulador2)||(acumulador3));
   }
  

//principal

 int main() {
 	//cambia color de letra y fondo 
	system("color 0a");
	
	while (cont != 3)
	{
	
		cout << endl;
		
	
			cout << endl;
		
				cout << "INGRESE SU NOMBRE : ";
	        	cin >> nombre;
	
				cout << "INGRESE SU PIN :  ";
	          	cin >> nip;
	          	system("cls");
	          	
	    	cout << "---------------------------------------------------\n" ;
		cout << "---------BIENBENIDO AL BANCO LEYVA----------------- \n";
		cout << "---------------------------------------------------\n"	;
		cout << endl;
		cout << endl;
	
		//valida que el nup y el nombre sean correctos al usuario 
		
		
	    if ((nombre == usuario  && nip == nip1)||(nombre == usuario2 && nip == nip2)||(nombre==usuario3 && nip==nip3)){
	          
	          
	          do
			{
			
			
	         cout << endl;
	         
				//MENU PRICIPAR PARA EL CLIENTE 
				
				cout << "*1-DEPOCITAR EN CUENTA \n";
				cout << "*2-HACER UN RETIRO \n";
				cout << "*3-DESEA CAMBIAR SU PIN \n";
				cout << "*4-TRANSACCION \n";
				cout << "*5-CHEQUEO DE SALDO" << endl;
				cout << "*6-SALIR \n" << endl;
				cout << "--------------------------------------------\n";
				cout << "*POR FAVOR PONGA LA OPCION DECIEADA  \n";
				cin >> opc;
				// este codigo lo puse para limpiar la pantalla cada que eliges algo y no se aumente los archivos 
       system("cls");
       
				switch (opc){	
				case 1:
					cout << "DIJITE EL DINERO QUE DESEA INGRESAR \n";
					cin >> sumar;
					deposito(sumar);
					cout<<"SU DEPOCITO FUE REALISADO CON EXITO ";
				    cout<< endl;
				    cout << "--------------------------------------------\n";
				    system("pause");
				    system("cls");
					break;
					
				case 2:
					cout << "DIGITE LA CANTIDAD A RETIRAR \n";
					cin >> retirar;
                    retiro(retirar);
				    cout<< endl;
				    cout << "--------------------------------------------\n";
				    system("pause");
				     system("cls");
					break;
					
				case 3:
					cout << "--------------------------------------------\n";
					nip_cambio();
					cout << endl;
					cout<<"EL CAMBIO  DE SU NIP FUE CORRECTA MENTE ";
					cout << "--------------------------------------------\n";
					system("pause");
				    system("cls");
					break;
					
				case 4:
					cout << "--------------------------------------------\n";
					transa();
					cout << endl;	
					system("pause");
				    system("cls");	
				 cout << endl;
				cout << "--------------------------------------------\n";
					break;	
					
				case 5:
					cout << "--------------------------------------------\n";
					chequeo();
					cout << endl;
					cout << "--------------------------------------------\n";
					system("pause");
				    system("cls");
					
					break;	
					
					case 6:
					break;
					break;
					
				}

			} while (opc != 6);
	         	
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






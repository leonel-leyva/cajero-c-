#include <iostream>
#include<stdlib.h>
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

int opc = 0,saldo = 0,cont = 0;

int saldo1, saldo2, saldo3,correcto=0;



int resp=0;




double deposito(double sumar){

   if(nombre =="leonel" && nip=="1234")
   {
       cout << endl;
       sal_inicial=sal_inicial+sumar;
       cout<<" dinero de su cuenta es : "<<sal_inicial;
      
       acumulador+=sal_inicial;
   }
   
   else if(nombre =="carlos" && nip =="5678")
   {
      
       sal_inicial2=sal_inicial2+sumar;
       cout<<" dinero de su cuenta es : "<<sal_inicial2;
        
        acumulador2+=sal_inicial2;
   }
   else 
   {
   	
       sal_inicial3=sal_inicial3+sumar;
       cout<<" dinero de su cuenta es : "<<sal_inicial3;
          
         acumulador3+=sal_inicial3;   
   }
   return ((acumulador)||(acumulador2)||(acumulador3));
}  
   
   
   //para retirar dineto
double retiro(double retirar){

   if(nombre =="leonel" && nip=="1234")
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
						cout << "SU SALDO RESTANTE ES DE : " << sal_inicial;
						cout << endl;
					}
      
       acumulador+=sal_inicial;
   }
   
   else if(nombre =="carlos" && nip =="5678")
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
						cout << "SU SALDO RESTANTE ES DE : " << sal_inicial2;
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
						cout << "SU SALDO RESTANTE ES DE : " << sal_inicial3;
							cout << endl;
					}
      
       acumulador+=sal_inicial3;
   }  
    return ((acumulador)||(acumulador2)||(acumulador3));
   }
  





// menu principal 

void menu(){
do
			{
				cout << endl;
				cout << "---------------------------------------------------\n";
	         cout << endl;
				//MENU PRICIPAR PARA EL CLIENTE 
				
				cout << "1-DESEA HACER UN RETIRO \n";
				cout << "2-DESEA INGRESAR DINERO \n";
				cout << "3-DESEA CAMBIAR SU PIN \n";
				cout << "4-SALIR \n" << endl;
				cout << "--------------------------------------------\n";
				cout << "POR FAVOR PONGA LA OPCION DECIEADA  \n";
				cin >> opc;
				// este codigo lo puse para limpiar la pantalla cada que eliges algo y no se aumente los archivos 
       system("cls");
       
				switch (opc)
				{
                
				
				
				case 1:{
					cout << "DIGITE LA CANTIDAD A RETIRAR \n";
					cin >> retirar;
                      retiro(retirar);
					
				}

				
					break;
				case 2:{
				cout << "DIJITE EL DINERO QUE DESEA INGRESAR \n";
					cin >> sumar;
					deposito(sumar);
					break;
				}
  
				case 3:{
					cout << "--------------------------------------------\n";
					cout << "INGRESE SU NUEVO NIP \n";
					break;
					}
				case 4:{
					
			system("cls");
			cout << "INGRESE SU NOMBRE : ";
	        	cin >> nombre;
	
				cout << "INGRESE SU PIN :  ";
	          	cin >> nip;
	          	system("cls");
			
		cout << "---------------------------------------------------\n" << endl	;
			cout << "---------BIENBENIDO AL BANCO LEYVA-------------- \n";
					break;
				}
				
				}

			} while (cont != 5);	
	
}




//principal

 int main() {
 	

	
	while (cont != 3)
	{
	
		cout << endl;
		
		
				cout << "INGRESE SU NOMBRE : ";
	        	cin >> nombre;
	
				cout << "INGRESE SU PIN :  ";
	          	cin >> nip;
	          	system("cls");
	          	
		cout << "---------------------------------------------------\n" << endl	;
		cout << "---------BIENBENIDO AL BANCO LEYVA-------------- \n";
	    if ((nombre == "leonel" && nip == "1234")||(nombre == "carlos" && nip == "5678")||(nombre=="luis" && nip=="12345"))
	             menu();
            	else
		          {
			cont += 1;
			cout << "---------------------------------------------------------------------\n";
			cout << "  LOS DATOS SON INCORRECTOS INTENTE NUEVA MENTE : \n ";
			cout << "  USTED TIENE TAN SOLO 3 OPORTINIDADES \n";
			cout << "  USTED YA LLEVA " << cont;
			cout << endl;
			cout << "-------------------------------------------------------------------------\n";
	         	}
		
		
			return 0;	}		
		}






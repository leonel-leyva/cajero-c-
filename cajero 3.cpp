#include <iostream>
#include<stdlib.h>
#include<conio.h>
int opc = 0, sal_inicial = 0, retirar = 0, saldo = 0, ingresa = 0, cont = 0;
int saldo1, saldo2, saldo3;
//esta linea me sirbe para cuando escriba no me pida el std:: 
using namespace std;
string nombre = "", conta = "",resp="";



int main() {
	//Correciones te falto del while para que terminara ala tercera
	while (cont != 3)
	{
	
		cout << endl;
		
		cout << "---------BIENBENIDO AL BANCO LEYVA-------------- \n";
		cout << "---------------------------------------------------\n" << endl;
	
		cout << "INGRESE SU NOMBRE : ";
		cin >> nombre;

		cout << "INGRESE SU PIN :  ";
		cin >> conta;
	system("cls");
		if ((nombre == "leonel" && conta == "1234") || (nombre == "david" && conta == "5678") || (nombre == "fernando" && conta == "12345"))
		{
			do
			{
				

	          
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
                if (nombre == "leonel" && conta == "1234")
					saldo = sal_inicial;
				else
	  			{
					(nombre == "david" && conta == "5678");
					saldo = sal_inicial;
				}
				(nombre == "fernando" && conta == "12345");
				saldo =sal_inicial;
				
				
				case 1:

					cout << "DIGITE LA CANTIDAD A RETIRAR \n";
					cin >> retirar;

					if (retirar > saldo)
					{
						cout << "NO TIENE DINERO SUFICIENTE";

					}
					else
					{
          // se arreglo los acomuladores  para poder aumentar o retirar dinero 
						saldo = saldo - retirar;
						cout << "SU SALDO RESTANTE ES DE : " << saldo;
							cout << endl;
					}
					break;
				case 2:
  
					cout << "DIJITE EL DINERO QUE DESEA INGRESAR \n";
					cin >> ingresa;
					saldo = saldo+sal_inicial + ingresa;
					cout << "SU SALDO ACUTUAL ES DE : " << saldo;
					cout << endl;
					break;

				case 3:
					cout << "--------------------------------------------\n";
					cout << "INGRESE SU NUEVO NIP \n";
					break;
				case 4:
					return 0;
					break;



				}





			} while (cont != 4);

		}
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
		
	}


	return 0;
}

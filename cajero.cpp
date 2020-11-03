#include <iostream>
#include<conio.h>
int opc=0, sal_inicial=500, retirar=0 ,saldo=0,ingresa=0,cont=0;
//esta linea me sirbe para cuando escriba no me pida el std:: 
using namespace std;
string nombre="",conta="";



int main() {
	do
	{
		cout << endl;
	cout << "---------BIENBENIDO AL BANCO LEYVA-------------- \n";
	cout<<"---------------------------------------------------\n"<< endl;
		
		cout << "INGRESE SU NOMBRE : ";
		cin  >>nombre;

		cout << "INGRESE SU PIN :  ";
		cin >> conta;

		if ((nombre == "leonel" && conta == "1234") || (nombre == "david" && conta == "5678") || (nombre == "fernando" && conta == "12345"))
		{
	cout<<"---------------------------------------------------\n";
		
		//MENU PRICIPAR PARA EL CLIENTE 
		cout << "1-DESEA HACER UN RETIRO \n" ;
		cout << "2-DESEA INGRESAR DINERO \n";
		cout << "3-DESEA CAMBIAR SU PIN \n";
		cout << "4-SALIR \n"<< endl;
		cout<<"--------------------------------------------\n";
		cout << "POR FAVOR PONGA LA OPCION DECIEADA  \n";
		cin >> opc;

		switch (opc)
		{

		case 1:
	
			cout<<"DIGITE LA CANTIDAD A RETIRAR \n";
			cin>>retirar;
			
			if (retirar > sal_inicial)
			{
				cout << "NO TIENE DINERO SUFICIENTE";
				
			}
			else
			{
		
				saldo = sal_inicial - retirar;
				cout<< "SU SALDO RESTANTE ES DE : " <<saldo ;
			}
			break;
		case 2:
	
			cout << "DIJITE EL DINERO QUE DESEA INGRESAR \n";
			cin >> ingresa;
			saldo = sal_inicial + ingresa;
				cout<< "SU SALDO ACUTUAL ES DE : " <<saldo ;
				cout << endl;
				  break;
	
		case 3:
		cout<<"--------------------------------------------\n";
			cout<<"INGRESE SU NUEVO NIP \n";
           break;
		case 4:
		return 0;break;


		
		}
		
		
		}
		else
		{
			cont = cont + 1;
			cout<<"---------------------------------------------------------------------\n";
			cout << "  LOS DATOS SON INCORRECTOS INTENTE NUEVA MENTE : \n " ;
			cout << "  USTED TIENE TAN SOLO 3 OPORTINIDADES \n" ;
			cout<<  "  USTED YA LLEVA "<< cont ;
			cout << endl;
         cout<<"-------------------------------------------------------------------------\n";
		}
		
} while (cont<3);
	


	return 0;
}

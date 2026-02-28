#include <iostream>
using namespace std; /* //Inicializacion de funciones.  void LogoAscii();
void MenuCosas();
void LimpiarPantalla();
void EsperarTecla();
*/
int main()
{
	bool regi=false;
	int opcMen = 0;
	string nombre,contra,contraUs,nombreUs;
	int opcIncioSes = 0;
	while(regi != true)
	{
		cout << "1. Inicio sesion" << endl;
		cout << "2. Registrarse" << endl;
		cin >> opcIncioSes;
	switch(opcIncioSes)
	{
		case 1:
			if(nombre == "" && contra == "")
			{
				cout << "Por favor genera tu cuenta\n";
			}else
			{

				cout << "Ingresa tu nombre: \n";
				cin >> nombreUs;
				cout << "Ingresa la contraseña\n";
				cin >> contraUs;
				if(nombreUs == nombre && contraUs == contra)
				{
					cout << "Has iniciado sesion\n";
					regi = true;
				}else
				{
					cout << "Contraseña o usuario incorrecto\n";
				}
								
				
				
			}

			break;
		case 2:
			cout << "Ingresa tu nombre: \n";
			cin >> nombre;
			cout << "Ingresa la contraseña\n";
			cin >> contra;
			break;
	}
	}


	opcMen = 0; 
	int total, opcionCarrito;
	while(opcMen != 6)
	{
	

		opcMen = 0; 
	
		cout << "   ##     #####    #####    ##  ##   ######     ##      ####    ###### " << endl;
		cout << "  ####    ##  ##   ##  ##   ##  ##   ##        ####    ##         ## " << endl;
		cout << " ##  ##   ##  ##   ##  ##   ##  ##   #####    ##  ##    ####      ## " << endl;
		cout << " ##  ##   #####    #####    ##  ##   ##       ##  ##       ##     ## " << endl;
		cout << " ######   ##       ##       ##  ##   ##       ######       ##     ## " << endl;
		cout << " ##  ##   ##       ##       ######   ##       ##  ##    ####      ## " << endl;
	
		cout << "Bienvenidos a AppuFast, la aplicación de envío de comida." << endl;
		cout << "1. Productos" << endl;
		cout << "2. Carrito" << endl;
		cout << "3. Historial de compras" << endl;
		cout << "4. Pedidos" << endl;
		cout << "5. Configuración" << endl;
		cout << "6. Salir" << endl;
		cout << "Selecciona una opción: ";
		cin >> opcMen;
		switch(opcMen)
		{
			case 1:
				//Productos

				break;
			case 2:
				//Carrito
				cout << "=== CARRITO ===\n";
				cout << "porductos en tu carrito.\n";
				cout << "1. Hamburguesa - $120\n";
				cout << "2. Papas - $80\n";
				cout << "3. Refresco - $50\n";
				cout << "Total actual: $" << total << endl;

				cout << "\n1. Vaciar carrito\n";
				cout << "2. Volver al menú\n";
				cout << "Selecciona una opción: ";
				cin >> opcionCarrito;

                if(opcionCarrito == 1)
                {
                    cout << "Carrito vaciado correctamente.\n";
                    total = 0;
                }

				break;
			case 3:
				//Historial de compras
				cout << "=== HISTORILA DE COMPRAS ===\n";
				cout << "Compra #1\n";
				cout << "Fecha: 20/02/2026\n";
				cout << "Total: $320\n";
				cout << "Estado: Entregado\n\n";

				cout << "Compra #2\n";
				cout << "Fecha: 18/02/2026\n";
				cout << "Total: $150\n";
				cout << "Estado: Entregado\n\n";

				cout << "Compra #3\n";
				cout << "Fecha: 15/02/2026\n";
				cout << "Total: $280\n";
				cout << "Estado: Cancelado\n";

				break;
			case 4:
				//Pedidos

				break;
			case 5:
				//Configuracion
				cout << "=== CONFIGURACIÓN ===\n";
				cout << "1. Cambiar nombre\n";
				cout << "2. Cambiar contraseña\n";

				break;
			case 6:
				//Salir
				
				cout << "Gracias por usar AppuFast\n";
				break;
			default:
				cout << "Opción no valida.\n";
		
		}


	system("clear||cls");
	cin.get();

	}
	return 0;
}

/*
void LogoAscii()
{

	cout << "   ##     #####    #####    ##  ##   ######     ##      ####    ###### " << endl;
	cout << "  ####    ##  ##   ##  ##   ##  ##   ##        ####    ##         ## " << endl;
	cout << " ##  ##   ##  ##   ##  ##   ##  ##   #####    ##  ##    ####      ## " << endl;
	cout << " ##  ##   #####    #####    ##  ##   ##       ##  ##       ##     ## " << endl;
	cout << " ######   ##       ##       ##  ##   ##       ######       ##     ## " << endl;
	cout << " ##  ##   ##       ##       ######   ##       ##  ##    ####      ## " << endl;

=======
void MenuPrincipal();
void LogotipoAscii();
int main()
{
	cout << "Hola mundo";
	cout << "Hola como estan" << endl;
	return 0;
>>>>>>> Stashed changes

}




void MenuPrincipal()
{

	cout << "Bienvenidos a AppuFast, la aplicación de envío de comida." << endl;
	cout << "1. Productos" << endl;
	cout << "2. Carrito " << endl;
	cout << " " << endl;
	
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;







}

void LogotipoAscii()
{


	cout<<"   ##     #####    #####    ##  ##   ######     ##      ####    ######"<<endl;
	cout<<"	 ####    ##  ##   ##  ##   ##  ##   ##        ####    ##         ## "<< endl;
	cout<<" ##  ##   ##  ##   ##  ##   ##  ##   #####    ##  ##    ####      ## "<< endl;
	cout<<" ##  ##   #####    #####    ##  ##   ##       ##  ##       ##     ## "<< endl;
	cout<<" ######   ##       ##       ##  ##   ##       ######       ##     ## "<< endl;
	cout<<" ##  ##   ##       ##       ######   ##       ##  ##    ####      ## " << endl;

}
<<<<<<< Updated upstream

void EsperarTecla()
{
	 
	cout << "Preciona cualquier tecla." << endl;
	cin.get();
}


*/

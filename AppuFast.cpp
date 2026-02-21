#include <iostream>
#include <cstdlib>

using namespace std;

/*
//Inicializacion de funciones.
void LogoAscii();
void MenuCosas();
void LimpiarPantalla();
void EsperarTecla();
*/
int main()
{
	bool salir = false;
	int opcMen = 0; 

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

				break;
			case 3:
				//Historial de compras

				break;
			case 4:
				//Pedidos

				break;
			case 5:
				//Configuracion

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


}

void MenuCosas()
{

	cout << "Bienvenidos a AppuFast, la aplicación de envío de comida." << endl;
	cout << "1. Productos" << endl;
	cout << "2. Carrito" << endl;
	cout << "3. Historial de compras" << endl;
	cout << "4. Pedidos" << endl;
	cout << "5. Configuración" << endl;
	cout << "6. Salir" << endl;
	cout << "Selecciona una opción: " << endl;


}


void LimpiarPantalla()
{
	system("clear||cls");
}

void EsperarTecla()
{
	 
	cout << "Preciona cualquier tecla." << endl;
	cin.get();
}


*/

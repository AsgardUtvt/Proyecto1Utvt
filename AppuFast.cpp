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

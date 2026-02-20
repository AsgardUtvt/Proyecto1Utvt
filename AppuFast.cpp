#include <iostream>
#include <cstdlib>

using namespace std;


//Inicializacion de funciones.
void LogoAscii();
void MenuCosas();
void LimpiarPantalla();
void EsperarTecla();


int main()
{
	bool salir = false;
	do
	{
	LogoAscii();
	MenuCosas();
	EsperarTecla();
	LimpiarPantalla();
	}while(!salir);
	return 0;
}


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




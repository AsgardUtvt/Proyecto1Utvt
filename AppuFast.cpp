#include <iostream>
using namespace std;
void LogoAscii();
void MenuCosas();

int main()
{
	LogoAscii();
	MenuCosas();
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
	cout << "Selecciona una opción: " << endl;

}

/* TP # 1 - Uso de variables, valores y operaciones con tipos de datos 
TOMAS AUGUSTO SCHMID
15/04/2015
*/

#include <iostream>
using std::cout;
using std::cin;
using std::string;


int main() {

//  variables
	int numero1;
	int numero2;
	int multiplicacion;
	double division;
	string nombre;
	bool esJugadorDeFutbolMessi;
	char primeraLetraAbecedario;

	primeraLetraAbecedario = 'A'; //uso de char
	cout << "La primera letra del abecedario es la letra: " << primeraLetraAbecedario << "\n\n";
	
	esJugadorDeFutbolMessi = true; //uso de bool
	cout << "Messi es jugador de futbol?\n";
	cout << esJugadorDeFutbolMessi; 
		
	cout << "\n\n";
	cout << "Ingrese su nombre: ";
	cin >> nombre; //uso de string
	cout << "Bienvenido " << nombre << "\n\n";

	cout << "Ingrese un numero: ";
	cin >>numero1; //uso de int

	cout << "Ingrese otro numero: ";
	cin >>numero2; //uso de int

	division = numero1 / numero2; //uso de double y operador división
	multiplicacion = numero1 * numero2; //uso de operador multiplicación
	
	cout << "\n";
	cout << "La multiplicacion de " <<  numero1  << " por " << numero2 << " es igual a " << multiplicacion << "\n";
	cout <<  numero1  << " dividido " << numero2 << " es igual a " << division;
	cout << "\n";
	
	if 	(multiplicacion >= 100) { //uso de operador mayor o igual. Usé condicionales para darle un poco de sentido al ejemplo..
	
			cout << "El resultado de la multiplicacion tiene mas de dos digitos";
	 	} 
	 	
	else { 
		cout << "El resultado de la multiplicacion tiene menos de tres digitos";
		}
	
}


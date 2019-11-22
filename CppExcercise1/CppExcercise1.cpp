// CppExcercise1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

// Prototypes
void menu();
void fibonnacci();
void say_something();
void pair_impair();
void menu();
void factorial();
////

int main()
{
	while (1) 
	{
		menu();
	}
}

/// Declarations
void menu() {
	string msg = "\nWelcome to this multiporpuse software";
	msg += "\n 1. Say Something";
	msg += "\n 2. Pair and impair number";
	msg += "\n 3. Fibonnacci Serie";
	msg += "\n 4. Factorial";
	msg += "\n 5. Exit \n";
	cout << msg;
	int option;
	cin >> option;
	switch (option)
	{
	case 1:
		say_something();
		break;
	case 2:
		pair_impair();
		break;
	case 3:
		fibonnacci();
		break;
	case 4:
		factorial();
		break;
	case 5:
		exit(EXIT_SUCCESS);
		break;
	default:
		break;
	}
}

void say_something() {
	string msg;
	cout << "Type Something";
	getline(cin, msg);
	cout << "\nYou said this: " + msg;
}

void pair_impair() {
	int number;
	cout << "Type your number: ";
	cin >> number;
	bool res = number % 2 == 0;
	string msg = "\nYour number is ";
	msg += res ? "pair" : "impair";
	cout << msg;
}

void fibonnacci() {
	int max;
	int current = 1;
	int n1=2, n2=1;
	cout << "Digit the numbers of elements \n";
	cin >> max;
	cout << "\n  "<<n2;
	cout << "\n  "<<n1;
	for (size_t i = 0; i < max; i++)
	{
		current = n1 + n2;
		cout << "\n  "<<current;
		n2 = n1;
		n1 = current;
	}
}

void factorial() {
	int res = 1, number = 0;
	cout << "Digit your number: ";
	cin >> number;
	while (number > 0) {
		res = res * number;
		number--;
	}
	cout << "Your result is: " << res;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

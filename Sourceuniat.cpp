#include <iostream>

using namespace std;

int main() {
	//Tarea y actividad en clase

	//Que puedas ingresar 2 numeros donde cada uno se sume, reste,multiplique, divide, y saque el residuo de cada respuesta que se guarde

	int x, y;

	cout << "Introduzca el valor de X: "; cin >> x;
	cout << "Introduzca el valor de Y: "; cin >> y;

	

	float suma = (x + y);
	float resta = (x - y);
	float division = (x / y);
	float multi = (x*y);
	float residuo = (x % y);

	cout << "La suma de X y Y es: "<< suma << endl;
	cout << "La resta de X y Y es: "<<resta<<endl;
	cout << "La division de X y Y es: "<<division<<endl;
	cout <<"La multiplicacion de X y Y es: "<< multi<<endl;
	cout << "El residuo de X y Y es: "<<residuo<<endl;

	







	/*
	//variables numerica
	int variable = 12, variableY = 10, variableX = 2;
	//variable decimal
	float variable2 = 2.5; 
	// variable letra
	char letra = 'a';
	//variable palabra completa
	char palabra[10]= "Hola!";
	//Variable de si o no 
	bool condicion = true;

	//Introducir datos
	string unaVariable;
	cin >> unaVariable;
	cout <<"El valor es: "<< unaVariable;*/

	
	return 0;





}

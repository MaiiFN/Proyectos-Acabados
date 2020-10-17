#include <iostream>
using namespace std;

int main(){

//Usar la tarea pasada de la calculadora, donde te deje ingresar la respuesta de la operacion y decirte si estas en lo correcto o no,
// y al final sacar un puntaje de las respuestas correctas

	//Problema 1 Suma
	cout << "Problema Numero 1 \n"<<endl;

	int x, y,r1,r2,r3,r4,r5,puntos=0,p1=0,p2=0,p3=0,p4=0,p5=0;
	

	cout << "Ingrese el valor de X: "; cin >> x;
	cout << "Ingrese el valor de Y: "; cin >> y;

	int suma = (x + y);
	cout << "Cual es la suma de: " << x << " y " << y <<endl; cin >> r1;

	if (r1 == suma) { cout << "-----Estas en lo correcto-----"<<endl; }
	else { cout << "-----La respuesta es incorrecta-----"<<endl; }
	if (r1 == suma) { p1 = +1; }
	cout << "La respuesta correcta es: " << suma<<endl;
	cout << "Puntos : " << p1;


	//Problema 2 Resta
	cout << "\n-------------------Problema Numero 2-------------------\n" << endl;

	cout << "Ingrese el valor de X: "; cin >> x;
	cout << "Ingrese el valor de Y: "; cin >> y;

	int resta = (x - y);
	cout << "Cual es la resta de: " << x << " y " << y << endl; cin >> r2;

	if (r2 == resta) { cout << "-----Estas en lo correcto-----\n"<<endl; }
	else { cout << "-----La respuesta es incorrecta-----"<< endl; }
	if (r2 == resta) { p2 = +1; }

	cout << "La respuesta correcta es: " << resta << endl;
	cout << "Puntos : " << p2;


	//Problema 3 multiplicacion
	cout << "\n-------------------Problema Numero 3-------------------\n" << endl;

	cout << "Ingrese el valor de X: "; cin >> x;
	cout << "Ingrese el valor de Y: "; cin >> y;

	int multi = (x * y);
	cout << "Cual es la multiplicacion de: " << x << " por " << y << endl; cin >> r3;

	if (r3 == multi) { cout << "-----Estas en lo correcto-----\n"<< endl; }
	else { cout << "-----La respuesta es incorrecta-----"<<endl; }
	if (r3 == multi) { p3 = +1; }


	cout << "La respuesta correcta es: " << multi << endl;
	cout << "Puntos : " << p3;


	//Problema 4 division
	cout << "\n-------------------Problema Numero 4-------------------\n" << endl;

	cout << "Ingrese el valor de X: "; cin >> x;
	cout << "Ingrese el valor de Y: "; cin >> y;

	int div = (x / y);
	cout << "Cual es la division redondeada de: " << x << " y " << y << endl; cin >> r4;

	if (r4 == div) { cout << "-----Estas en lo correcto-----\n"<< endl; }
	else { cout << "-----La respuesta es incorrecta-----" << endl; }
	if (r4 == div) { p4 = +1; }


	cout << "La respuesta correcta redondeada es: " << div << endl;
	cout << "Puntos : " << p4;


//Problema 5 Residuo
	cout << "\n-------------------Problema Numero 5-------------------\n" << endl;

	cout << "Ingrese el valor de X: "; cin >> x;
	cout << "Ingrese el valor de Y: "; cin >> y;

	int residuo = (x % y);
	cout << "Cual es el residuo redondeado de: " << x << " y " << y << endl; cin >> r5;

	if (r5 == residuo) { cout << "-----Estas en lo correcto-----\n" << endl; }
	else { cout << "-----La respuesta es incorrecta-----" << endl; }
	if (r5 == residuo) { p5 = +1; }
	cout << "La respuesta correcta redondeada es: " << residuo << endl;

	cout << "\nPuntos : " << p5 << endl;

	cout << "----------------------FIN---------------------------";

	puntos = (p1 + p2 + p3 + p4 + p5);

	cout << "\nTotal de puntos: " <<puntos<<endl;
	


return 0;
}


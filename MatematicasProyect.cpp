#include <iostream>;
using namespace std;

// Vamos a ver para que funciona un for
int main() {

	//Numero que va a guardar nuestro grado
	int grado; //Exponentes

	cout << "Cual es el grado del polinomio: ";
	cin >> grado; //Grado individual

	float* P; //Arreglo dinamico
	P = new float [ grado + 1]; //Exponentes 

	//-------------------------------------------------------------------

	//Numeros de la izquierda, los numeros enteros reales
	for (int i = 0; i <= grado; i++) {
		cout << "Introduce el valor principal " << i << " : ";
		cin >> P[i]; //Introducimos nuestros valores enteros reales
	}//Acaba mi ciclo

	//------------------------------------------------------------------

	//Imprimir el polinomio
	cout << "\nEl polinomio es: " << endl;
	//Funcion para imprimir el polinomio.
	for (int i = 0; i <= grado; i++) {
		cout << "   +   " << P[i] << "(x)^" << i;
	}//Termina el ciclo de impresion

	//----------------------------------------------------------------

	//Preguntas para la tabulacionNo
	int valorInicial, valorFinal, intervalo;
	cout << "\n\n-----Tabulacion-----" << endl;

	//Valor inicial para definir el intervalo
	cout << "\n Valor incial de la tabla: ";
	cin >> valorInicial;

	//Valor final para definir el intervalo
	cout << " Valor final de la tabla: ";
	cin >> valorFinal;

	//Intervalo
	cout << " Defina el intervalo: ";
	cin >> intervalo;

	//Diseno de la tabla

	cout << "\n   x        /     f(x)     " << endl;
	cout << " ------------------------ " << endl;

	//------------------------------------------------------------------
	
	int resultado = 0;

	 //Funcion de la tabla del intervalo Ciclo1
	for (int t = valorInicial; t <= valorFinal; t += intervalo) {

		cout << "          " /*\nLa respuesta es:*/  << endl;
		//Funcion para calcular los polinomios
		for (int i = 0; i <= grado; i++) {
			resultado += P[i] * pow(t,i) ;
		}//Termina el ciclo de impresion
		

		//cout << "\nEl polinomio es: " << endl;
		////Funcion para imprimir el polinomio.
		//for (int i = 0; i <= grado; i++) {
		//	cout << "   +   " << P[i] << "(x)^" << i;


		//contenido de la tabla
		cout << "     " << t << "          " << resultado << endl;		resultado = 0;

	}//Ciclo 1 final 



}// final int main


//FUNCIONOOOOOOOO!!!!!!!!!!! LO LOGRE!
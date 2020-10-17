#include <iostream>;
using namespace std;
//Carlos ismael gres hermosillo IPV1.

int main() {

	//Variables
	char vocal;
	char vocalA = 'a';
	char vocalE = 'e';
	char vocalI = 'i';
	char vocalO = 'o';
	char vocalU = 'u';

	//Ciclo Do while
	do {


		cout << " ---------------------------------------------------\n " << endl;
		cout << " Escriba principalmente las letras en minuscula\n "<<endl;
		
		cout << " Seleccione una letra: "; cin >> vocal;

		switch (vocal) {

			//Caso A
		case 'a':  cout << " Has elegido una vocal.\n " << endl;
			break;

			//Caso E
		case 'e': cout << " Has elegido una vocal.\n " << endl;
			break;

			//Caso I
		case 'i': cout << " Has elegido una vocal.\n " << endl;
			break;

			//Caso O
		case 'o': cout << " Has elegido una vocal.\n " << endl;
			break;

			//Caso U
		case 'u': cout << " Has elegido una vocal.\n " << endl;
			break;
			


		default: cout << " Has elegido: " << vocal << endl<<endl;
			break;




		}//Final del switch

	}


	while (vocal == vocalA || vocalE || vocalI || vocalO || vocalU ) ;













}//Final del main






























	//int main() {

	//	TAREA: Imprimir todos los numeros del 1 al 100, pero omitiendo los multiplos de un numero que el usuario asigne. usar cualquier ciclo.
	//
	//	 Ingresamos los valores que pueden ser del 1 al 100, lo pongo asi para que las compus menos potentes lo puedan hacer
	//	int valor1, valor2;
	//	cout << "Ingrese el valor inicial: "; cin >> valor1;
	//	cout << "Ingrese el valor final: "; cin >> valor2;
	//
	//	//Ingresamos el numero que se va a omitir
	//	int numeroMalo;
	//	cout << "Ingrese el valor que se va a omitir: "; cin >> numeroMalo;
	//
	//	//Formula
	//		for (int i = 1; i <= valor2; i++) {
	//
	//			if( i % numeroMalo){ cout << "Valor: " << i << endl; }
	//			
	//	}
	//
	//return 0;
	//}







	//int main() {
	//	//Carlos ismael gres hermosillo.
	//	// TAREA: pedir dos numeros e imprimir todos los numeros que se encuentran entre ambos usando un for
	//
	//	//Pedimos los numeros
	//	int valor1, valor2;
	//
	//	//Ingresamos el pedido del valor.
	//	cout << "Ingrese el valor 1: "; cin >> valor1;
	//	cout << "Ingrese el valor 2: "; cin >> valor2;
	//
	//	for (int i = valor1; i <= valor2; i = 1+i) {
	//
	//		cout << i<<endl;
	//	}
	//
	//
	//
	//
	//	return 0;
	//}








	//Sumar numeros con un bucle while 

	//	int n1, n2, num = 1;
	//	int resultado = 0;
	//	cout << " Ingrese el valor del numero 1: "; cin >> n1;
	//	cout << " Ingrese el valor del numero 2: "; cin >> n2;
	//
	//	//Declaramos el bucle while
	//   //No se pude senalizar una variable unicamente para el while, debemos declararla antes
	//	//Con un valor 0, no puede ser sin valor definido.
	//	   while (num <= 5) { 
	//	//Hacemos primero la formula para despues impimir
	//
	//		//Nuestra formula va estar dentro de resultado que va ser n1+n2, cada vez que haga un bucle 
	//		//con "   +=  " va a sumar y asignar los valores, para sumar 2 y 2 y al siguiente 2 y 2.
	//		resultado += (n1 + n2);
	//		num++;
	//		cout << "La suma da: " << resultado << endl;
	//
	//		//No declaramos resultado = 0; porque queremos que se asignen los numeros anteriores
	//
	//	}//Final del bucle
	//
	//	return 0;
	//}

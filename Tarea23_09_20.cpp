// Tarea23_09_20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

int main()
{

    //Ejercicios
    //1. Pongan un numero y que les diga si es positivo, negativo o es 0 
    //2. - Pongan una edad y que les diga si es menor de edad, adulto o de la tercera edad(70)
    //3. - Pongan un numero y que me diga si es par o impar


     //1 Numero positivo o negativo
    float n;
    cout << "Problema 1 \n";

    cout << "Ingrese el valor de un numero positivo o negativo:  "; cin >> n;


    if (n >= 1) { cout << "El numero es positivo\n" << endl; }
    else if (n == 0) { cout << "Si el numero es 0 puede tomarse como positivo o neutro\n" << endl; }
    else { cout << "El numero es negativo\n" << endl; }




    //2  Edad si es mayor o menor o 3ra edad
    int edad;
 
    cout << "Problema 2" << endl;
    cout << "Ingrese la edad: "; cin >> edad;
    if (edad >= 18 && edad < 70) { cout << "Usted es mayor\n" << endl; }
    if (edad >= 70) { cout << "Usted es un adulto de la 3ra edad\n" << endl; }
    if (edad < 18) { cout << "Eres menor de edad\n" << endl; }
    //else { cout << "No tienes edad mi rey\n"<<endl; } 
    
    /*Error cada vez que el primer if pasaba por el recorrido
    menor que 70, imprimia doble en pantalla> Eres mayor de edad y eres menor de edad, solucion momentanea
    usar otro if donde especifique la edad minima*/




    //3 Par o impar 
    
    int x;
    cout << "Problema 3\n";

    cout << "Ingrese el valor de un numero, para saber si es par o impar:"; cin >> x;
    if ( x % 2 ) { cout << "Es impar"<<endl; }
    else { cout << "Es par"<<endl; }


    return 0; 
}

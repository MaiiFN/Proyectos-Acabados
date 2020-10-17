// Programa_Switch2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

int main()
{
    
    //Meses
    int mes;
    int mes1 = 1;
    int mes2 = 2, mes3 = 3, mes4 = 4, mes5 = 5, mes6 = 6, mes7 = 7, mes8 = 8, mes9 = 9;
    int mes10 = 10, mes11=11,mes12=12;

    //Dias
    int dias;
    int dia1 = 31, dia2 = 28, dia3 = 31, dia4 = 30, dia5 = 31;
    int dia6 = 30, dia7 = 31, dia8 = 31, dia9 = 30, dia10 = 31, dia11 = 30, dia12 = 31; 

    //resta
    int r1 , r2, r3, r4, r5, r6, r7;
    int r8, r9, r10, r11, r12;

    cout << " Elige un mes: "; cin >> mes;

        switch(mes) {
        
           //Enero
        case 1: cout << " Has elegido: Enero\n" << endl; mes1; 

            cout << " Seleccione un dia del mes: "; cin >> dia1;
            if (dia1 > 31 && dia1 > 0) { cout << " No se ha podido seleccionar el dia" << endl; } else { cout << " Usted ha elegido el dia: "<<dia1<<endl<<endl; }  r1 = dia1;

            //Contador final del year
            cout << " Han pasado " << r1 << " dias desde que inicio el year\n"<<endl;
            break;



         //Febrero
        case 2: cout << " Has elegido: Febrero\n" << endl; mes2; 

            cout << " Seleccione un dia del mes: "; cin >> dia2;
            if (dia2 > 28 && dia2 > 0) { cout << " No se ha podido seleccionar el dia" << endl; } else { cout << " Usted ha elegido el dia: " << dia2 << endl; } r2 = (31 + dia2);

            //Contador final del year
            cout << " \n Han pasado " << r2 << " dias desde que inicio el year\n" << endl;
            break;


         //Marzo
        case 3: cout << " Has elegido: Marzo\n" << endl;   mes3;
            
            cout << " Seleccione un dia del mes: "; cin >> dia3;
            if (dia3 > 31 && dia3 > 0) { cout << " No se ha podido seleccionar el dia" << endl; } else { cout << " Usted ha elegido el dia: " << dia3 << endl; } r3 = (31 + 28 + dia3);

            //Contador final del year
            cout << " \n Han pasado " << r3 << " dias desde que inicio el year\n" << endl;
            break;


            //Abril
        case 4: cout << " Has elegido: Abril\n" << endl;     mes4; 

            cout << " Seleccione un dia del mes: "; cin >> dia4;
            if (dia4 > 30 && dia4 > 0) { cout << " No se ha podido seleccionar el dia" << endl; } else { cout << " Usted ha elegido el dia: " << dia4 << endl; } r4 = (31 + 28 + 31 + dia4);

            //Contador final del year
            cout << " \n Han pasado " << r4 << " dias desde que inicio el year\n" << endl;
            break;




            //Mayo
        case 5: cout << " Has elegido: Mayo\n" << endl;    mes5 ;
            cout << " Seleccione un dia del mes: "; cin >> dia5;
            if (dia5 > 31 && dia5 > 0) { cout << " No se ha podido seleccionar el dia" << endl; } else { cout << " Usted ha elegido el dia: " << dia5 << endl; } r5 = (31 + 28 + 31 + 30 + dia5);

            //Contador final del year
            cout << " \n Han pasado " << r5 << " dias desde que inicio el year\n" << endl;
            break;



            //Junio
        case 6: cout << " Has elegido: Junio\n " << endl;    mes6;
            cout << " Seleccione un dia del mes: "; cin >> dia6;
            if (dia6 > 30 && dia6 > 0) { cout << " No se ha podido seleccionar el dia" << endl; } else { cout << " Usted ha elegido el dia: " << dia6 << endl; } r6 = (31 + 28 + 31 + 30 + 31 + dia6);

            //Contador final del year
            cout << " \n Han pasado " << r6 << " dias desde que inicio el year\n" << endl;
            break;



        //Julio
        case 7: cout << " Has elegido: Julio\n" << endl;     mes7; 
            cout << " Seleccione un dia del mes: "; cin >> dia7;
            if (dia7 > 31 && dia7 > 0) { cout << " No se ha podido seleccionar el dia" << endl; } else { cout << " Usted ha elegido el dia: " << dia7 << endl; } r7 = (31 + 28 + 31 + 30 + 31 + 30 + dia7);

            //Contador final del year
            cout << " \n Han pasado " << r7 << " dias desde que inicio el year\n" << endl;
            break;


          //Agosto
        case 8: cout << " Has elegido: Agosto\n" << endl; mes8;
            cout << " Seleccione un dia del mes: "; cin >> dia8;
            if (dia8 > 31 && dia8 > 0) { cout << " No se ha podido seleccionar el dia" << endl; } 
            else { cout << " Usted ha elegido el dia: " << dia8 << endl; } r8 = (31 + 28 + 31 + 30 + 31 + 30 + 31 + dia8);

            //Contador final del year
            cout << " \n Han pasado " << r8 << " dias desde que inicio el year\n" << endl;
            break;



        //Septiembre
        case 9: cout << " Has elegido: Septiembre\n" << endl;   mes9; 
            cout << " Seleccione un dia del mes: "; cin >> dia9;
            if (dia9 > 30 && dia9 > 0) { cout << " No se ha podido seleccionar el dia" << endl; } else { cout << " Usted ha elegido el dia: " << dia9 << endl; }
            r9 = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dia9);

            //Contador final del year
            cout << " \n Han pasado " << r9 << " dias desde que inicio el year\n" << endl;
            break;



         //Octubre
        case 10:cout << " Has elegido: Octubre\n" << endl;       mes10;
            cout << " Seleccione un dia del mes: "; cin >> dia10;
            if (dia10 > 31 && dia10 > 0) { cout << " No se ha podido seleccionar el dia" << endl; } else { cout << " Usted ha elegido el dia: " << dia10 << endl; }
            r10 = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dia10);

            //Contador final del year
            cout << " \n Han pasado " << r10 << " dias desde que inicio el year\n" << endl;
            break;




        //Noviembre
        case 11: cout << " Has elegido: Noviembre\n" << endl;  mes11;
            cout << " Seleccione un dia del mes: "; cin >> dia11;
            if (dia11 > 30 && dia11 > 0) { cout << " No se ha podido seleccionar el dia" << endl; } else { cout << " Usted ha elegido el dia: " << dia11 << endl; }
            r11 = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dia11);

            //Contador final del year
            cout << " \n Han pasado " << r11 << " dias desde que inicio el year\n" << endl;
            break;



        case 12: cout << " Has elegido: Diciembre\n" << endl;    mes12;
            cout << " Seleccione un dia del mes: "; cin >> dia12;
            if (dia12 > 31 && dia12 > 0) { cout << " No se ha podido seleccionar el dia" << endl; }else { cout << " Usted ha elegido el dia: " << dia12 << endl; }
            r12 = (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia12);

            //Contador final del year
            cout << " \n Han pasado " << r12 << " dias desde que inicio el year\n" << endl;
            break;



        





        //Si el mes no coincide
        default: cout << "No existe el mes asignado" << endl; break;

        }

        return 0;
       
}


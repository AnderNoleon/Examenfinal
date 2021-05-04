#include <conio.h>
#include <string>
<<<<<<< Updated upstream
#include <iostream>
#include<Windows.h>
#include<time.h>
=======
#include<conio.h>

>>>>>>> Stashed changes
using namespace std;

int main()
{

<<<<<<< Updated upstream
	int num1;
	int menu;
	int numeroprimo =0;
	int ma = 0;
	int minutos = 0;
	int horas = 0;
	int segundos = 0; 
	int TO =0;


	do {
		cout << "ingrese 1-2-3-4-5-6-7" << endl;
		cin >> menu;


		switch (menu)

		{

		case 1:
		{
			int num1;
			int num2;
			int num3;

			cout << "ingrese el radio " << endl;
			cin >> num1;
			cout << "ingrese la altura " << endl;
			cin >> num2;

			num3 = (3.1416 * pow(num1, 2) * num2);

			cout << "El volumen de un cilindro es de " << num3 << endl;

		}
		break;

		case 2:
		{
			char letra;
			cout << "ingrese  una letra " << endl;
			cin >> letra;

			if (letra == 'a')
			{
				cout << "es una vocal" << endl;

			}
			else if (letra == 'e')
			{

				cout << "es una  vocal" << endl;
			}
			else if (letra == 'i')
			{

				cout << "es una  vocal" << endl;
			}
			else if (letra == 'o')
			{

				cout << "es una  vocal" << endl;
			}
			else if (letra == 'u')
			{

				cout << "es una  vocal" << endl;
			}
			else
			{
				cout << "es una consonatante" << endl;
			}

		}
			break;

		case 3:

		{
			int menuu;

			cout << "Ingresa un numero entero " << endl;
			cin >> menuu;

			for (int x = 1; x < (menuu + 1); x++)

			{
				if (menuu % x == 0)
				{

					numeroprimo++;
				}
			}
			if (numeroprimo == 2)
			{
				cout << "es primo" << endl;

			}
			else
			{
				cout << "no es primo" << endl;
			}

		}
			break;
		case 4:


			int unidad;
			int decena;
			int centena;
			int unidadM;
			cout << "Ingrese un numero" << endl;
			cin >> ma;

			if (ma >= 1000 && ma <= 9999)
			{
				unidad = ma % 10;
				ma = ma / 10;
				decena = ma % 10;
				ma = ma / 10;
				centena = ma % 10;
				unidadM = ma / 10;

				cout << unidad;
				cout << decena;
				cout << centena;
				cout << unidadM;

				cout << "" << endl;
			}

			break;
		case 5:
			int nu1 , nu2, nu3;
			float total, total1;
			cout << "Ingrese un numero" << endl;
			cin >> nu1;
			cout << "Ingrese un numero" << endl;
			cin >> nu2;
			cout << "Ingrese un numero" << endl;
			cin >> nu3;
			
			total = (-nu2 + sqrt(pow(nu2, 2) - (4 * nu1 * nu3))) / (2 * nu1);
			total1 = (-nu2 - sqrt(pow(nu2, 2) - (4 * nu1 * nu3))) / (2 * nu1);


			cout << "el resultado es " << total << endl;
			cout << "el resultado es " << total1 << endl;

			break;
		case 6:

		{


			cout << "Ingrese un numero" << endl;
			cin >> ma;
			if (ma >= 100 && ma <= 999)
			{
				unidad = ma % 10;
				ma = ma / 10;
				decena = ma % 10;
				ma = ma / 10;
				centena = ma % 10;
				unidadM = ma / 10;

				cout << "Unidad: " << unidad << endl;
				cout << "Decena: " << decena << endl;
				cout << "Centena: " << centena << endl;
			}

		}

			break;
		case 7:

			
			cout << "Ingrese en segundos un tiempo" << endl;
			cin >> TO;



			 if (TO  > 64799 && TO <= 86400)
			{
				cout << " Horario de  cena ";
				horas = TO / 3600;
				TO = TO % 3600;
				minutos = TO / 60;
				segundos = TO % 60;
				cout << " " << horas;
				cout << " : " << minutos;
				cout << " : " << segundos << endl;

			}
			 else {
				 if (TO > 39599 & TO <= 64799)
				 {
					 cout << " Horario de almuerzo ";
					 horas = TO / 3600;
					 TO = TO % 3600;
					 minutos = TO / 60;
					 segundos = TO % 60;
					 cout << " " << horas;
					 cout << " : " << minutos;
					 cout << " : " << segundos << endl;

				 }
				 else
				 {

					 if (TO > 0 && TO<= 39599)
					 {
						 cout << " Horario de desayunoo ";
						 horas = TO / 3600;
						 TO = TO % 3600;
						 minutos = TO / 60;
						 segundos = TO % 60;

						 cout << "  " << horas;
						 cout << " : " << minutos;
						 cout << " : " << segundos << endl;

					 }
				 }
			 }


			break;
			
		case 8:

			cout << "Gracias" << endl;

			break;
		default: cout << "fuera ";

		}

	} while (menu != 9);
	_getch();

}
=======
    int con  =0; 
    int y =0; 
    int z =0;
    int x = 0;
    /*
     * Escriba un programa que remueva los elementos duplicados de cualquier arreglo, debe mostrar en pantalla el arreglo resultante
     * Ejemplo 1: array = [1,2,2,3] array2 = [2,2] ---> Resultado: [1,2,3]
     * Ejemplo 2: array = [0,0,0,1,2,2,3,3,3,3,3,3,4,4,4] ---> Resultado: [0,1,2,3,4]
     * Consejo: Asuma que el arreglo que se probará siempre va a estar ordenado
     */
    cout << "Challenge #1" << endl;
    int arreglo[] = { 0, 1, 1, 1, 2, 2 };  // Empiece con este arreglo ya existente, el docente modificará este arreglo para pruebas



    

    cout << "Los numero ya completos son" << endl;

   for (int x = 0; x < con; x++)
    {
       int arreglo[] = { 0, 1, 1, 1, 2, 2 };
         cout << arreglo[x];
    }

    for (int x = 0; x < con; x++)
    {
        for (y = x + 1; y < con; y++)
        {
            if (arreglo[x] == arreglo[y])

            {
                for (z = y; z > con - 1; z++)
                {
                    arreglo[z] = arreglo[z + 1];
                    con = con - 1;
                    y = x;

                }
            }
        }

    }
    for (int x = 0; x < con; x++)
    {
        cout<<"Es es sin repetidos " << endl;
        cout << arreglo[x];
        cout << endl;
       
    }

    return 0;
 }
>>>>>>> Stashed changes

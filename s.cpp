#include <conio.h>
#include <string>
#include <iostream>
#include<Windows.h>
#include<time.h>
using namespace std;

int main()
{

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

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int* item, * year, registro, opc, n = 1;
string* nombre, * clasi, * cara, * genero, * descrip;
float* precio, * iva, * total;

void alta();
void eliminar();
void modificar();
void lista();
void archivo();

int main()
{
	int opcion;
	printf("\t *****Videojuegos MayDay*****\n");
	printf("1.-Alta\n 2.-Modificar\n 3.-Eliminar Articulo\n 4.-Lista de articulos\n 5.-Limpiar pantalla\n 6.-Salir");
	scanf_s("%d", &opcion);

	switch (opcion)
	{
	case 1:
		alta();
		system("pause");
		return main();
			break;
	case 2:
		modificar();
		system("pause");
		return main();
		break;
	case 3:
		eliminar(),
		system("pause");
		return main();
		break;
	case 4:
		lista();
		system("pause");
		return main();
		break;
	case 5:
		system("cls");
		return main();
		break;
	case 6:
		archivo();
		exit(1);
		break;
	default:
		printf("la opcion que usd busca no esta presente en el menu\n Vuelva a insertar la opcion\n");
		system("pause");
		return main();
	
	}


}

void alta()
{
	printf("Cuantos registros quiere dar de alta\n");
	scanf_s("%d", &registro);
	item = new int[registro];
	year = new int[registro];
	nombre = new string[registro];
	clasi = new string[registro];
	cara = new string[registro];
	genero = new string[registro];
	descrip = new string[registro];
	precio = new float[registro];
	iva = new float[registro];
	total = new float[registro];

	for (int i = 0; i < registro; i++)
	{
		printf("Escriba el numero del articulo\n");
		scanf_s("%d", &item[i]);
		do
		{
			if (item[i] != item[i - n])
			{
				n = n + 1;
			}
			else
			{
				printf("el articulo ya existe\n");
				printf("Ingrese el articulo\n");
				scanf_s("%d", &item[i]);
			}
		} while (n < registro);

		printf("Escribe el nombre del articulo\n");
		cin.ignore();
		getline(cin, nombre[i]);
		printf("ingrese el a%co de lanzamiento", 164);
		scanf_s("%d", &year[i]);
		printf("Ingrese la clasificacion del articulo\n");
		getline(cin, clasi[i]);
		printf("Ingrese las caracteristicas del articulo\n");
		getline(cin, cara[i]);
		printf("Ingrese la descripcion del articulo\n");
		getline(cin, descrip[i]);
		printf("Ingrese el genero del articulo\n");
		getline(cin, genero[i]);
		printf("Ingrese el precio del articulo\n");
		scanf_s("%f", &precio[i]);
		iva[i] = precio[i] * .16;
		total[i] = precio[i] + iva[i];
		
	}
}

void eliminar()
{
	int Eliminar;
	printf("Cual es el artculo que desea eliminar?\n");
	scanf_s("%d", &Eliminar);
	for (int i = 0; i < registro; i++)
	{
		if (Eliminar == item[i])
		{
			item[i] = 0;
        }
	}
}

void modificar()
{
	int modi;
	do
	{
		printf("Ingrese el num de articulo que quiera modificar");
		scanf_s("%d", &modi);
	} while (modi <= 0);

	for (int i = 0; i < registro; i++)
	{
		if (modi == item[i])
		{

			printf("Cual elemento desea modificar?\n");
			printf("1.-Nombre\n 2.-A%co\n 3.-Clasificacion,Caravteristica, descripcion,genero\n 4.-Precio",164);
			scanf_s("%d",&opc);

			switch (opc)
			{
				case 1:
			printf("Escribe el nombre del articulo\n");
			cin.ignore();
			getline(cin, nombre[i]);
			return modificar();
			break;
			case 2:
			printf("ingrese el a%co de lanzamiento", 164);
			scanf_s("%d", &year[i]);
			return modificar();
			break;
			case 3:
			printf("Ingrese la clasificacion del articulo\n");
			getline(cin, clasi[i]);
			printf("Ingrese las caracteristicas del articulo\n");
			getline(cin, cara[i]);
			printf("Ingrese la descripcion del articulo\n");
			getline(cin, descrip[i]);
			printf("Ingrese el genero del articulo\n");
			getline(cin, genero[i]);
			return modificar();
			break;
			case 4:
			printf("Ingrese el precio del articulo\n");
			scanf_s("%f", &precio[i]);
			iva[i] = precio[i] * .16;
			total[i] = precio[i] + iva[i];
			return modificar();
			break;
			}
		}
	}
}

void lista()
{
	int op2;
	string busc;

	printf("Buscar por....\n 1.-clasificacion\n 2.-Genero\n 3.- Salir");
	scanf_s("%d", &op2);
	switch (op2)
	{
	case 1:
		printf("Ingrese la clasificacion a buscar\n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registro; i++)
		{
			if (clasi[i] == busc)
			{
				if (item[i] != 0)
				{
					printf("Articulo: %d", item[i]);
					printf("A%co:", 164);
					printf("Videojuego es: &s", nombre[i].c_str());
					printf("Clasificacion: %s", clasi[i].c_str());
					printf("Genero: %s", genero[i].c_str());
					printf("Caracteristicas: %s", cara[i].c_str());
					printf("Descripcion: %s", descrip[i].c_str());
					printf("Precio: %p", precio[i]);
					printf("Iva: %p", iva[i]);
					printf("Total: %p", total[i]);
				}
}
		}
		return lista();
		break;
	case 2:
		printf("Ingrese el genero a buscar\n");
                                   cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registro; i++)
		{
			if (genero[i] == busc)
			{
				if (item[i] != 0)
				{
					printf("Articulo: %d", item[i]);
					printf("A%co:", 164);
					printf("Videojuego es: &s", nombre[i].c_str());
					printf("Clasificacion: %s", clasi[i].c_str());
					printf("Genero: %s", genero[i].c_str());
					printf("Caracteristicas: %s", cara[i].c_str());
					printf("Descripcion: %s", descrip[i].c_str());
					printf("Precio: %p", precio[i]);
					printf("Iva: %p", iva[i]);
					printf("Total: %p", total[i]);

				}

			}
		}
		return lista();
		break;
	case 3:
		break;
	}
}

void archivo()
{
	ofstream archivo;
	string name;

	name = "Archivo tuyo";
	archivo.open(name.c_str(), ios::out);
	if (archivo.fail())
	{
		printf("ERROR NO SE GENERO EL ARCHIVO\n");
		system("pause");
		exit(1);
	}
	archivo << "\t \t INFO";
	for (int i = 0; i < registro; i++)
	{
		if (item[i] != 0)
		{
			archivo << "dato\n" << 1 + 1 << endl;
			archivo << "Articulo" << item[i];
			archivo << "A%co", 164 << year[i];
			archivo << "Videojuego" << nombre[i];
			archivo << "clasificacion %s" << clasi[i];
			archivo << "genero %s" << genero[i];
			archivo << "caracteristicas %s" << cara[i];
			archivo << "Descripcion %s" << descrip[i];
			archivo << "Precio %p" << precio[i];
			archivo << "Iva %p" << iva[i];
			archivo << "Total %s" << total[i];
		}

	}
}
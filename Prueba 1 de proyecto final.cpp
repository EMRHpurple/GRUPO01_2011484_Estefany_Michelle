//***tengo un problema al depurar y compilar en Visual, Me aparece n mensaje diciendo " No se puede iniciar la depuración, compruebe la configuración del depurador abriendo las propiedades del proyecto***//

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, opcion, Salida;//Salida es por el año de lanzamiento//
    float  IVA = 0.16, precio, precio_unitario, impuesto;
    string articulo, descripcion, clasificacion, caracteristicas, genero;

    cout << "\t ***Tienda de Videojuegos MayDay *** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista De Articulos Vigentes\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el numero de articulo \n";
        cin >> numarticulo;
        cout << "Ingrese el nombre del articulo\n";
        cin.ignore();
        getline(cin, articulo);
        cout<<"Ingrese la fecha del lanzamiento\n";
        cin >> Salida;
        cout << "Ingrese la clasificacion del articulo\n";
        cin.ignore();
        getline(cin, clasificacion);
        cout << "Ingrese las caracteristicas del articulo\n";
        cin.ignore();
        getline(cin, caracteristicas);
        cout << "Ingrese el descripcion del articulo\n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "Ingrese el genero del articulo\n";
        cin.ignore();
        getline(cin, genero);
        cout << "Ingrese el precio unitario del articulo\n";
        cin >> precio_unitario;
        impuesto = precio_unitario * IVA;
        precio = precio_unitario + impuesto;
        cout << "Su impuesto será de:\n" << impuesto << "y su precio final será de:\n" << precio;

        return main();
        break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos Vigentes
        break;

    case 5: //Limpiar Pantalla
        system("cls");
        return main();
        break;

    case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();

    }

}

//***tengo un problema al depurar y compilar en Visual, Me aparece n mensaje diciendo " No se puede iniciar la depuraci�n, compruebe la configuraci�n del depurador abriendo las propiedades del proyecto***//

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <cstring>
#include <windows.h>
#include <stdlib.h>

using namespace std;

struct tienda
{
    int numarticulo,id,salida;//Salida es por el año de lanzamiento//
    float precio, precio_unitario, iva;
    string articulo, descripcion, clasificacion, caracteristicas, genero;
};

int main()
{
    tienda inventario[3];
    int opcion, busqueda;
    do
    {
        printf << "\t ***Tienda de Videojuegos MayDay *** \n";
        printf << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista De Articulos Vigentes\n 5.-Limpiar Pantalla\n 6.-Salir\n";
        scanf_s("%d", &opcion);
        switch (opcion)
        {
            for (int i = 0; i < 3; i++)
            {
        case 1: //Agregar Articulo
            inventario[i].id = 20220000 + (i+1);
            printf("ID PRODUCTO: %d \n", inventario[i].id);
            int n = 1;
            printf("ingrese el num de oc \n");
            scanf_s("%d", &inventario[i].numarticulo);
            for (int k = 0; k <= n; k++)
            {
                if (inventario[i].numarticulo == inventario[i - n].numarticulo || inventario[i].numarticulo == inventario[i - (n - 1)].numarticulo)
                {
                    printf("el numero de articulo ya existe \n");

                    printf("ingrese el numero de articulo \n");
                    scanf_s("%d", &inventario[i].numarticulo);
                    if (n <= 3)
                    {
                        n = n + 1;
                    }
                }
                else
                {
                    n = 0;

                }
            printf("Ingrese el nombre del articulo\n");
            cin.ignore();
            getline(cin, inventario[i].articulo);

            printf("ingrese el a%co de lanzamiento", 164);
            scanf_s("%d", &inventario[i].salida;

            printf("Ingrese la clasificacion del articulo\n");
            cin.ignore();
            getline(cin, inventario[i].clasificacion);

            printf("Ingrese las caracteristicas del articulo\n");
            cin.ignore();
            getline(cin, inventario[i].caracteristicas);

            printf("Ingrese el descripcion del articulo\n");
            cin.ignore();
            getline(cin, inventario[i].descripcion);

            printf("Ingrese el genero del articulo\n");
            cin.ignore();
            getline(cin, inventario[i].genero);

            printf("ingrese el subtotal \n");
            scanf_s("%f", &inventario[i].precio_unitario);
            inventario[i].iva = inventario[i].precio_unitario * .16;
            inventario[i].precio = inventario[i].iva + inventario[i].precio_unitario;

            return main();
            break;
        case 2: //Modificar Articulo
            break;
        case 3://Eliminar Articulo
            printf("ingrese su oc \n");
            scanf_s("%d", &busqueda);
            for (int i = 0; i < 3; i++)
            {
                if (busqueda == inventario[i].numarticulo)
                {
                    inventario[i].numarticulo = 0;
                    printf("su regitro ah sido eliminado \n");
                }
            }
            break;
        case 4: //Lista de Articulos Vigentes
            int opc2;
            printf("1.- num de articulo \n 2.-Listas Vigentes");
            scanf_s("%d", &opc2);
            if (opc2 == 1)
            {
                printf("ingrese el num de articulo \n");
                scanf_s("%d", &busqueda);
                for (i = 0; i < 3; i++)
                {
                    if (inventario[i].numarticulo != 0)
                    {
                        if (busqueda == inventario[i].numarticulo)
                        {
                            printf("el id del articulo es: %d \n", inventario[i].id);
                            printf("el num de oc es %d \n", inventario[i].numarticulo);
                            printf("el nombre es %s \n", inventario[i].articulo.c_str());
                            printf("el lanzamiento del articulo fue en: %d \n", inventario[i].salida);
                            printf("clasificacion: %s \n", inventario[i].clasificacion.c_str());
                            printf("descripcion: %s \n", inventario[i].descripcion.c_str());
                            printf("caracteristicas: %s \n", inventario[i].caracteristicas.c_str());
                            printf("genero: %s \n", inventario[i].genero.c_str());
                            printf("el subtotal es %f \n", inventario[i].precio_unitario);
                            printf("el iva es %f \n", inventario[i].iva);
                            printf("el total es %f \n", inventario[i].precio);
                        }
                    }
                }
            }
            else
            {
                for (int i = 0; i < 3; i++)
                {
                    if (compras[i].numoc != 0)
                    {
                        printf("el id del articulo es: %d \n", inventario[i].id);
                        printf("el num de oc es %d \n", inventario[i].numarticulo);
                        printf("el nombre es %s \n", inventario[i].articulo.c_str());
                        printf("el lanzamiento del articulo fue en: %d \n", inventario[i].salida);
                        printf("clasificacion: %s \n", inventario[i].clasificacion.c_str());
                        printf("descripcion: %s \n", inventario[i].descripcion.c_str());
                        printf("caracteristicas: %s \n", inventario[i].caracteristicas.c_str());
                        printf("genero: %s \n", inventario[i].genero.c_str());
                        printf("el subtotal es %f \n", inventario[i].precio_unitario);
                        printf("el iva es %f \n", inventario[i].iva);
                        printf("el total es %f \n", inventario[i].precio);
                    }
                }
            }
            break;
        case 5: //Limpiar Pantalla
            system("cls");
            return main();
            break;
        case 6: //salir
            printf("Gracias por utilizar el programa \n");
            break;
        default:
            printf("ingrese una opcion correcta \n");
            return main();
        }

    }

}
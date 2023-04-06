#include <iostream>
#include <string.h>
#include "clase.h"
#include "socio.h"
#define MAX_SOCIOS 100
#define MAX_CLASES 100

struct Clases
{
    Clase *c[MAX_CLASES];
    // int tope;
} colClases;

struct Socios
{
    Socio *s[MAX_SOCIOS];
    // int top;
} colSocios;

void agregarSocio(string ci, string nombre)
{
    // Crea un nuevo socio en el sistema. En caso de ya existir, levanta excepción std::invalid_argument
}

void agregarClase(DtClase &clase)
{
    // Crea una nueva clase en el sistema. En caso de ya existir, levanta una excepción std::invalid:argument
}

void agregarInscripcion(string ciSocio, int idCalse, FEcha fecha)
{

    /*
        Crea una inscripción de un socio a una clase. La inscripción tiene lugar siempre y cuando el socio y
        la clase existan, de lo contrario se levanta una excepción std::invalid_argument. Si ya existe una
        inscripción de ese usuario para esa clase, o si el cupo de esa clase ya fue alcanzado, también se
        levanta una excepción std::invalid_argument.
    */
}

void borrarInscripcion(string ciSocio, int idClase)
{

    /*
        Borra la inscripción de un socio a una clase. Si no existe una inscripción de ese usuario para esa
        clase, se levanta una excepción std::invalid_argument.
    */
}
/*

ESTO SERÍA LO QUE DEBERIAMOS HACER COMO CLASE MAIN ... creo

TipoRet createTable (bd & bd, char *nombreTabla){
    //cout << " - createTable " << nombreTabla << endl
    return crearTabla_Tablas(bd->ts, nombreTabla);
}

TipoRet dropTable (bd & bd, char *nombreTabla){
    //cout << " - dropTable " << nombreTabla << endl;;
    return NO_IMPLEMENTADA;
}
*/

void menu()
{
    system("clear");
    cout << "____________________________" << endl;
    cout << "_________MENU___________" << endl;
    cout << "1. Agregar Socio" << endl;
    cout << "2. Agregar Clase" << endl;
    cout << "3. Agregar Inscripcion" << endl;
    cout << "4. Borrar Inscripcion" << endl;
    cout << "5. Salir" << endl;
    cout << "OPCION: ";
}

int main()
{

    menu();
    int opcion;
    cin >> opcion;
    while (opcion != 7)
    {
        switch (opcion)
        {
        case 1:
            menuRegistrarVengador();
            break;
        case 2:
            menuCrearMision();
            break;
        case 3:
            menuAsignarMisionAVengador();
            break;
        case 4:
            listarVengadores();
            break;
        case 5:
            listarMisiones();
            break;
        case 6:
            menuListarMisionesDeVengador();
            break;
        }
    }
}

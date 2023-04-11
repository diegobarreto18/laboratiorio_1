#include <iostream>
#include <string.h>
#include "clase.h"
#include "DtClase.h"
#include "DtEntrenamiento.h"
#include "DtSocio.h"
#include "DtSpinning.h"
#include "spinning.h"
#include "entrenamiento.h"

#define MAX_SOCIOS 100
#define MAX_CLASES 100

struct Clases
{
    Clase *c[MAX_CLASES];
    int tope;

} colClases;

struct Socios
{
    Socio *s[MAX_SOCIOS];
    int tope;

} colSocios;

int obtenerID()
{
    return colClases.tope + 1;
}

void agregarSocio(string ci, string nombre)
{
    // Crea un nuevo socio en el sistema. En caso de ya existir, levanta excepción std::invalid_argument
    int i = 0;
    while (i < colSocios.tope && colSocios.s[i]->getNombre() != nombre)
        i++;
    if (i == colSocios.tope)
    {
        Socio *socio = new Socio(ci, nombre);
        colSocios.s[colSocios.tope] = socio;
        colSocios.tope++;
    }
    else
    {
        throw invalid_argument("Ya existe un Socio con ese nombre!!");
    }
}

void agregarClase(DtClase &clase, int tipo)
/*Tipo es un dato dado por el usuario que especifica que
clase agraga si Spinning o Entrenmiento*/
{
    // Crea una nueva clase en el sistema. En caso de ya existir, levanta una excepción std::invalid:argument
    // EJEMPLO TOMADO DE LOS VENGADORES
    int i = 0;
    int x = 10;
    while (i < colClases.tope && colClases.c[i]->getNombre() != clase.getNombre())
        i++;
    if (i == colClases.tope)
    {
        if ((strcmp(tipo, "Spinning") == 0) || (strcmp(tipo, "spinning") == 0))
        {
            Clase *Clase = new Spinning(clase.getId(), clase.getNombre(), clase.getTurno(), x);
            colClases.c[colClases.tope] = Clase;
            colClases.tope++;
        }
        else if ((strcmp(tipo, "Entrenamiento") == 0) || (strcmp(tipo, "entrenamiento") == 0))
        {

            Clase *Clase = new Entrenamiento(clase.getId(), clase.getNombre(), clase.getTurno(), x);
            colClases.c[colClases.tope] = Clase;
            colClases.tope++;
        }
        else
        {
            throw invalid_argument("Esa clase no existe: Solo Spinning o Entrenamiento.");
        }
    }
    else
    {
        throw invalid_argument("Ya existe una Clase con ese nombre!!");
    }
}

void agregarInscripcion(string ciSocio, int idCalse, Fecha fecha)
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

void menuAgregarSocio()
{
    system("clear");
    cout << "___________________________" << endl;
    cout << "_______CREAR MISION________" << endl;
    string nombre;
    int dia, mes, anio;
    cout << "NOMBRE: ";
    cin >> nombre;
    cout << "\nFECHA DE INICIO";
    cout << "\nDIA: ";
    cin >> dia;
    cout << "\nMES: ";
    cin >> mes;
    cout << "\nANIO: ";
    cin >> anio;
    Fecha inicio, fin;
    inicio.dia = dia;
    inicio.mes = mes;
    inicio.anio = anio;
    cout << "\nFECHA DE FIN";
    cout << "\nDIA: ";
    cin >> dia;
    cout << "\nMES: ";
    cin >> mes;
    cout << "\nANIO: ";
    cin >> anio;
    fin.dia = dia;
    fin.mes = mes;
    fin.anio = anio;
    altaMision(nombre, inicio, fin);
}

void menuAgregarClase()
{
    system("clear");
    cout << "___________________________" << endl;
    cout << "_______Agregar Clase________" << endl;
    string nombre;
    int turno, tipo;
    cout << "Nombre de clase: ";
    cin >> nombre;
    cout << "\nSeleccione turno de la clase";
    cout << "\n1)Mañana";
    cout << "\n2)Tarde";
    cout << "\n3)Noche";
    cin turno;
    cout << "\nSeleccione tipo de clase";
    cout << "\n1)Spinnig";
    cout << "\n2)Entrenamiento";
    cin tipo;
    agregarClase();
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
            // menuagregarSocio();
            break;
        case 2:
            // menuagreagarClase();
            break;
        case 3:
            // menuAsignarMisionAVengador();
            break;
        case 4:
            // listarVengadores();
            break;
        case 5:
            // listarMisiones();
            break;
        case 6:
            // menuListarMisionesDeVengador();
            break;
        }
    }
}

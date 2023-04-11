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

int obtenerId();

int obtenerId()
{
    return colClases.tope + 1;
}

void agregarSocio(string ci, string nombre);

void menuAgregarSocio()
{
    system("clear");
    cout << "___________________________" << endl;
    cout << "_______AGREGAR SOCIO________" << endl;

    int ci;
    string nombre;

    cout << "CI: ";
    cin >> ci;

    cout << "\nNOMBRE: ";
    cin >> nombre;

    agregarSocio(ci, nombre);
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
        cout << "Socio agregado con éxito" << endl;
    }
    else
    {
        throw invalid_argument("Ya existe un Socio con ese nombre!!");
    }
}

void agregarClase(DtClase &clase);

void menuAgregarClase()
{
    system("clear");
    cout << "___________________________" << endl;
    cout << "_______Agregar Clase________" << endl;
    
    string nombre;
    int turno, tipo,cantBici,rambla;
    bool enRambla;
    Turno turno_asign;

    cout << "Nombre de clase: ";
    cin >> nombre;
    
    cout << "\nSeleccione turno de la clase";
    cout << "\n1)Mañana";
    cout << "\n2)Tarde";
    cout << "\n3)Noche";
    cin turno;

    switch(turno){
        case 1: turno_asign = _turno.0;
                break;
        case 2:  turno_asign = _turno.1;
                break;
        case 3:  turno_asign = _turno.2;
                break;
    }

    cout << "\nSeleccione tipo de clase";
    cout << "\n1)Spinning";
    cout << "\n2)Entrenamiento";
    cin tipo;
    
    DtSpinning spinning;
    DtEntrenamiento entrenamiento;
    switch(tipo){
        case 1: cout << "--- CANTIDAD BICICLETAS: ---" << endl;
                cin << cantBici;
                spinning = DtSpinning(obtenerId(),nombre, turno_asign, cantBici);
                agregarClase(spinning);
                break;
        case 2: cout << "--- EN RAMBLA? ---" << endl;
                switch(rambla){
                    case 1: enRambla = true;
                            break;
                    case 2: enRambla = false;
                }
                entrenamiento =  DtEntrenamiento(id, nombre, turno_asign, enRambla);
                agregarClase(entrenamiento);
                break;
    }
    agregarClase();
}

void agregarClase(DtClase &clase)
/*Tipo es un dato dado por el usuario que especifica que
clase agraga si Spinning o Entrenmiento*/
{
}

void agregarInscripcion(string ciSocio, int idClase, Fecha fecha)
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

#include "define.h"
#include <iostream>
#include "string.h"



void agregarSocio(string ci, string nombre){
    //Crea un nuevo socio en el sistema. En caso de ya existir, levanta excepción std::invalid_argument
}

void agregarClase(DtClase & clase){
    //Crea una nueva clase en el sistema. En caso de ya existir, levanta una excepción std::invalid:argument
}

void agregarInscripcion(string ciSocio, int idCalse, FEcha fecha){
    
    /*
        Crea una inscripción de un socio a una clase. La inscripción tiene lugar siempre y cuando el socio y
        la clase existan, de lo contrario se levanta una excepción std::invalid_argument. Si ya existe una
        inscripción de ese usuario para esa clase, o si el cupo de esa clase ya fue alcanzado, también se
        levanta una excepción std::invalid_argument.
    */

}

void borrarInscripcion(string ciSocio, int idClase){
   
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


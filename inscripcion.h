#include "define.h"
#include <iostream>
#include "inscripcion.h"
#include <string.h>

class Inscripcion
{
private:
    Fecha fecha;
    Socio* socios[];
    /*
    Hay que controlar las fechas a la hora de insertarlas.

     1 < Dia < 31
     1 < Mes < 12
         Año < 1900

        Tirar excepción std::invalid_argument ????? wtf carlos
    */
public:
    Inscripcion();
    Inscripcion(Fecha fecha);
    Fecha getFecha();
    void setFecha(Fecha fecha);
    ~Inscripcion();
}

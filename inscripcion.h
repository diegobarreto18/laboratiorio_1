#include <iostream>
#include <string>
#include "define.h"
#include "Fecha.h"
#include "socio.h"

using namespace std;

class Inscripcion
{
private:
    Fecha fecha;
    Socio* socio;
    /*
    Hay que controlar las fechas a la hora de insertarlas.

     1 < Dia < 31
     1 < Mes < 12
         Año < 1900

        Tirar excepción std::invalid_argument ????? wtf carlos
    */
public:
    Inscripcion();
    Inscripcion(Fecha fecha, Socio* socio);
    Fecha getFecha();
    void setFecha(Fecha fecha);
    ~Inscripcion();
};

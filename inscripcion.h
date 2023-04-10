#include <iostream>
#include <string>
#include "define.h"
#include "socio.h"
#include "Fecha.h"


using namespace std;

class Inscripcion
{
private:
    Fecha fecha;
    Socio* socio;
public:
    Inscripcion();
    Inscripcion(Fecha fecha, Socio* socio);
    Fecha getFecha();
    void setFecha(Fecha fecha);
    ~Inscripcion();
};

#ifndef INSCRIPCION
#define INSCRIPCION

#include <iostream>
#include <string>
#include "define.h"
#include "Fecha.h"
#include "socio.h"


using namespace std;

class Inscripcion
{
private:
    //Fecha fecha;
    //Socio* socio;
public:
    Inscripcion();
    //Inscripcion(Fecha fecha, Socio* socio);
    Fecha getFecha();
    void setFecha(int dia,int mes,int anio, Fecha & fecha);
    ~Inscripcion();
};

#endif
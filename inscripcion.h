#ifndef INSCRIPCION
#define INSCRIPCION

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
    void setFecha(int dia,int mes,int anio, Fecha & fecha);
    Socio * getSocio();
    void setSocio(Socio* socio);
    ~Inscripcion();

    DtSocio * getDtSocio();
};

#endif
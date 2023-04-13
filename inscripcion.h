#ifndef INSCRIPCION
#define INSCRIPCION

#include <iostream>
#include <string>
#include "define.h"
#include "socio.h"
#include "Fecha.h"
#include "clase.h"



using namespace std;

class Inscripcion
{
private:
    Fecha fecha;
    Socio* socio;
    Clase* clase;

public:
    Inscripcion();
    Inscripcion(Fecha fecha, Socio* socio, Clase* clase);
    Fecha getFecha();
    void setFecha(int dia,int mes,int anio, Fecha & fecha);
    Socio * getSocio();
    void setSocio(Socio* socio);
    Clase * getClase();
    void setClase(Clase * clase);
    ~Inscripcion();

    DtSocio * getDtSocio();
};

#endif
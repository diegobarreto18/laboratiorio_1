#include <iostream>
#include "inscripcion.h"
#include <string.h>

Inscripcion::Inscripcion(){}

Inscripcion::Inscripcion(Fecha fecha, Socio* socio)
{
    this->fecha = fecha;
}

string Inscripcion::getFecha()
{
    return this->fecha;
}
void Inscripcion::setFecha(Fecha fecha)
{
    this->fecha = fecha;
}

void Inscripcion::setSocio(Socio* socio){
    this->socio = socio;
}

Inscripcion::~Inscripcion() {}

/*
    De cada inscripción se conoce el socio.
    La clase del gimnasio a la cual se inscribe y fecha de realización
*/
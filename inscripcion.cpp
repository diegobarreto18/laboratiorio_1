#include <iostream>
#include <string.h>
#include "inscripcion.h"

Inscripcion::Inscripcion() {}

Inscripcion::Inscripcion(Fecha fecha, Socio *socio, Clase * clase)
{
    this->fecha = fecha;
    this->socio = socio;
    this->clase = clase;
}

Fecha Inscripcion::getFecha()
{
    return this->fecha;
}
void Inscripcion::setFecha(int dia, int mes, int anio, Fecha &fecha)
{
    fecha = Fecha(dia, mes, anio);
}

Socio* Inscripcion::getSocio()
{
    return this->socio;
}

void Inscripcion::setSocio(Socio *socio)
{
    this->socio = socio;
}

Clase * Inscripcion::getClase()
{
    return this->clase;
}

void Inscripcion::setClase(Clase * clase)
{
    this->clase = clase;
}

Inscripcion::~Inscripcion() {}




/*
    De cada inscripción se conoce el socio.
    La clase del gimnasio a la cual se inscribe y fecha de realización
*/
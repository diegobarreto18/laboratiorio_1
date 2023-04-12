#include <iostream>
#include <string.h>
#include "socio.h"

using namespace std;

Socio::Socio() {}

Socio::Socio(string ci, string nombre)
{
    this->ci = ci;
    this->nombre = nombre;
}

string Socio::getCi()
{
    return this->ci;
}

void Socio::setCi(string ci)
{
    this->ci = ci;
}

string Socio::getNombre()
{
    return this->nombre;
}
void Socio::setNombre(string nombre)
{
    this->nombre = nombre;
}

Socio::~Socio() {}

/*
    Un socio puede inscribirse a una clase unicamente si el cupo de esta no fue
    alcanzado al momento de realizar la inscripción
*/
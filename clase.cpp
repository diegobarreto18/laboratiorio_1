#include "clase.h"
#include <iostream>
#include <string.h>


Clase::Clase() {}

Clase::Clase(int id, string nombre, Turno turno)
{
  this->id = id;
  this->nombre = nombre;
  this->turno = turno;
}

string Clase::getNombre()
{
  return this->nombre;
}
void Clase::setNombre(string nombre)
{
  this->nombre = nombre;
}
int Clase::getId()
{
  return this->id;
}
void Clase::setId(int id)
{
  this->id = id;
}
Turno Clase::getTurno()
{
  return this->turno;
}
void Clase::setTurno(Turno turno)
{
  this->turno = turno;
}

Clase::~Clase() {}

/*
    NO PUEDE HABER DOS INSCRIPCIONES PARA UNA MISMA CLASE Y UN MISMO SOCIO
    ES DECIR, NO PUEDE HABER SOCIOS DUPLICADOS EN UNA CLASE
*/
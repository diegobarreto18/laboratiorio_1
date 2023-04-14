#include "clase.h"
#include <iostream>
#include <string.h>

Clase::Clase() {}

Clase::Clase(int id, string nombre, Turno turno)
{
  this->id = id;
  this->nombre = nombre;
  this->turno = turno;
  this->tope = 0;
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

int Clase::getTope()
{
  return this->tope;
}

void Clase::agregarInscripcion(Inscripcion *inscripcion)
{
  this->inscripciones[this->tope] = inscripcion;
  this->tope++;
}

Inscripcion **Clase::getInscripcion()
{
  Inscripcion **inscripciones = new Inscripcion *[this->tope];
  for (int i = 0; i < this->tope; i++)
  {
    Inscripcion *inscripcion = new Inscripcion(this->inscripciones[i]->getFecha(),
                                               this->inscripciones[i]->getSocio());
    inscripciones[i] = inscripcion;
  }
  return inscripciones;
}

void Clase::eliminarInscripcion(string ciSocio)
{

  for (int i = 0; i < this->tope; i++)
  {
    while (i < this->tope && this->inscripciones[i]->getSocio()->getCi() == ciSocio)
    {
      this->inscripciones[i] = this->inscripciones[this->tope - 1];
      this->inscripciones[this->tope - 1] = NULL;
      delete this->inscripciones[this->tope - 1];
      this->tope--;
    }
  }
}

/*
    NO PUEDE HABER DOS INSCRIPCIONES PARA UNA MISMA CLASE Y UN MISMO SOCIO
    ES DECIR, NO PUEDE HABER SOCIOS DUPLICADOS EN UNA CLASE
*/
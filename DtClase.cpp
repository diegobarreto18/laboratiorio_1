#include <iostream>
#include <string.h>
#include "DtClase.h"

DtClase::DtClase() {}

DtClase::DtClase(int id, string nombre, Turno turno)
{
  this->id = id;
  this->nombre = nombre;
  this->turno = turno;
}

string DtClase::getNombre()
{
  return this->nombre;
}
void DtClase::setNombre(string nombre)
{
  this->nombre = nombre;
}
int DtClase::getId()
{
  return this->id;
}
void DtClase::setId(int id)
{
  this->id = id;
}
Turno DtClase::getTurno()
{
  return this->turno;
}
void DtClase::setTurno(Turno turno)
{
  this->turno = turno;
}

DtClase::~DtClase() {}

ostream &operator<<(ostream &salida, const DtClase &clase)
{
  if (clase.turno == 0)
  {
    cout << " Id Clase: " << clase.id << "\n"
         << " Nombre: " << clase.nombre << "\n"
         << " Turno: Mañana" << endl;
  }
  else if (clase.turno == 1)
  {
    cout << " Id Clase: " << clase.id << "\n"
         << " Nombre: " << clase.nombre << "\n"
         << " Turno: Tarde" << endl;
  }
  else
  {
    cout << " Id Clase: " << clase.id << "\n"
         << " Nombre: " << clase.nombre << "\n"
         << " Turno: Noche" << endl;
  }
}

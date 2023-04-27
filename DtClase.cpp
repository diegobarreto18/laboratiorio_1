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
  /*string NomTurno;
  if (clase.turno == 0)
  {
    NomTurno = "Mañana";
  }
  else if (clase.turno == 1)
  {
    NomTurno = "Tarde";
  }
  else
  {
    NomTurno = "Noche";
  }*/
  

  cout << " Id Clase: " << clase.id << "\n"
       << " Nombre: " << clase.nombre << "\n"
       << " Turno: " << clase.turno << endl;
}

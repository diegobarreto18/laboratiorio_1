#include <iostream>
#include <string.h>
#include "DtEntrenamiento.h"

DtEntrenamiento::DtEntrenamiento() {}

DtEntrenamiento::DtEntrenamiento(int id, string nombre, Turno turno,bool enRambla):DtClase(id, nombre, turno)
{
  this->enRambla = enRambla;
}

bool DtEntrenamiento::getEnRambla()
{
  return this->enRambla;
}
void DtEntrenamiento::setEnRambla(bool enRambla)
{
  this->enRambla =enRambla;
}

DtEntrenamiento::~DtEntrenamiento() {}

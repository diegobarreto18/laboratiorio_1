#include <iostream>
#include <string.h>
#include "DtEntrenamiento.h"

DtEntrenamiento::DtEntrenamiento() {}

DtEntrenamiento::DtEntrenamiento(bool enRambla)
{
  this->enRambla = enRambla;
}

string DtEntrenamiento::getEnRambla()
{
  return this->enRambla;
}
void DtEntrenamiento::setEnRambla(string enRambla)
{
  this->enRambla =enRambla;
}

DtEntrenamiento::~DtEntrenamiento() {}

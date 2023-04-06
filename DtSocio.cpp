#include <iostream>
#include <string.h>
#include "DtSocio.h"

DtSocio::DtSocio() {}

DtSocio::DtSocio(int ci, string nombre)
{
  this->ci = ci;
  this->nombre = nombre;
}

string DtSocio::getNombre()
{
  return this->nombre;
}
void DtSocio::setNombre(string nombre)
{
  this->nombre = nombre;
}

DtSocio::~DtSocio() {}
#include <iostream>
#include <string.h>
#include "DtSocio.h"

DtSocio::DtSocio() {}

DtSocio::DtSocio(string ci, string nombre)
{
  this->ci = ci;
  this->nombre = nombre;
}


string DtSocio::getCi()
{
  return this->ci;
}

void DtSocio::setCi(string ci)
{
  this->ci = ci;
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
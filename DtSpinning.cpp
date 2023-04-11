#include <iostream>
#include <string.h>
#include "DtSpinning.h"

DtSpinning::DtSpinning() {}

DtSpinning::DtSpinning(int id, string nombre, Turno turno,int cantBicicletas):DtClase(id, nombre, turno)
{
    this->cantBicicletas = cantBicicletas;
}

int DtSpinning::getCantBicicletas()
{
    return this->cantBicicletas;
}
void DtSpinning::setCantBicicletas(int cantBicicletas)
{
    this->cantBicicletas = cantBicicletas;
}

DtSpinning::~DtSpinning() {}

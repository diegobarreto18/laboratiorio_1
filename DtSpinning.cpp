#include <iostream>
#include <string.h>
#include "DtSpinning.h"

DtSpinning::DtSpinning() {}

DtSpinning::DtSpinning(int cantBicicletas)
{
    this->cantBicicletas = cantBicicletas;
}

string DtSpinning::getCantBicicletas()
{
    return this->cantBicicletas;
}
void DtSpinning::setCantBicicletas(string cantBicicletas)
{
    this->cantBicicletas = cantBicicletas;
}

DtSpinning::~DtSpinning() {}

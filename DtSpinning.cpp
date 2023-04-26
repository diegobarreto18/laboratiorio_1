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

DtClase* DtSpinning :: getDtClase(){
  DtSpinning* dtspinning = new DtSpinning(this->getId(),this->getNombre(),this->getTurno(),this->getCantBicicletas());
  return dtspinning;
}

ostream& operator << (ostream& salida, DtSpinning& spinning){
     DtClase &dts = dynamic_cast<DtClase &>(spinning);
     cout << dts << "Cant Bicicletas: " << spinning.cantBicicletas << endl;
     return salida;
}
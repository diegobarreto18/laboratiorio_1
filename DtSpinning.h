#ifndef DTSPINNING
#define DTSPINNING

#include "define.h"
#include <iostream>
#include <string.h>
#include "DtClase.h"

using namespace std;

class DtSpinning : public DtClase
{
private:
    int cantBicicletas;
public:
    DtSpinning();
    DtSpinning(int id, string nombre, Turno turno,int cantBicicletas);
    int getCantBicicletas();
    void setCantBicicletas(int cantBicicletas);
    ~DtSpinning();
    DtClase* getDtClase();
    friend ostream& operator <<(ostream&, DtSpinning&);

};
#endif
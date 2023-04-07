#include "define.h"
#include <iostream>
#include <string.h>

class DtSpinning
{
private:
    int cantBicicletas;

public:
    DtSpinning();
    DtSpinning(int id, string nombre, Turno turno,int cantBicicletas);
    int getCantBicicletas();
    void setCantBicicletas(int cantBicicletas);
    ~DtSpinning();
}
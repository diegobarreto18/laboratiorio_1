#ifndef SPINNING
#define SPINNING

#include "define.h"
#include <iostream>
#include <string.h>
#include "DtSpinning.h"
#include "clase.h"

using namespace std;

class Spinning : public Clase
{
private:
    int cantBicicletas;

public:
    Spinning();
    Spinning(int id, string nombre, Turno turno, int cantBicicletas);
    int getCantBicicletas();
    void setCantBicicletas(int cantBicicletas);
    ~Spinning();
    int cupo();
};

#endif

#include "define.h"
#include <iostream>
#include <string.h>
#include "clase.h"
class Spinning: public Clase{
    private:
        int cantBicletas;
    public:
    Spinning();
    Spinning(int cantBicicletas);
    int getCantBicicletas();
    void setCantBicicletas(int cantBicicletas);
    ~Spinning();
    int cupo();
}


#include "define.h"
#include <iostream>
#include <string.h>
#include "clase.h"

class Entrenamiento : public Clase
{
private:
    bool enRambla;

public:
    Entrenamiento();
    Entrenamiento(bool enRambla);
    bool getEnRambla();
    void setEnRambla(bool enRambla);
    ~Entrenamiento();
    int cupo();
}

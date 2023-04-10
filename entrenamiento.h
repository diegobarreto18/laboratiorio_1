#include "define.h"
#include <iostream>
#include <string.h>
#include "clase.h"

using namespace std;

class Entrenamiento : public Clase
{
private:
    bool enRambla;

public:
    Entrenamiento();
    Entrenamiento(int id, string nombre, Turno turno,bool enRambla);
    bool getEnRambla();
    void setEnRambla(bool enRambla);
    ~Entrenamiento();
    int cupo();
};

#include "define.h"
#include <iostream>
#include <string.h>

class DtClase
{
private:
    int id;
    string nombre;
    Turno turno;

public:
    DtClase();
    DtClase(int id, string nombre, Turno turno);
    int getId();
    void setId(int id);
    string getNombre();
    void setNombre(string nombre);
    Turno getTurno();
    void setTurno(Turno turno);
    ~DtClase();
    int cupo();
}
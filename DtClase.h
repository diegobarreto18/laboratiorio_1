#ifndef DTCLASE
#define DTCLASE

#include "define.h"
#include <iostream>
#include <string.h>
#include "clase.h"
#define MAX_INSCRIPCIONES 100
using namespace std;

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
    virtual DtClase *getDtClase() = 0;
    friend ostream &operator<<(ostream &, const DtClase &);
};

#endif
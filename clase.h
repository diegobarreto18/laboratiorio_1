#include "define.h"
#include <iostream>
#include <string.h>
#include "inscripcion.h"

#define MAX_INSCRIPCIONES 50

using namespace std;

class Clase
{
private:
    int id;
    string nombre;
    Turno turno;
    Inscripcion* inscripciones[MAX_INSCRIPCIONES];
public:
    Clase();
    Clase(int id, string nombre, Turno turno);
    int getId();
    void setId(int id);
    string getNombre();
    void setNombre(string nombre);
    Turno getTurno();
    void setTurno(Turno turno);
    ~Clase();
    virtual int cupo();
};

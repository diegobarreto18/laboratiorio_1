#include "define.h"
#include <iostream>
#include <string.h>
#define MAX_INSCRIPCIONES

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
    int cupo();
}

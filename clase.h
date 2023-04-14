#ifndef CLASE
#define CLASE

#include "define.h"
#include <iostream>
#include <string.h>
#include "DtClase.h"
#include "inscripcion.h"
#define MAX_INSCRIPCIONES 100


using namespace std;

class Clase
{
private:
    int id;
    string nombre;
    Turno turno;
    Inscripcion * inscripciones[MAX_INSCRIPCIONES];
    int tope;
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

    virtual int cupo() = 0;
    int getTope();
    void agregarInscripcion(Inscripcion * inscripcion);

};

#endif

#include "define.h"
#include <iostream>
#include <string.h>

class Socio
{
private:
    string ci;
    string nombre;

public:
    Socio();
    Socio(int ci, string nombre);
    int getCi();
    void setCi(int ci);
    string getNombre();
    void setNombre(string nombre);
    ~Socio();
}

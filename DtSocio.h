#include "define.h"
#include <iostream>
#include <string.h>

class DtSocio
{
private:
    int ci;
    string nombre;

public:
    DtSocio();
    DtSocio(int ci, string nombre);
    int getCi();
    void setCi(int ci);
    string getNombre();
    void setNombre(string nombre);
    ~DtSocio();
}
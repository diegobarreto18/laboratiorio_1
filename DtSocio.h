#ifndef DTSOCIO
#define DTSOCIO

#include "define.h"
#include <iostream>
#include <string.h>

using namespace std;

class DtSocio
{
private:
    string ci;
    string nombre;

public:
    DtSocio();
    DtSocio(string ci, string nombre);
    string getCi();
    void setCi(string ci);
    string getNombre();
    void setNombre(string nombre);
    virtual ~DtSocio();

    //friend ostream& operator << (ostream&, const DtSocio&);
};

#endif
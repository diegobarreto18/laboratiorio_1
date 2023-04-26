#ifndef DTENTRENAMIENTO
#define DTENTRENAMIENTO

#include "define.h"
#include <iostream>
#include <string.h>
#include "DtClase.h"

using namespace std;

class DtEntrenamiento: public DtClase
{
    private: 
        bool enRambla;
    public:
        DtEntrenamiento();
        DtEntrenamiento(int id, string nombre, Turno turno,bool enRambla);
        bool getEnRambla();
        void setEnRambla(bool enRambla);
        ~DtEntrenamiento();
        DtClase* getDtClase();
        friend ostream &operator <<(ostream&, DtEntrenamiento&);

};

#endif
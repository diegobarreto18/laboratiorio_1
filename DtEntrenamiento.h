#include "define.h"
#include <iostream>
#include <string.h>


class DtEntrenamiento: public DtClase
{
    private: 
        bool enRambla;
    public:
        DtEntrenamiento();
        DtEntrenamiento(int id, string nombre, Turno turno,bool enRambla);
        string getEnRambla();
        void setEnRambla(bool enRambla);
        ~DtEntrenamiento();
}
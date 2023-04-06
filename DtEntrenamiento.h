#include "define.h"
#include <iostream>
#include <string.h>


class DtEntrenamiento{
    private: 
        bool enRambla;
    public:
        DtEntrenamiento();
        DtEntrenamiento(bool enRambla);
        string getEnRambla();
        void setEnRambla();
        ~DtEntrenamiento();
}
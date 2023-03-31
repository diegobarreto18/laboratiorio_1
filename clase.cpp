#include "define.h"
#include <iostream>
#include "string.h"
#include "clase.h"


class Clase {
    private: 
        int id;
        string nombre;
        //Turno turno;
    public:
        int cupo();
}

int Clase::cupo(){
    //código, no se agrega esta operación en las clases spinning y entrenamiento dado que son
    //generalización de Clase
}

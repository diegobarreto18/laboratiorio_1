#include "define.h"
#include <iostream>
#include "string.h"
#include "clase.h"


class Clase {
    private: 
        int id;
        string nombre;
        Turno turno;
    public:
        int cupo();
}

int Clase::cupo(){
    //Operación que calcula la cantidad de cupos que tiene una clase
   
    //código, no se agrega esta operación en las clases spinning y entrenamiento dado que son
    //generalización de Clase
}

/*
    NO PUEDE HABER DOS INSCRIPCIONES PARA UNA MISMA CLASE Y UN MISMO SOCIO
    ES DECIR, NO PUEDE HABER SOCIOS DUPLICADOS EN UNA CLASE
*/
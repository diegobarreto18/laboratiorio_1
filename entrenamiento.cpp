#include "define.h"
#include <iostream>
#include "string.h"
#include "entrenamiento.h"
#include "clase.h"


class Entrenamiento: public Clase{
    private:
        bool enRambla;
    public:
        int cupo();
}

int Entrenamiento::cupo(){
    //Operación que calcula la cantidad de cupos que tiene una clase
    
    //Si la clase es en la rambla, el cupo es de 20 personas
    //Sino, el cupo es de 10
}


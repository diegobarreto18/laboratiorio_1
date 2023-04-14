#include <string.h>
#include "entrenamiento.h"

Entrenamiento::Entrenamiento() {}

Entrenamiento::Entrenamiento(int id, string nombre, Turno turno, bool enRambla) : Clase(id, nombre, turno)
{
    this->enRambla = enRambla;
}

bool Entrenamiento::getEnRambla()
{
    return this->enRambla;
}

void Entrenamiento::setEnRambla(bool enRambla)
{
    this->enRambla = enRambla;
}

int Entrenamiento::cupo()
{

    if (this->enRambla)
    {
        return 20 - this->getTope();
    }
    else
    {
        return 10 - this->getTope();
    }

    // Operación que calcula la cantidad de cupos que tiene una clase
    // Si la clase es en la rambla, el cupo es de 20 personas
    // Sino, el cupo es de 10
}

Entrenamiento::~Entrenamiento() {}
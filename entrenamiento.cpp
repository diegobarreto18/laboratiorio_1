#include <iostream>
#include <string.h>
#include "entrenamiento.h"

Entrenamiento::Entrenamiento() {}

Entrenamiento::Entrenamiento(bool enRambla):Clase(id, nombre, turno)
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
    // Operación que calcula la cantidad de cupos que tiene una clase
    // Si la clase es en la rambla, el cupo es de 20 personas
    // Sino, el cupo es de 10
    return 1;
}

Entrenamiento::~Entrenamiento() {}
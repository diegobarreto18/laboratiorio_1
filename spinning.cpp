#include <string.h>
#include "spinning.h"

using namespace std;

Spinning::Spinning() {}

Spinning::Spinning(int id, string nombre, Turno turno,int cantBicicletas):Clase(id, nombre, turno)

{
  this->cantBicicletas = cantBicicletas;
}

int Spinning::getCantBicicletas()
{
  return this->cantBicicletas;
}
void Spinning::setCantBicicletas(int cantBicicletas)
{
  this->cantBicicletas = cantBicicletas;
}

int Spinning::cupo()
{
  // Operación que calcula la cantidad de cupos que tiene una clase

  // Esto es distinto a la operación de calculo de la de CLASE
  // Dado que hay que retornar la cantidad de bicicletas
}

Spinning::~Spinning() {}
/*
    La cantidad de bicicletas de la clase de spinning debe ser <= 50
    EL CUPO ES IGUAL A LA CANTIDAD DE BICICLETAS
*/
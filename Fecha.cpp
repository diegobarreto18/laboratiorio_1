#include <iostream>
#include "string.h"
#include "Fecha.h"

Fecha::Fecha(int dia, int mes, int anio)
{
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || anio < 1900)
        throw invalid_argument("Fecha no valida\n");
    else
    {
        this->dia = dia;
        this->mes = mes;
        this->anio = anio;
    }
}

int Fecha::getDia()
{
    return this->dia;
}
void Fecha::setDia(int dia)
{
    if (dia < 1 || dia > 31)
        throw invalid_argument("El dia no puede ser asi\n");
    else
        this->dia = dia;
}
int Fecha::getMes()
{
    return this->mes;
}
void Fecha::setMes(int mes)
{
    if (mes < 1 || mes > 12)
        throw invalid_argument("El mes no puede ser así\n");
    else
        this->mes = mes;
}
int Fecha::getAnio()
{   
    return this->anio;
}
void Fecha::setAnio(int anio)
{
    if (anio < 1900)
        throw invalid_argument("El año no puede ser menor a 1900\n");
    else
        this->anio = anio;
}

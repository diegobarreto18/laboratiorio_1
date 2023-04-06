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

int DtFecha::getDia()
{
    return this->dia;
}
void DtFecha::setDia(int dia)
{
    if (dia < 1 || dia > 31)
        throw invalid_argument("El dia no puede ser asi\n");
    else
        this->dia = dia;
}
int DtFecha::getMes()
{
    return this->mes;
}
void DtFecha::setMes(int mes)
{
    this->mes = mes;
}
int DtFecha::getAnio()
{
    return this->anio;
}
void DtFecha::setAnio(int anio)
{
    this->anio = anio;
}
DtFecha::~DtFecha() {}
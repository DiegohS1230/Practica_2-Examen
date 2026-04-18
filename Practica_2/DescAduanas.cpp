#include "DescAduanas.h"

DescAduanas::DescAduanas(float Porcentdescuento)
{
    this->Porcentdescuento = Porcentdescuento;
}

DescAduanas::~DescAduanas()
{
}

float DescAduanas::CalDescuento(float precio)
{
    return precio* Porcentdescuento;
}

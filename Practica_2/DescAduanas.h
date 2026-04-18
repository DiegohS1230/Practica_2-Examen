#pragma once
#include "Descuento.h"
class DescAduanas : Descuento
{
private: 
	float Porcentdescuento;
public:
	DescAduanas(float Porcentdescuento = 0);
	~DescAduanas();
	float CalDescuento(float precio = 0) override;
};


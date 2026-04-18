#pragma once
#include "descuento.h"
class DesIVA : public Descuento
{
public:
	float CalDescuento(float precio) override;
};


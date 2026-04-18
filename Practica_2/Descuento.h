#pragma once
class Descuento
{
protected:
	//float Porcentdescuento;
public:
	//Descuento(float descuento = 0);
	virtual ~Descuento();
	virtual float CalDescuento(float precio)=0;
};


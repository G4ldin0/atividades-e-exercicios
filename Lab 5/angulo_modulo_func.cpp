#include "angulo_vetor.h"

float modulo(float x, float y)
{
	float modulo = sqrt(pow(x, 2) + pow(y, 2));
	return modulo;
}

float angulo(float x, float y)
{
	float valor = atan2(y, x);
	return (valor * 180) / 3.14159;

}
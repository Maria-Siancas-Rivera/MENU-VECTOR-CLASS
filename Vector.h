# pragma once
# define  MAX  100  // Constante de compilador
class Vector
{
private:  // Atributos
	int vec [MAX], inv [MAX];
public:
	Vector(void);
	~ Vector(void);
	void  mostrarInverso ( int inv [], int n);
	void cargarVector(int vec [], int n);
	void mostrarVector(int vec [], int n);
	void Inverso(int vec [], int inv [], int n);
	void Capicua(int vec [], int inv [], int n);
	int Max(int vec [], int n);
	void Ascendente(int vec [], int n);
};

#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <iostream>
using namespace std;

class Enemigo
{
public:
	Enemigo(string nombre, string tipo);
	string getNombre();
private:
	string nombre;
	string tipo;
};
#endif

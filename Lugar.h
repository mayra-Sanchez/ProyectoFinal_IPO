/*
  Archivo: Lugar.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-04-23
  Fecha última modificación: 2021-04-29
	Version: 0.1
  Licencia: GNU-GPL
*/

/*
  CLASE: Lugar
	
  INTENCIÓN: Determinar si se perdió el JUEGO, bien sea porque allí hay un individuo que puede comerse a otro, a la vez que no está el robot, bien sea porque un Individuo saltó hacia un lugar vecino, pero el vecino es nullptr (o sea, se cayó al agua). 

  RELACIONES: Conoce individuos
*/

//INCLUIDES
#include "Individuo.h"
#include<vector>

#ifndef LUGAR_H
#define LUGAR_H

#include<iostream>
using namespace std;

//CLASE

class Lugar
{
	private:

	vector <Individuo *> individuos; // vector de punteros a Individuo

	public:
};

#else
class Lugar; /* Declaración adelantada*/
#endif
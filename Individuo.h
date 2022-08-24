/*
  Archivo: Individuo.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-04-23
  Fecha última modificación: 2021-04-29
	Version: 0.1
  Licencia: GNU-GPL
*/

/*
  CLASE: Individuo
	
  INTENCIÓN: Puedo pedirle al individuo que entre a la barca junto al robot. Si un individuo se relaciona con otro, cualquiera de los dos se puede comer al otro.

  RELACIONES: Conoce los individuos
*/

//INCLUIDES
#include<vector>

#ifndef INDIVIDUO_H
#define INDIVIDUO_H

#include<iostream>
using namespace std;

//CLASE

class Individuo
{
	private:

	vector <Individuo *> individuos; // vector de punteros a Individuo

	public:
};
#else
class Individuo; /* Declaración adelantada*/
#endif 
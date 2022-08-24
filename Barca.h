/*
  Archivo: Barca.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-04-23
  Fecha última modificación: 2021-04-29
	Version: 0.1
  Licencia: GNU-GPL
*/
/*
  CLASE: Barca
	
  INTENCIÓN: A la barca puedo pedirle que se mueva en cualquier orilla para meter un individuo de más a parte del individuo robot. 

  RELACIONES: Es un lugar
*/

//INCLUIDES
#include "Lugar.h"

#ifndef BARCA_H
#define BARCA_H

#include<iostream>
using namespace std;

//CLASE

class Barca : public Lugar
{
	private:
	public:
};
#else
class Barca; /* Declaración adelantada*/
#endif 
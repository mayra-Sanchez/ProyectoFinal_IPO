/*
  Archivo: Orilla.h
  Autor: Brayan Sanchez <brayan.sanchez.leon@correounivalle.edu.co>
  Autor: Mayra Alejandra Sanchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Fecha creación: 2021-04-23
  Fecha última modificación: 2021-04-29
	Version: 0.1
  Licencia: GNU-GPL
*/

/*
  CLASE: Orilla
	
  INTENCIÓN: Permite ubicar la barca en este sitio (ya sea izquierda o derecha).

  RELACIONES: Es un Lugar
*/

//Llamo la clase lugar ya que hay relacion entre estas dos clases

//INCLUIDES
#include "Lugar.h"

#ifndef ORILLA_H
#define ORILLA_H

#include<iostream>
using namespace std;

//CLASE

class Orilla : public Lugar
{
	private:
	public:
};

#else
class Orilla; /* Declaración adelantada*/
#endif
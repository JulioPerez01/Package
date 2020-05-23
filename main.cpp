/*----------------------------------
 *
 * Materia: Programacion Orientada a Objetos (TC1030)
 * Laboratorio: Herencia en C++
 * Fecha: 22-Mayo-2020
 * Autor: Julio Cesar Perez Rodriguez  A01705763
 *
 *----------------------------------*/
#include <iostream>
#include "package.h"
#include "twoDays.h"
#include "overNight.h"

using namespace std;

int main() {
  Package a;
  TwoDays b(13,2);
  OverNight c(9,3);

  cout<< "TwoDays: " <<b.getCalculateCost()<<"\n";
  cout<< "OverNight: " <<c.getCalculateCost();
}
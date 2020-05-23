/*----------------------------------
 *
 * Materia: Programacion Orientada a Objetos (TC1030)
 * Laboratorio: Herencia en C++
 * Fecha: 22-Mayo-2020
 * Autor: Julio Cesar Perez Rodriguez  A01705763
 *
 *----------------------------------*/

#ifndef TWODAYS_H
#define TWODAYS_H

typedef unsigned int uint;

class TwoDays:public Package{
  private:
    float tarifaF=100;
  public:
    TwoDays();
    TwoDays(uint p, uint cK);
    double getCalculateCost() const;  
}; 

TwoDays::TwoDays():Package(){
}

TwoDays::TwoDays(uint p, uint cK):Package("Nombre Remitente Default","Nombre Destinatario Default","Direccion Remitente Default","Direccion Destinatario Default",p,cK){
  peso=p;
  costoKilo=cK;
}

double TwoDays::getCalculateCost() const{
  float costo=(peso*costoKilo)+tarifaF;
  return costo;
}

#endif
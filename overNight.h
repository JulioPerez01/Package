/*----------------------------------
 *
 * Materia: Programacion Orientada a Objetos (TC1030)
 * Laboratorio: Herencia en C++
 * Fecha: 22-Mayo-2020
 * Autor: Julio Cesar Perez Rodriguez  A01705763
 *
 *----------------------------------*/

#ifndef OVERNIGHT_H
#define OVERNIGHT_H

typedef unsigned int uint;

class OverNight:public Package{
   private: 
    float tarifaK=15;
  public:
    OverNight();
    OverNight(uint p, uint cK);
    double getCalculateCost() const;  
}; 

OverNight::OverNight():Package(){
}

OverNight::OverNight(uint p, uint cK):Package("Nombre Remitente Default","Nombre Destinatario Default","Direccion Remitente Default","Direccion Destinatario Default",p,cK){
  peso=p;
  costoKilo=cK;
}

double OverNight::getCalculateCost() const{
  float costo=(peso*costoKilo)+(tarifaK*peso);
  return costo;
}
#endif
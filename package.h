/*----------------------------------
 *
 * Materia: Programacion Orientada a Objetos (TC1030)
 * Laboratorio: Herencia en C++
 * Fecha: 22-Mayo-2020
 * Autor: Julio Cesar Perez Rodriguez  A01705763
 *
 *----------------------------------*/

#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

using namespace std;
typedef unsigned int uint;

class Package{
protected:
  string nombreRem;
  string nombreDes;
  string direccionRem;
  string direccionDes;
  uint peso;
  uint costoKilo;

public:
  Package();
  Package(string nR, string nD, string dR, string dD, uint p,uint cK);
  string getDirRem() const;
  string getDirDes() const;
  string getNomRem() const;
  string getNomDes() const;
  uint getPeso() const;
  uint getCostoKilo() const;
  virtual double getCalculateCost() const;
};

Package::Package(){
  nombreDes="Nombre Destinatario";
  nombreRem="Nombre Remitente";
  direccionDes="Direccion Destinatario";
  direccionRem="Direccion Remitente";
  peso=0;
  costoKilo=0;
}

Package::Package(string nR, string nD, string dR, string dD, uint p,uint cK){
  nombreDes=nD;
  nombreRem=nR;
  direccionDes=dD;
  direccionRem=dR;
  peso=p;
  costoKilo=cK;
}

string Package::getDirRem() const{
  return direccionRem;
}

string Package::getDirDes() const{
  return direccionDes;
}

string Package::getNomRem() const{
  return nombreRem;
}

string Package::getNomDes() const{
  return nombreDes;
}

uint Package::getPeso() const{
  return peso;
}

uint Package::getCostoKilo() const{
  return costoKilo;
}

double Package::getCalculateCost() const{
  return 0;
}

#endif
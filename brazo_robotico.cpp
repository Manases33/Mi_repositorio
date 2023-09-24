#include "brazo_robotico.h"

BrazoRobotico::BrazpRobotico(){
	x = 0.0;
	y = 0.0;
	z = 0.0;
	sujetandoObjeto = false;
}

double BrazoRobotico::getX() const{
	return x;
}

double BrazoRobotico::getY() const{
        return y;
} 

double BrazoRobotico::getZ() const{
        return z;
}

bool BrazoRobotico::estaSujetandoObjeto() const{
	return sujetandoObjeto;
}

void BrazoRobotico::coger(){
	sujetandoObjeto = true;
}

void BrazoRobotico::soltar(){
	sujetandoObjeto = false;
}

void BrazoRobotico::mover(double newX, double newY, double newZ){
	x = newX;
	y = newY;
	z = newZ;
}


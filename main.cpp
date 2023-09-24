#include <iostream>
#include "brazo_robotico.h"

int main(){
	BrazoRobotico brazo;

	std::cout << "posición inicial: (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")\n";

	brazo.mover(2.0, 2.0, 2.0);
	std::cout << "Nueva posici�n: (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")\n";

	brazo.coger();
	if (brazo.estaSujetandoObjeto()){
		std::cout << "El brazo está sujetando un objeto.\n";
	}else{
		std::cout << "El brazo no está sujetando un objeto.\n";
	}

	brazo.soltar(){
	if (brazo.estaSujetandoObjeto()){
		std::cout << "El brazo está sujetando un objeto.\n";
	}else{
		std::cout << "El brazo no está sujetando un objeto.\n";
	}

return 0;
	}

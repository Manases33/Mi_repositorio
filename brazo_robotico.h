#indef BRAZO_ROBOTICO_H
#define BRAZO_ROBOTICO_H

class BrazoRobotico{
	private:
		double x;
		double y;
		double z;
		bool sujetandoObjeto;
		

	public:
		BrazoRobotico();

		double getX() const;
		double getY() const;
		double getZ() const;
		bool estaSujetandoObjeto() const;

		void coger();
		void soltar();
		void mover(double newX, double newY, double newZ);
};

#endif

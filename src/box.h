#ifndef BOX_H
#define BOX_H
#include <vector>
#include "system.h"
//#include "particle.h" Yet to be created

class Box {
	private:
		double sidex;
		double sidey;
		double x0;
		double y0;

	public:
		Box();
		Box(double lx, double ly, double x0, double y0);
}
#endif

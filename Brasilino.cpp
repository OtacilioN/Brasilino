#include "Brasilino.h"
#include <math.h>

dobro temperatura(int RawADC) {
 dobro Temp;
 Temp = log(10000.0*((1024.0/RawADC-1))); 
 Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp ))* Temp );
 Temp = Temp - 273.15;  
 return Temp;
}
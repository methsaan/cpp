#include <math.h>
#include <iostream>
namespace MethsaansFormulas{
	double SQRTformula(double a, double b, double c){
		return (1 / (a - b)) * (c - b) + sqrt(b);
	}
}
class MethsaanMath {
	public:
		void setSQRT(double a, double b, double c, double *var){
			*var = MethsaansFormulas::SQRTformula(a, b, c);
		}
};

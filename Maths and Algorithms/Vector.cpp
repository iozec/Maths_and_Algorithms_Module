#include "Vector.h"
#include "Maths.h"


float Vector::Magnitude()
{
/*float value;
	float M = 0;
	if (value < 0) 
	{
		M =  (x * x) + (y * y) + (z * z) ;

		
	}
	return M;*/

	return MathUtils::Pythagoras3D(x, y, z);


}


void Vector::Normalise()
{
	MathUtils::Pythagoras3D(x, y, z);

}


void Vector::Scale(float Scaler)
{

}


float Vector::Dot(Vector& B)
{
	return 0;
}


Vector Vector::Cross(Vector& B)
{
	return *this;
}

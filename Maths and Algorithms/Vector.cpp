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
	x = x * Scaler;
	y = y * Scaler;
	z = z * Scaler;
}


float Vector::Dot(Vector& B)
{
	float Dot;
	Dot = (x * B.x) + (y * B.y) + (z * B.z);

	return Dot;
}


Vector Vector::Cross(Vector& B)
{
	
	return Vector((y * B.z - z * B.y), (z * B.x - x * B.z), (x * B.y - y * B.x));

}



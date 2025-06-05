#include "Maths.h"

float MathUtils::toRad(float Deg)
{
	float Rad = 0;
	Rad = Deg * (M_PI / 180);

	return Rad;
}

float MathUtils::toDeg(float Rad)
{
	float Deg = 0;
	Deg = Rad * (180 / M_PI);

	return Deg;
}

float MathUtils::Pythagoras(float A, float B)
{

	float C = 0;
	C = (A * A) + (B * B);
	C = sqrt(C);

	return C;

}

float MathUtils::Pythagoras3D(float A, float B, float C)
{

	float D = 0;
	D = (A * A) + (B * B) + (C * C);
	D = sqrt(D);

	return D;
}

float MathUtils::FindSinTheta(float A, float B)
{
	int Sin;
	Sin = (A / B);
	std::cout << "Sin Theta is" << Sin << "/n";
	return asin(Sin);

}

float MathUtils::FindCosTheta(float A, float B)
{
	int Cos;
	Cos = (A / B);
	std::cout << "Cos Theta is" << Cos << "/n";
	return acos(Cos);
}

float MathUtils::FindTanTheta(float A, float B)
{
	int Tan;
	Tan = (A / B);
	std::cout << "Cos Theta is" << Tan << "/n";
	return atan(Tan);
}

float MathUtils::FindHyp(float Angle, float B)
{
	return B / sin(Angle);

}

float MathUtils::FindOpp(float Angle, float B)

{
	return B * sin(Angle);
}

float MathUtils::FindAdj(float Angle, float B)
{
	return B * cos(Angle);
}

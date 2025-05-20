#pragma once
#define _USE_MATH_DEFINES
#include "math.h"
#include <cmath>
#include <iostream>

namespace MathUtils

{

	static float toRad(float Deg)
	{
		float Rad = 0;
		Rad = Deg * (M_PI / 180);

		return Rad;
	}
	static float toDeg(float Rad)
	{
		float Deg = 0;
		Deg = Rad * (180 / M_PI);

		return Deg;
	}

	static float Pythagoras(float A, float B)
	{

		float C = 0;
		C = (A * A) + (B * B);
		C = sqrt(C);

		return C;
		
	}


	static float Pythagoras3D(float A, float B, float C)
	{

		float D = 0;
		D = (A * A) + (B * B) + (C * C);
		D = sqrt(D);

		return D;
	}

	static float FindSinTheta(float A, float B)
	{
		int Sin;
		Sin = (A / B);
		std::cout << "Sin Theta is" << Sin << "/n";
		return asin(Sin);
		
	}
	static float FindCosTheta(float A, float B)
	{
		int Cos;
		Cos = (A / B);
		std::cout << "Cos Theta is" << Cos << "/n";
		return acos(Cos);
	}
	static float FindTanTheta(float A, float B)
	{
		int Tan;
		Tan = (A / B);
		std::cout << "Cos Theta is" << Tan << "/n";
		return atan(Tan);
	}

	static float FindHyp(float Angle, float B)
	{
		return B / sin(Angle);
		
	}
	static float FindOpp(float Angle, float B)
	{
		return B * sin(Angle);
	}
	static float FindAdj(float Angle, float B)
	{
		return B * cos(Angle);
	}


}


#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>

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
	static float FindSinTheta(float A, float B)
	{
		return 0.0f;
	}
	static float FindCosTheta(float A, float B)
	{
		return 0.0f;
	}
	static float FindTanTheta(float A, float B)
	{
		return 0.0f;
	}

	static float FindHyp(float Angle, float B)
	{
		return 0.0f;
	}
	static float FindOpp(float Angle, float B)
	{
		return 0.0f;
	}
	static float FindAdj(float Angle, float B)
	{
		return 0.0f;
	}


}


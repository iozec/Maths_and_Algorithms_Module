#pragma once
#define _USE_MATH_DEFINES
#include "math.h"
#include <cmath>
#include <iostream>

namespace MathUtils

{

	static float toRad(float Deg);


	static float toDeg(float Rad);

	static float Pythagoras(float A, float B);


	static float Pythagoras3D(float A, float B, float C);


	static float FindSinTheta(float A, float B);


	static float FindCosTheta(float A, float B);


	static float FindTanTheta(float A, float B);


	static float FindHyp(float Angle, float B);


	static float FindOpp(float Angle, float B);


	static float FindAdj(float Angle, float B);


}


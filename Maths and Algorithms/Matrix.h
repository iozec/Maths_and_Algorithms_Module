#pragma once
#include "Vector.h"


class Matrix
{
public:
	//this is a 3 x 3

	float Data[3][3];

	float Determinate();

	void SetRotateAroundX(float Angle);
	void SetRotateAroundY(float Angle);
	void SetRotateAroundZ(float Angle);

	Matrix operator* (Matrix& RHS)
	{
		Matrix& LHS = *this;
		Matrix Hold;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				Hold.Data[i][j] = 0;

				for (int k = 0; k < 3; k++) {
					// multiplying the matrix
					Hold.Data[i][j] += LHS.Data[i][k] * RHS.Data[k][j];
				}
			}
		}
		return Hold;
	}


	
	Vector operator* (Vector& RHS)
	{
		Matrix& LHS = *this;

		//fill this in to multiply Matrix LHS by Vector RHS
		return Vector(0, 0, 0);
	}

	void Translate(Vector delta);
	void SetMatrix(int[3][3]);
};


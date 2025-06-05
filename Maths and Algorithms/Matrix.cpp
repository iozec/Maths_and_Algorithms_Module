#include "Matrix.h"
#include "Maths.cpp"



// 1  2  3 
// 4  5  6
// 7  8  9

 float Matrix::Determinate(){

	 float D = 0;
	  
	 float x = Data[0][0] * ((Data[1][1] * Data[2][2]) - (Data[1][2] * Data[2][1]));

	 float y = Data[1][0] * ((Data[1][0] * Data[2][2]) - (Data[1][2] * Data[2][0]));

	 float z = Data[0][2] * ((Data[1][0] * Data[2][1]) - (Data[1][1] * Data[2][0]));

	 D = x - y + z;

	 return D;

}

void Matrix::SetRotateAroundX(float Angle) {

	float rad = Angle * M_PI / 180.f;
	float cosA = cos(rad);
	float sinA = sin(rad);

	// 3 x 3 rotation matrix 
	Data[0][0] = 1; Data[0][1] = 0;    Data[0][2] = 0;
	Data[1][0] = 0; Data[1][1] = cosA; Data[1][2] = -sinA;
	Data[2][0] = 0; Data[2][1] = sinA; Data[2][2] = cosA;

}
void Matrix::SetRotateAroundY(float Angle) {

		float rad = Angle * M_PI / 180.f;
		float cosA = cos(rad);
		float sinA = sin(rad);

		Data[0][0] = cosA;  Data[0][1] = 0; Data[0][2] = sinA;
		Data[1][0] = 0;     Data[1][1] = 1; Data[1][2] = 0;
		Data[2][0] = -sinA; Data[2][1] = 0; Data[2][2] = cosA;

}
void Matrix::SetRotateAroundZ(float Angle) {

	float rad = Angle * M_PI / 180.f;
	float cosA = cos(rad);
	float sinA = sin(rad);

	Data[0][0] = cosA;  Data[0][1] = -sinA; Data[0][2] = 0;
	Data[1][0] = sinA;  Data[1][1] = cosA;  Data[1][2] = 0;
	Data[2][0] = 0;     Data[2][1] = 0;     Data[2][2] = 1;


}

void Matrix::Translate(Vector delta) {

	Data[0][3] += delta.x;
	Data[1][3] += delta.y; 
	Data[2][3] += delta.z;

}
 void Matrix::SetMatrix(int[3][3]) {

	float D = 0;

	int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };


}
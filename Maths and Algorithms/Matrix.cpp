#include "Matrix.h"


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



}
void Matrix::SetRotateAroundY(float Angle) {



}
void Matrix::SetRotateAroundZ(float Angle) {



}

void Matrix::Translate(Vector delta) {


}
 void Matrix::SetMatrix(int[3][3]) {

	float D = 0;

	int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };


}
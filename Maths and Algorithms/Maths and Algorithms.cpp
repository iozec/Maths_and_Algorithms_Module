#include <iostream>

#include "Algorithms.h"
#include "DataStructures.h"
#include "Maths.h"
#include "Matrix.h"
#include "Vector.h"

#include <math.h>
#include <algorithm>


int main()
{
    std::cout << "Hello World!\n";
    //vector
    //add
    //subtract

    float a = MathUtils::toRad(45.0f);
    if (a == 0.78f)
        std::cout << a << std::endl;
    else
    {
        std::cout << a << std::endl;
    }


    float b = MathUtils::toDeg(2.0f);
    if (b == 114.592f)
        std::cout << b << std::endl;
    else
    {
        std::cout << b << std::endl;
    }

    float c = MathUtils::Pythagoras(45, 45);
    if (c == 63.64f)
        std::cout << c << std::endl;
    else
    {
        std::cout << c << std::endl;
    }
}





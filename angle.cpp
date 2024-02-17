/***********************************************************************
 * Source File:
 *    ANGLE
 * Author:
 *    Br. Helfrich, Fabian Diaz Santiago, and Josue Molina
 * Summary:
 *    Everything we need to know about a direction
 ************************************************************************/

#include "angle.h"
#include <math.h>  // for floor()
#include <cassert>
using namespace std;

/************************************
 * ANGLE : NORMALIZE
 * This method will make sure that
 * radians is greater than 0 and
 * less than 2
 ************************************/
double Angle::normalize(double radians) const
{
    if (radians >= Two_PI)
    {
        double multiple = floor(radians / Two_PI);
        assert(radians - Two_PI * multiple >= 0.0);
        assert(radians - Two_PI * multiple <= Two_PI);
        return radians - (Two_PI * multiple);
    }
    else if (radians < 0.0)
    {
        double multiples = ceil(-radians / Two_PI);
        assert(Two_PI * multiples + radians >= 0.0);
        assert(Two_PI * multiples + radians <= Two_PI);
        return Two_PI * multiples + radians;
    }
    assert(0.0 <= radians && radians <= Two_PI);
    return radians;
}



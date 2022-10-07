//
// Created by Mauro Patimo on 10/6/22.
//

#include "math.h"

float luminosity_updated(float old_luminosity, float new_distance)
{
    return old_luminosity * pow(new_distance, 2) / pow(145, 2);
}
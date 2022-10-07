//
// Created by Mauro Patimo on 10/6/22.
//

#include "math.h"

float luminosity_updated_LOG_LOG(double old_luminosity, double new_distance)
{
    return log10(pow(10, old_luminosity) * pow(new_distance, 2) / pow(145, 2));
}

float luminosity_updated_LOG_STANARD(float old_luminosity, float new_distance)
{
    return pow(10, old_luminosity) * pow(new_distance, 2) / pow(145, 2);
}
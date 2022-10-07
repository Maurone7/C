#include <stdio.h>

#include "import-data.c"
#include "parallaxes.cpp"

int main()
{
    import_data();
    printf("\n %f", luminosity_updated(0.35, 145));
}


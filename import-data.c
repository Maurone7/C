//
// Created by Mauro Patimo on 10/6/22.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int import_data()
{
    char source_list_barenfeld_2016[106];

    char source[100];
    char *filename = "/Users/mauro/Dropbox/GitHub/C/Barenfeld Table 1.txt";
    FILE * file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Not Opened \n");
        return 1;
    }

    char *element;
    int line = 0;
    int index = -1;
    while (line < 130)
    {
        fgets(source, 256, file);
        if (line >21 && line < 129)
        {
            element = strtok(source, " ");
            element = strtok(NULL, " ");

        }
        index++;
        strcpy(source_list_barenfeld_2016, element);
        printf("%d %s \n", index, source_list_barenfeld_2016[22]);
        line ++;
        /* printf("%d \n", line); */
    }
    fclose(file);

    source_list_barenfeld_2016[2] = "J15354856-2958551";
    for (int loop_value = 0; loop_value < 58; loop_value++)
    {
        printf("%d %s \n", loop_value, source_list_barenfeld_2016[loop_value]);
    }
    printf("%lu \n", (sizeof source_list_barenfeld_2016 )/(sizeof source_list_barenfeld_2016[0]));


    return 0;
}

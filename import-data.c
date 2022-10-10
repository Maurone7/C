//
// Created by Mauro Patimo on 10/6/22.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char source_list_barenfeld_2016[106] = {'\0'};

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
    for (line = 0; line < 13; line++)
    {
        fgets(source, 256, file);
        if (line >21 && line < 129)
        {
            element = strtok(source, " ");
            element = strtok(NULL, " ");
            printf("%s", element);

        }
        index++;
        source_list_barenfeld_2016[index] = *element;
        printf("%d %c \n", index, source_list_barenfeld_2016[22]);
        /* printf("%d \n", line); */
    }
    fclose(file);

    for (int loop_value = 0; loop_value < 58; loop_value++)
    {
        printf("%d %c \n", loop_value, source_list_barenfeld_2016[loop_value]);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LEN 256

int main(void)
{
    char data[MAX_LINES][MAX_LEN];
    char *filename = "/Users/mauro/Dropbox/GitHub/C/Barenfeld Table 1.txt";
    FILE * file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Not Opened \n");
        return 1;
    }

    int ch = 0;

    while ((ch = fgetc(file)) != EOF)
        putchar(ch);

    char buffer[MAX_LEN];
    char * column1;

    int data_1;
    char column_1[MAX_LEN];
    data_1 = fgetc(file);
    sprintf(column_1, "%d", data_1);

    printf("%d", data_1);


    fclose(file);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void sort(int *);

int main(void)
{
    /*--------------------------------
    * read_file = read file's pointer
    * write_file= write file's pointer
    * chr       = read character
    * read_num  = read number
    * text      = would write text
    * -------------------------------*/

    FILE *read_file, *write_file;

    read_file = fopen("./data.txt", "r");

    if (read_file == NULL)
    {
        fprintf(stderr, "cant open data.txt");
        exit(1);
    }
    char chr;
    int i = 0, read_num = 0, minus_flag = 0, write_num[40] = {0};
    while ((chr = fgetc(read_file)) != EOF)
    {
        for (; chr != ' ' && chr != '\n' && chr != EOF; chr = fgetc(read_file))
        {
            if (chr == '-')
            {
                minus_flag = 1;
                continue;
            }
            chr = chr - '0';
            read_num = read_num * 10 + chr;
        }
        if (minus_flag)
            read_num *= -1;

        write_num[i++] = read_num;

        read_num = 0;
        minus_flag = 0;
    }

    fclose(read_file);

    sort(write_num);

    char text[256];
    write_file = fopen("result.txt", "w");
    for (i = 0; i < 40; i++)
    {
        if (i % 10 == 9)
            chr = '\n';
        else
            chr = ' ';

        sprintf(text, "%d%c", write_num[i], chr);
        fputs(text, write_file);

        sprintf(text, "");
    }
    return 0;
}

void sort(int d[40])
{
    /*------------------------------
    *
    * 
    * 
    * ------------------------------*/
    // TODO
    return;
}
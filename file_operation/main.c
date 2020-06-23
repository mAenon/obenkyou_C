#include <stdio.h>
#include <stdlib.h>

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
    write_file = fopen("./result.txt", "w");

    if (read_file == NULL)
    {
        fprintf(stderr, "cant open data.txt");
        exit(1);
    }
    char chr, text[256];
    int read_num = 0;
    double write_num = 0;
    while ((chr = fgetc(read_file)) != EOF)
    {
        for (; chr != ' ' && chr != '\n' && chr != EOF; chr = fgetc(read_file))
        {
            chr = chr - '0';
            read_num = read_num * 10 + chr;
        }
        write_num = read_num / 3;
        write_num += 0.05;

        if (chr != EOF)
            sprintf(text, "%.1f%c", write_num, chr);
        else
            sprintf(text, "%.1f", write_num);
        fputs(text, write_file);

        read_num = 0;
        sprintf(text, "");
    }

    fclose(read_file);
    fclose(write_file);

    return 0;
}
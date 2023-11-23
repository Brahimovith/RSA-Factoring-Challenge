#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * @argc: arguments count
 * @argv: list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
    clock_t debut,fin;
    double tt;
    debut = clock();
    FILE *fichier;
    char line[100];
    int i = 2;
    int a,l;
    if(argc != 2)
    {
        return 1;
    }
    fichier = fopen(argv[1],"r");
    if(fichier == NULL)
    {
        return 1;
    }
    while(fgets(line, sizeof(line), fichier) &&( (double)(fin - debut)/CLOCKS_PER_SEC)<=5 )
    {
        l = atoi(line);
        while(l % i)
        {
            i ++;
        }
        a = l / i;
        printf("%d=%d*%d\n",l,a,i);
	fin = clock();
    }


    


}


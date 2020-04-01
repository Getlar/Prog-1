#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//641318

typedef struct adatok
{
    char orszag[3];
    char rendszam[10];
    char marka[15];
}ADATOK;

typedef struct kulonbozok
{
    char marka[15];
    int markadarab;
}KULONBOZOK;

int hasonlito(const KULONBOZOK* a, const KULONBOZOK* b)
{
	return strcmp(a->marka, b->marka);
}

int main()
{
    ADATOK autok[20];
    char sor[29];
    char* token;
    int db = 0, j, i, kulonbozo = 1;
    char markak[20];
    KULONBOZOK nemegyformak[20];
    //FILE* fin = fopen("sample.txt", "r");
    while(fgets(sor, 29, stdin) != NULL)
    {
        token = strtok(sor, ";");
        strcpy(autok[db].orszag, token);
        token=strtok(NULL, ";");
        strcpy(autok[db].rendszam, token);
        token=strtok(NULL, "\n");
        strcpy(autok[db].marka, token);
        db++;
    }
    for(i = 0; i < db; i++)
    {
        nemegyformak[i].markadarab = 0;
    }
    for(i=0; i < db; i++){
        strcpy(markak, autok[i].marka);
        if(i == 0)
        {
            strcpy(nemegyformak[i].marka, markak);
            nemegyformak[i].markadarab++;
        }
        else
        {
            for(j = 0; j < db; j++)
            {
                if(strcmp(autok[j].marka, markak) != 0)
                {
                    strcpy(nemegyformak[kulonbozo].marka, markak);
                    nemegyformak[kulonbozo].markadarab++;
                    kulonbozo++;
                    break;
                }
                else
                {
                    nemegyformak[j].markadarab++;
                    break;
                }
            }
        }
    }
    qsort(nemegyformak, kulonbozo, sizeof(KULONBOZOK), hasonlito);
    for(i = 0; i<kulonbozo; i++)
    {
        printf("%s: %d\n", nemegyformak[i].marka, nemegyformak[i].markadarab);
    }
    //fclose(fin);
    return 0;
}

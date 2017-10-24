// Autor: ¼ubomír Volèko
// Dátum: 18.10.2017
// Description: generovanie spz
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

int i;
char spz[6];

printf("SN");
srand(time(NULL));
for(i=0;i<3;i++)
{
	spz[i]=rand()%10+48;//generovanie cisel
}
for(i=3;i<5;i++)
{
	spz[i]=rand()%26+65;//generovanie pismen
}

spz[5]='\0';

printf("%s", spz);
return 0;
}

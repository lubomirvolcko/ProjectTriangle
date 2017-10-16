// Autor: ¼ubomír Volèko
// Dátum: 11.10.2017
// Description: Program vypíše èi sa dá/nedá zostroji trojuholník

#include <stdio.h>
#include <math.h>

int main()
{

int a, b, c;
printf("Enter a length of the first page: \n");
scanf("%d", &a);
printf("Enter a length of the second page: \n");
scanf("%d", &b);
printf("Enter a length of the third page: \n");
scanf("%d", &c);

if (a+b>c)
	{
		if(b+c>a)
		{
			if(a+c>b)
			{
				printf("YES");
			}
			else
			{
			printf("NO");	
			}
		}else
		{
		printf("NO");	
		}
	}else
		{
		printf("NO");
		}
	return 0;
}

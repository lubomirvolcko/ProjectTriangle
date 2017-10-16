// Autor: ¼ubomír Volèko
// Dátum: 11.10.2017
// Description: Program vypíše èi je trojuhlník pravouhlý

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

/*if(a*a+b*b=c*c || a*a+c*c=b*b || b*b+c*c=a*a)
	{
		printf("YES");
	}else
		{
		printf("NO");
		}
*/
if(a>b)
{
	if(b>c)
	{
		if(pow(a, 2)==pow(b, 2)+pow(c, 2))
		{
			printf("YES");
		}else
			{	
			printf("NO");
			}
	}else
		{
		if(a>c)
			{
			if(pow(a, 2)==pow(b, 2)+pow(c, 2))
			{
			printf("YES");
			}else
				{
				printf("NO");
				}
			}else
				{
				if(pow(c, 2)==pow(a, 2)+pow(b, 2))
				{
				printf("YES");
				}else
					{
					printf("NO");
					}
				}
		}
}else
	{
	if(b>c)
		{
		if(pow(b, 2)==pow(a, 2)+pow(c, 2))
			{
			printf("YES");
			}else
				{
				printf("NO");
				}	
		}else
			{
			if(pow(c, 2)==pow(a, 2)+pow(b, 2))
			{
			printf("YES");
			}else
				{
				printf("NO");
				}
			}
	}
return 0;
}


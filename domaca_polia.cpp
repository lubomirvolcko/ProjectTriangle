// Autor: ¼ubomír Volèko
// Dátum: 21.10.2017
// Description: domáca úloha polia

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{

srand(time(NULL));
int arr[N];

int i;
for(i=0;i<N;i++)
{
	arr[i]=rand()%10000+10; //generovanie nahodnych cisel
}

for(i=0;i<N;i++)
{
	printf("%d ", arr[i]); //vypiseme vygenerovane cisla
}

int count=0;
for(i=0;i<N;i++)
{
	if(arr[i]%2==0)
	{
		count++;
	}
}
printf("\nEven: %d odd: %d", count, N-count); //vypis poctu parnych a neparnych cisel

int twodig_count=0, threedig_count=0, fourdig_count=0;
for(i=0;i<N;i++)
{
	if(arr[i]<100)
	{
		twodig_count++;		
	}
	if(arr[i]<1000 && arr[i]>=100)
	{
		threedig_count++;		
	}
	if(arr[i]<10000 && arr[i]>=1000)
	{
		fourdig_count++;		
	}
}
printf("\nTwo dig numbers: %d \nThree dig numbers: %d\nFour dig numbers: %d", twodig_count, threedig_count, fourdig_count); //vypis podla poctu cifier v cisle

int min=9999;
int max=10;

for(i=0;i<N;i++)
{
	if(arr[i]<min)
	{
		min=arr[i];
	}
	if(arr[i]>max)
	{
		max=arr[i];
	}
}
printf("\nMax number is: %d \nMin number is: %d", max, min); //vypiseme najvacsie a najmensie cislo

printf("\nArray frm the end: ");
for(i=N-1;i>=0;i--)
{
	printf("%d ", arr[i]); //vypiseme vygenerovane cisla odzadu
}

printf("\nPalindrom numbers: ");
int countp=0; //sluzi pre pocet palindromov
for(i=0;i<N;i++) //vypis palindromov
{
	int a=arr[i]%10;
	int b=arr[i]/10;
	int c=arr[i]/100;
	int d=(arr[i]%100)/10;
	int e=(arr[i]%1000)/100;
	int f=arr[i]/1000;
	
	
	if(arr[i]>10 && arr[i]<100) 
	{
		if(a==b)
		{
			printf("%d ", arr[i]);
			countp++;
		}
	}
	if(arr[i]>100 && arr[i]<1000)
	{
		if(a==c)
		{
			printf("%d ", arr[i]);
			countp++;
		}
	}
	if(arr[i]>100 && arr[i]<1000)
	{
		if(a==f && d==f)
		{
			printf("%d ", arr[i]);
			countp++;
		}
	}
	
}
if(countp==0)
{
	printf("none");//vypise ak nieje ziadne cislo palindrom
}

int count_divsion_seven=0;
for(i=0;i<N;i++)// zisti kolko cisel je delitelnych cislom 7
{
	if(arr[i]%7==0)
	{
		count_divsion_seven++;
	}
}
printf("\nNumber of divisible numbers by seven: %d", count_divsion_seven);

return 0;

}

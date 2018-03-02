#include<conio.h>
#include<stdio.h>
void main()
{
int min,hr,rem;
scanf("%d",&min);
hr=min/60;
rem=min-(hr*60);
printf("%d\t%d",hr,rem);
getch();
}

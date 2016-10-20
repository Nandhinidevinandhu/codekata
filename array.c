#include<stdio.h>
#include<conio.h>
void main()
{
int arr[50],i,n;
clrscr();
printf("\n Enter the number of elements in array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter the elements in array:");
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]==i)
printf("\n %d",i);
}printf("No matches");
getch();
}

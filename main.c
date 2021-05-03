/*
Algorithm to find the smallest and largest numbers in an array


1.Input the array elements.
2.Initialize small = large = arr[0]
3.Repeat from i = 2 to n
4.if(arr[i] > large)
5.large = arr[i]
6.if(arr[i] < small)
7.small = arr[i]
8.Print small and large.
*/


#include<stdio.h>

 int main () 
{
  
int a[50], i, n, large, small;
  
printf ("\nEnter the number of elements : ");
scanf ("%d", &n);
  
printf ("\nInput the array elements : ");
  
for (i = 0; i < n; ++i)
    
scanf ("%d",&a[i]);

large=small=a[0];

for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];

if(a[i]<small)
small=a[i];
}

printf(" \nThe smallest element is % d \n ",small);
printf(" \nThe largest element is % d \n ",large);

return 0;
}



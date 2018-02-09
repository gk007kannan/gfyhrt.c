#include<stdio.h>
#include<conio.h>
void amin()
{
 char arr[200];
    int count = 0, i;
    printf("enter the array\n");
    scanf("%d\n", &arr);
    for (i = 0;arr[i]<10;i++)
    {
        if (arr[i] == ' ')
            count++;    
    }
    printf("number of words in given array are: %d\n", count + 1);
   
 getch();
 }

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void quicksort(int a[30],int first,int last)
{
    int i,j,pivot,temp;
    if(first<last) 
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]>=a[pivot]&&last)
            i++;
            while(a[j]>a[pivot])
            j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=a[temp];
            }
          }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quicksort(a,0,j-1);
        quicksort(a,j+1,last);
        
    }
}
int main()
{
    int a[40],n,i;
    printf("size of array");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    printf("sorted");
    for(i=0;i<n;i++)
     printf("%d",a[i]);
        return 0;

    
}

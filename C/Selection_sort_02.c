#include <stdio.h>
#define SIZE 5 
//책

void main()
{
    int arr[SIZE]= {95,75,85,100,50};
    int i=0;
    int temp;

    do
    {
        int j= i+1;
        do
        {
            if(arr[i]>arr[j])
            {
                temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
            j++;
        } while (j<SIZE);
        i++;
    } while (i < (SIZE-1));   

    for(int a=0; a<SIZE; a++)
    {
        printf("%d\t", arr[a]);
    }
    printf("\n");
}
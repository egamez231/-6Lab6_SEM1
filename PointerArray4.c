#include <stdio.h>

void fillArray (int *arr[100], int i);
void swapArray(int *arr[100], int i);
void printArray (int *arr[100], int i);

int main()
{
    int arr,i;

    fillArray (&arr,i);
    swapArray (&arr,i);
    printArray (&arr,i);

    return 0;
}


void fillArray(int *arr[10],int i)
{
        printf("Enter 5 Marks:");
        for (i=0;i<5;i++)
        {
           fscanf(stdin, "%d", &arr[i]);
        }

}
void swapArray(int *arr[10],int i)
{
 int j, temp;
 for(i=0;i< 5;i++)
 {
  for(j=i+1;j< 5;j++)
  {
   if(arr[i]>arr[j])
   {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
   }
  }
 }
}

void printArray(int *arr[10],int i)
{
    printf ("\n\nMarks in ascending order =");
    for(i=0;i< 5;i++)
        {
            printf("%d\t", arr[i]);
        }
}

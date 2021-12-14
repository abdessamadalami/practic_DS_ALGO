#include <stdio.h>

int sum_of_values(int arr_count, int* arr)
{
    int i,j;
    i = 1;
    j = 0;

     int sum,max_sum;
     max_sum = 0;
    while (j < arr_count - 1)
    {
      printf("%d ",arr[0]);
     i = 2 + j;
     sum = arr[0];
     while (i < arr_count )
     {
         printf("%d ",arr[i]);
         sum += arr[i];
         i+= 2; 
     }
     if (sum > max_sum)
         max_sum = sum;
     printf("_%d_(%d)\n",sum,j);
     j++;
    }
    printf(" %d \n",max_sum);
    return max_sum;
}
int maxSubsetSum(int arr_count, int* arr) {
    
    
    int index, i, max_sum;
    index = i = max_sum = 0 ;
    int sum;
    
    while (index < arr_count)
    {
        sum = sum_of_values(arr_count - index,arr + index);
        printf("%d ",sum);
        if (sum > max_sum)
            max_sum = sum;
    index++;
    }
    if (max_sum < 0)
        return 0;
    return max_sum;
}

int main()
{
    int arr[5] = {3,-5,-7,-8,-10};
    printf( "_____%d \n",maxSubsetSum(5,arr));

}
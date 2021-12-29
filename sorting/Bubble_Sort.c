/*
 * Complete the 'countSwaps' function below.
 *
 * The function accepts INTEGER_ARRAY a as parameter.
 */

void countSwaps(int a_count, int* a) 
{

int i,index,nbr;
index = 0; 
for ( i = 0; i < a_count; i++) {
    
    for (int j = 0; j < a_count - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            nbr = a[j];
            a[j] = a[j + 1];
            a[j + 1] = nbr;
            index ++;
        }
    }
    
}
printf("Array is sorted in %d swaps.\n",index);  
printf("First Element: %d\n",a[0]);  
printf("Last Element: %d\n",a[a_count-1]); 
}


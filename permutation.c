## refrence from stackoverflow

#include <stdio.h>
#include <string.h>

/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          printf("swap 1: %s, l=%d,i=%d\n", a, l, i);
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
          printf("swap 2: %s, l=%d,i=%d\n", a, l, i);
       }
   }
}


/* Driver program to test above functions */
int main()
{
    char str[] = "1487"; // input
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}

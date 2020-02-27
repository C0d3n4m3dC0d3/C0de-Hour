#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, N, arr[50], key, i, j, k, buf;
    scanf("%d", &T);    //No of Testcases
    printf("%d", T);
    for(i = 0; i<T; i++)
    {
      scanf("%d%*c", &N); //Size of array in Testcase i
      printf("Case %d: Size %d", i+1, N);
      for(j = 0; j<N; j++)
      {
        scanf("%d", &arr[j]); //Accepting array elements
      }
      for(j = 0; j<N; j++)
      {
        printf("%d ", arr[j]);
      }
      printf("\n");
      //Accepting key and rotating the array
      scanf("%d", &key);
      for(j = 0; j<key; j++)
      {
        buf = arr[0];
        for(k = 1; k<N-1; k++)
        {
          arr[k]= arr[k+1];
        }
        arr[k] = buf;
      }

      //Printing the rotated array:
      for(j = 0; j<N; j++)
      {
        printf("%d ", arr[j]);
      }
      printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, N, bin[50], rem, i, j, a[50];
    scanf("%d", &T);
    for(i = 0; i<T; i++)
    {
        scanf("%d", &N);
        j = 0;
        while(N != 0)
        {
            rem = N%2;
            N = N/2;
            a[j++] = rem;
        }

        i = 0;
        while(j-1>=0)
        {
            bin[i++] = a[j--];
        }
        for(j = 0; j<=i; j++)
        {
            printf("%d",bin[j]);
        }
        printf("\n");
    }
    return 0;
}

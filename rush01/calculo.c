#include<stdio.h>
#include<string.h>
 
void print(int *num, int n)
{
    int i;
    for ( i = 0 ; i < n ; i++)
        printf("%d ", num[i]);
    printf("\n");
}
int main()
{
    int num[4] = {1, 2, 3, 4};
    int temp;
    int i, n, j;

    n = 4;
    for (j = 1; j <= 4; j++) {
        for (i = 1; i < n-1; i++) {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            print(num, n);
    	}
    }
    return 0;
}
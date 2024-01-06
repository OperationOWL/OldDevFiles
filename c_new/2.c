#include <stdio.h>
void bin(int x,int y);
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
       
for (int i = 0; i < n; i++)
    {
        bin(arr[i],n);
        printf("\n");
    }
    
    return 0;
}

void bin(int x,int y)
{
    int i,j=y-1;
    for (i = 1 << j; i > 0; i = i / 2)
    {
        (x & i) ? printf("1 ") : printf("0 ");
    }
}
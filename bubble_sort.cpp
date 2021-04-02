#include <stdio.h>


int bubble_sort (int a[],int); /* function prototype for add */


int main() {
    int n, i;
    int num[100];

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%d", &num[i]);       
    }

   
    bubble_sort(num,n);
   
    
    return 0;
}


int bubble_sort(int a[],int m)
{
    int x,y,t;
     for (x=0; x < m-1; x++)
        for (y=0; y < m-x-1; y++)
            if (a[y] > a[y+1])
            {
                t=a[y];
                a[y]=a[y+1];
                a[y+1]=t;
            }
            
    /* print sorted array */
    printf("--------------------\n");
    for (int i=0; i < m; i++)
        printf("%d\n",a[i]);
        
        return 0;
}

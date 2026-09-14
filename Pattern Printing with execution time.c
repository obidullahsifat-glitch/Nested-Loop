#include <stdio.h>
#include <time.h>
int main()
{
    clock_t start,end;
    int i,j,n;

    printf("Enter Your Number");
    scanf("%d",&n);
    start=clock();
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");

    }

    end=clock();
    double take_time=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Total time take=%lf sec",take_time);




    return 0;
}

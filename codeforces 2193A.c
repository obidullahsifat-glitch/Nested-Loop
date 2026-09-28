#include <stdio.h>

int main() {
    int t;

    scanf("%d", &t);
    int i,j;
    for(i=0;i<t;i++)
    {
        int sum=0;
        int count=0;
        int n, s, x;

        scanf("%d %d %d", &n, &s, &x);
        int arr[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
            sum=sum+arr[j];
        }
        for(j=0;j<n;j++)

        {


            int sum1=s-sum;


            if(sum <= s && sum1 % x == 0)
            {
                count=1;
            }
        }
        if(count==1)
           {
               printf("YES");
           }
           if(count==0)
           {
               printf("NO");
           }
    }
    return 0;
}

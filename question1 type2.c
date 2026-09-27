#include <stdio.h>
#include <math.h>

/*Write a program in C that will take a list of numbers
  from the standard input. The list will be ended by a
  negative number. The program will calculate median of the
  inputted numbers except the last negative number.*/


int main()
{
  int i,j;
  int temp;
  int count=0;

  int arr[1000];
  for(i=0;i<1000;i++)
  {
      scanf("%d",&arr[i]);
      count++;
      if(arr[i]<0)
      {
          break;
      }
  }


  for(i=0;i<count-1;i++)
  {
      for(j=i+1;j<count-1;j++)
      {
        if(arr[j]<arr[i])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }
      }
  }

      if((count-1)%2==0)
      {
          int x=(count-1)/2;
          float ans1=(float)(arr[x-1]+arr[x])/2;
          printf("%.2f\n",ans1);
      }
      if((count-1)%2!=0)
      {
         float y=(float)(count-1)/2;

         int index = (int)ceil(y) - 1;
         printf("%d\n",arr[index]);
      }






    return 0;
}

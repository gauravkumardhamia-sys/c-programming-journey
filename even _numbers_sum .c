#include<stdio.h>
#include<math.h>
int main()
{
    int i=2,sum=0;
      while (i<=100)
      {
        if(i%2==0)
        {
          printf("%d",i);
          
        }
        sum=sum+i;
        i++;
        if(i%2==0 && i<=100)
        {
        printf(",");
      }
      }
      
      printf("\nsum=%d",sum);
 
     return 0;
      }
#include<stdio.h>
#include<conio.h>
void main()
{
    long long a,b,c,i,n;
    printf("Enter first two numbers:");
    scanf("%lld%lld", &a,&b);
    printf("no of terms:");
    scanf("%lld", &n);
    printf("%lld,",a);
    printf("%lld,",b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        
         printf("%lld",c);
        if(i<n){
            printf(",");}
        a=b;
        b=c;
    }
    
getch();
    
}
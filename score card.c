#include<stdio.h>
int main()
{
    float a,b,c,i;
    printf("enter marks");
    scanf("%f%f%f",&a,&b,&c);
    printf("\t\tSCORE CARD\n");
    printf("subjects\t\tout of \t\t gained\n");
    printf("SUBJECT 1\t\t100\t%f\n",a);
    printf("SUBJECT 2\t\t100\t%f\n",b);
    printf("SUBJECT 3\t\t100\t%f\n",c);
    printf("TOTAL    \t\t300\t%f\n",a+b+c);
    i=(a+b+c)/3;
    printf("percent  \t\t\t%f ", i);
    if(i<=100 && i>=90)
    {
        printf("\nGrade\t\t\t\tA+");
    }
    else if(i<=90 && i>=80){
        printf("\nGrade\t\t\t\tA");
    }
     else if(i<=80 && i>=60){
        printf("\nGrade\t\t\t\tB");
    }
    else if(i<=60 && i>=40){
        printf("\nGrade\t\t\t\tC");
    }
     else if(i<=40 && i>=30){
        printf("\nGrade\t\t\t\tD");
    }
    else if(i>=0 && i<=30){
        printf("\nGrade\t\t\t\tFAILED");
    }

    return 0;

}           
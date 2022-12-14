//Wap to enter marks of five subjects and calculate total,average and percentage.
#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,total;
    float avg,per;
    printf("Enter marks of five subjects:\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    total=s1+s2+s3+s4+s5;
    avg=(float)total/5;
    per=(float)total/5;
    printf("Total marks is %d\n",total);
    printf("Average is %.2f\n",avg);
    printf("Percentage is %.2f\n",per);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int gcd(int,int);

int main()
{
int num1,num2;
printf("enter the first positive integer:");
scanf("%d",&num1);
printf("enter the second positive integer:");
scanf("%d",&num2);
if(num1<=0 || num2<=0)
{
    printf("both numbers must be positive integers\n");
}
int result=gcd(num1,num2);
printf("the greatest common divisior of %d and %d is %d",num1,num2,result);

    return 0;
}

 int gcd(int a,int b)
 {
     int smaller=(a<b)?a:b;
     //a b'den küçükse a'yý ata, a b'den büyükse b'yi ata
     int i,gcd;
     for(i=1; i<=smaller;i++)
     {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
     }

 }
 return gcd;
 }



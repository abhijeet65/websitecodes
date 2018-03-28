#include<stdio.h>


void main(){
int n;
printf("eenetr the number\n");
scanf("%d",&n);

int y;
y=n;
int sum=0,f;
while(n!=0){
f=n%10;
sum=sum+f;
n/=10;
}
int z=sum;
int r,rev;
while(sum!=0){
r=sum%10;
rev=rev*10+r;
sum=sum/10;
}
if(y==(rev*z))
printf("magic number\n");
else
printf("it is not a magic number\n");
}


#include<stdio.h>


void main(){
int n;
printf("eenetr the number\n");
scanf("%d",&n);
int sum=0,f;


while(n!=0){
f=n%10;
sum=sum*10+f;
n/=10;
}
printf("reverse number is  = %d\n",sum);
}


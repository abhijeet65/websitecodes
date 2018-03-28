#include<stdio.h>
int fibo(int n){

if(n<=1)
return n;

return fibo(n-1)+fibo(n-2);
}

void main(){
int n;
printf("eneter the number to check fibonacci\n");
scanf("%d",&n);

int x=fibo(n);
printf("%d\n",x);
}



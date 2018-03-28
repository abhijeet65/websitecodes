#include<stdio.h>


int binary(int n){
int i=1;
int sum=0,x;
while(n>0){

x=n%2;
sum=sum+x*i;
i=i*10;
n=n/2;
}

return sum;
}


void main(){
int n;
while(1){
printf("enetr the number\n");
scanf("%d",&n);

int x=binary(n);
printf("binary rep=%d",x);
}
}


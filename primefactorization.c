#include<stdio.h>
#include<math.h>


void primefactor(int n){


while(n%2==0){
printf("%d ",2);
n=n/2;
}
int i;
for(i=3;i<sqrt(n);i=i+2){

while(n%i==0)
{
printf("%d ",i);
n=n/i;
}
}
}


void main(){
int n;
printf("enter the number\n");
scanf("%d",&n);

primefactor(n);
}



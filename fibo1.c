#include<stdio.h>
#include<math.h>

int fibo(int n){
int s=sqrt(n);

return (s*s==n);
}

void main(){
int n;
printf("eneter the number to check fibonacci\n");
scanf("%d",&n);

int x=fibo(5*n*n+4)+fibo(5*n*n-4);
if(x>=1)
printf("yes it is%d\n",x);
else 
printf("no\n");

}



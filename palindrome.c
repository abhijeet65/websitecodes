#include<stdio.h>

void main(){
int n;
printf("eneter the number\n");
scanf("%d",&n);
int x,rev=0,j;
j=n;
while(n!=0){

x=n%10;
rev=rev*10+x;
n=n/10;
}
printf("%d ",rev);
if(rev==j)
printf("equal\n");
else
printf("not equal\n");

}





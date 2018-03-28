#include<stdio.h>
#include<math.h>


void main(){
int n,x,c=0,v;
printf("eneter the number\n");
scanf("%d",&n);
x=v=n;
while(x!=0){
x=x/10;
c++;
}
int r;
printf("its a %d number\n\n",c);
int sum=0;
while(n!=0){
r=n%10;
sum=sum+pow(r,c);
n=n/10;

}
if(sum==v)
printf("its a armstrong number\n");
else
printf("its not a armstrong numebr\n");
}


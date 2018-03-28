#include<stdio.h>


void main(){
int n;
printf("enete the number to find all prime number less than\n");
scanf("%d",&n);
int a[n],i;
for(i=2;i<=n;i++){
a[i]=i;
}
int j;
for(i=2;i<=n;i++)
{
if(a[i]!=0)
j=i*i;

while(j<=n){
a[j]=0;
j=j+i;
}
}
for(i=2;i<=n;i++){
if(a[i]!=0)
printf("%d ",a[i]);
}
}


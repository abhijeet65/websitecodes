#include<stdio.h>

void print(int a[],int n,int b[]){
int sum=0,i;
for(i=0;i<=n;i++)
{
if(a[i]==1){
printf("%d ",b[i]);
sum++;
}
}
if(sum==0)
printf("empty");
printf("\n");
}



void combination(int a[],int k,int n,int b[]){
if(k==n)
{
a[k]=0;
print(a,n,b);
a[k]=1;
print(a,n,b);
return;
}
a[k]=0;
combination(a,k+1,n,b);
a[k]=1;
combination(a,k+1,n,b);
}



void main(){
printf("eneetr the array size\n");
int n;
scanf("%d",&n);
int b[n];
int a[n],i;
//array contains all the elemnts of array for which we want to find the all subsets

for(i=0;i<n;i++){
scanf("%d",&b[i]);
a[i]=0;//temporary binary digits
}
combination(a,0,n-1,b);//explain
}









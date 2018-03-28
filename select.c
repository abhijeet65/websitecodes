#include<stdio.h>

void main(){
int n,i,j;
printf("enetre the size of array\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("sorted array using selection sort\n");
int pos,temp;
for(i=0;i<n-1;i++){
pos=i;
for(j=i+1;j<n;j++){
if(a[pos]>a[j])
pos=j;
}
if(pos!=i)
{
temp=a[pos];
a[pos]=a[i];
a[i]=temp;
}
}

for(i=0;i<n;i++)
printf("%d ",a[i]);
}

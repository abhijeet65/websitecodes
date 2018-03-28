#include<stdio.h>

void main(){
int n;
printf("enetre the size of array\n");
scanf("%d",&n);
int a[n],i;

for(i=0;i<n;i++)
scanf("%d",&a[i]);

int *x,*y;
*x=a[2];
*y=a[3];

int temp;
temp=*x;
*x=*y;
*y=temp;
for(i=0;i<n;i++)
printf("%d",a[i]);
}


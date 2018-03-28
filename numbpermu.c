#include<stdio.h>



void main(){
int n;

int d;
printf("how many digits are there\n");
scanf("%d",&d);
int a[d],i;
printf("eneter the number\n");
for(i=0;i<d;i++)
scanf("%1d",&a[i]);

("-----------------\n");
for(i=0;i<d;i++)
printf("%d ",a[i]);
}


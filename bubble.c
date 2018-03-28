#include<stdio.h>
#include<time.h>

void main(){
int n;

printf("enetr the siz eof array\n");
scanf("%d",&n);
clock_t start,end;
int a[n],i;
printf("enter the  array elemts\n");
for(i=0;i<n;i++)
a[n-i]=i;

int j,pos,temp;
start=clock();

for(i=0;i<n-1;i++){
pos=i;
for(j=i+1;j<n;j++)
{
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
end=clock();
float time=(float)(end-start)/CLOCKS_PER_SEC;

printf("sorted array\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n%f\n",time);
}
 

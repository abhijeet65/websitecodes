#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int a[],int low,int mid,int high){


int b[10000000],i,j,k;
for(i=low;i<=high;i++)
b[i]=a[i];

i=low;
j=mid+1;
k=low;
while(i<=mid && j<=high)
{
if(b[i]<b[j])
a[k++]=b[i++];
else
a[k++]=b[j++]; 
}
while(i<=mid)
a[k++]=b[i++];
while(j<=high)
a[k++]=b[j++];


}


void mergesort(int a[],int low,int high){
int mid;
if(low<high){
mid=(low+high)/2;

mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
}
}




void main(){
int n;
clock_t start,end;

printf("Eneter the array size\n");
scanf("%d",&n);

int a[n],i;
printf("enetre the elemnts\n");
for(i=n;i>0;i--)
a[n-i]=i;
start=clock();
mergesort(a,0,n-1);
end=clock();

for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("-----------------------\n");
float time=(float)(end-start)/CLOCKS_PER_SEC;
printf("%f\n",time);

}

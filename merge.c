#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int a[],int low,int mid,int high){

int p=low,q=mid+1;

int b[high-low+1],i;
int k=0;
for(i=low;i<=high;i++){
if(p>mid)
b[k++]=a[q++];
else if(q>high)
b[k++]=a[p++];
else if(a[p]>a[q])
b[k++]=a[q++];
else
b[k++]=a[p++];

}

for(p=0;p<k;p++)
a[low++]=b[p];

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

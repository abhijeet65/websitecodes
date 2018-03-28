#include<iostream>
using namespace std;


void merge(int a[],int start,int mid,int end){
int p,q;
p=start;
q=mid+1;
int i,k=0;
int arr[end-start+1];//dummy array
for(i=start;i<=end;i++){
if(p>mid)// p comes to an end
arr[k++]=a[q++];
else if(q>end)//q come to an end
arr[k++]=a[p++];
else if(a[p]<a[q])//comparing and pushing to dummy array
arr[k++]=a[p++];
else
arr[k++]=a[q++];
}
for(p=0;p<k;p++)
a[start++]=arr[p];//copy back to original array
}
void merge_sort(int a[],int start,int end){
int mid;
if(start<end){
mid=(start+end)/2;

merge_sort(a,start,mid);
merge_sort(a,mid+1,end);
merge(a,start,mid,end);
}
}

int main(){
int n;
cout<<"eneter the size of array\n";
cin>>n;
int a[n];
cout<<"enter the array elemnts\n";
int i;
for(i=0;i<n;i++)
cin>>a[i];
cout<<"enetered array is\n";

for(i=0;i<n;i++)
cout<<" "<<a[i];

merge_sort(a,0,n-1);
cout<<"sorted array is\n";
for(i=0;i<n;i++)
cout<<" "<<a[i];
return 0;
}



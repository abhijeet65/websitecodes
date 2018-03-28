#include <stdio.h>

int main() {
	//code
	int n;
	scanf("%d",&n);
	int a[n],i,min=999,max=-1;
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	    if(a[i]>max)
	    max=a[i];
	    if(a[i]<min)
	    min=a[i];
	    
	}
	int c,j;
	for(i=min;i<max;i++){
	    c=0;
	    for(j=0;j<n;j++){
	    if(a[j]%i==0)
	    c++;
	    }
	    if(c==n)
	    printf("%d\n",i);
	    
	    
	}
	
	return 0;
}

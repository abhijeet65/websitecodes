#include<stdio.h>

void main(){
int n;

printf("eneet the decimal no\n");
scanf("%d",&n);
int b[n],len=0;
while(n!=0){
b[len]=n%2;
n=n/2;
len++;
}
int i;
for(i=len-1;i>=0;i--){
printf("%d",b[i]);
}

}



#include<string.h>
#include<stdio.h>
#include<math.h>
int max=-999;

void swap(char *x,char *y){
char temp;

temp=*x;
*x=*y;
*y=temp;
}
void permute(char a[],int l,int r){

if(l==r){
//printf("%s\n",a);
int i=0,x;
int n=strlen(a);
int r=pow(10,n);
n--;
int sum=0;
while(i!=strlen(a)){
x=(int)a[i]-'0';

sum=sum+x*r;
r=pow(10,n);
n--;
i++;
}
if(max<sum/10)
max=sum/10;
printf("%d\n max=%d\n",sum/10,max);
}
else{
int i;
for(i=l;i<=r;i++){

swap(a+l,a+i);
permute(a,l+1,r);
swap(a+l,a+i);
}
}
}

void main(){

char str[20];
printf("eneter the string\n");
scanf("%s",str);
int n=strlen(str);
permute(str,0,n-1);

}








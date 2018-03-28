#include<stdio.h>
#include<string.h>


/*
a       
ab   a   
abh  ab  a
abhi abh ab
*/


void main(){

int n;
/*printf("eneter the rows\n");
scanf("%d",&n);
*/
int i,k,j,z;
char str[20];
scanf("%s",str);
//puts(str);
n=strlen(str);
for(z=n;z>=0;z--){
for(i=n-z;i>0;i--){

for(j=0;j<i;j++)
printf("%c",str[j]);
for(k=n-i;k>=0;k--)
printf(" ");





}
printf("\n");
}
}

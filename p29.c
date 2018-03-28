#include<stdio.h>

/*

     11
    2  2  
   3    3
  4      4
 5        5
  4      4
   3    3 
    2  2
     11
*/






void main(){
int n;
printf("enter the rows\n");
scanf("%d",&n);

printf("pattern is---------------\n");
int i,j,k,l;


for(i=1;i<=n;i++){

for(j=n-i;j>0;j--)
printf(" ");
printf("%d",i);
for(j=1;j<i*2;j++)
printf(" ");
printf("%d",i);

printf("\n");
}
for(i=n;i>=1;i--){

for(j=1;j<=n-i;j++)
printf(" ");
printf("%d",i);
for(j=1;j<i*2;j++)
printf(" ");
printf("%d",i);

printf("\n");
}

}





















#include<stdio.h>
#include<string.h>

#include<stdlib.h>



void main(){
char str[20];
printf("enetert the string\n");
gets(str);
//scanf("%s",str);
printf("\n");
char str1[20];
int i=0,k=0,n;
n=strlen(str);

for(i=(n-1);i>=0;i--)
str1[k++]=str[i];


for(int j=0;j<strlen(str1);j++)
printf("%c",str1[j]);
printf("\n");
}


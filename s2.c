#include<stdio.h>
#include<string.h>


void main(){
char str1[20],str2[20],str[20];
printf("eneyer the first strig\n");
gets(str1);
printf("eneyr the second string\n");
gets(str2);
int i=0,j=0;
while(str1[i]!='\0'){
str[i]=str1[i];
i++;
}

while(str2[j]!='\0'){
str[i]=str2[j];
i++;j++;
}

str[i]='\0';
puts(str);
}


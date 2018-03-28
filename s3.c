#include<stdio.h>
#include<string.h>
#include<ctype.h>
//this program illustrates string comparison and also how to conver to uppercase letters and and 
//it also demonstrates how to get a palindrome string comparision
 

void main(){
char str1[20],str2[20];
printf("eneyer the first string\n");
gets(str1);

int i=0;
while(str1[i]!='\0'){
str2[i]=str1[strlen(str1)-i-1];
i++;
}



str2[i]='\0';
char str4[20];
int j=0;
while(str2[j]!='\0')
{
str4[j]=toupper(str2[j]);
j++;
}

puts(str4);

if(strcmp(str1,str2)==0)
printf("both are equal\n");

puts(str2);
}


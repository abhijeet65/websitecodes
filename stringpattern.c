#include<stdio.h>
#include<string.h>

int patternmatching(char str[],char pat[]){
int i,j;
for(i=0;i<(strlen(str)-1);i++)
{
for(j=0;j<(strlen(pat)-1);j++)
{
if(str[i+j]!=pat[j])
break;
}
if(j==strlen(pat)-1)
return i;
}
}

void main(){
char str[20],pat[20];

printf("eneter the string\n");
scanf("%[^\n]",str);

printf("enetervthe pattern\n");
scanf("%s",pat);

int i=patternmatching(str,pat);
printf("found at pos=%d ",i+1);
}




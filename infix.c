#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 10
void push(char item);
char pop();
int prec(char item);
int top=-1;
char stack[SIZE];
char infix[20];
char postfix[20];
void main(){
int n;
printf("enter the infix expression\n");
scanf("%s",infix);
n=strlen(infix);
int i,k=0;
for(i=0;i!=n;i++)
{
if(isalnum(infix[i]))
postfix[k++]=infix[i];
else if(infix[i]=='(')
push(infix[i]);
else if(stack[top]=='(' || top==-1)
push(infix[i]);
else if(infix[i]==')'){
while(stack[top]!='(')
postfix[k++]=pop();
pop();
}
else{
if(prec(infix[i])>prec(stack[top]))
push(infix[i]);
else{
//postfix[k++]=pop();
while(prec(infix[i])<=prec(stack[top]))
postfix[k++]=pop();
push(infix[i]);
}
}
}
while(top!=-1){
postfix[k++]=pop();
}
printf("%s",postfix);
}
void push(char ch){
if(top==SIZE-1)
printf("stack is full\n");
else{
top++;
stack[top]=ch;}
}
char pop(){
char z;
if(top==-1)
printf("stack is empty\n");
else{
z=stack[top];
top--;
}
return z;
}
int prec(char p)
{
if(p=='^')
return 10;
else if(p=='*' || p=='/')
return 8;
else if(p=='+' || p=='-')
return 6;
else
return 0;
}

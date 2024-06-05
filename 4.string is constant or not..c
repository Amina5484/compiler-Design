#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,flag;
char a[5];
puts("Enter the value :: ");
gets(a);
for(i=0;i<strlen(a);i++)
{
if(isdigit(a[i]))
flag=1;
else
{
flag=0;
break;
}
}
if(flag==1)
puts("Value is constant");
else
puts("Value is a variable");
return 0; 
}
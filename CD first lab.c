#include<stdio.h>
#include<stdlib.h>
void main()
{
char a[10];
int flag, i=1;
printf("Enter any identifier:");
gets(a);
if(isalpha(a[0]) || a[0]== '_')
flag=1;
else
printf(" Not a valid identifier");
while(a[i]!='\0')
{
if(!isdigit(a[i])&&!isalpha(a[i]))
{
flag=0;
break;
}
i++;
}

if(flag==1)
printf("\n Valid identifier");
}
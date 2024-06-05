#include<stdio.h>
#include<stdlib.h>
int main()
{
int flag=1;
char i,j=0,temp[100];
printf("Enter the Sentence (add '$' at the end) :: \n\n");
while((i=getchar())!='$')
{
if(i==' ')
i=';';
else if(i=='\t')
i=',';
else if(i=='\n')
flag++;
temp[j++]=i;
}
temp[j]=NULL;
printf("\n\n\nAltered Sentence :: \n\n");
puts(temp);
printf("\n\nNo. of lines = %d",flag);
return 0; 
}
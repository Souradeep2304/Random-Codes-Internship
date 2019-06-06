
/* Counting the number of palindromes in an array of strings given by the user*/

#include<stdio.h>
#include<string.h>

void main()
{
char s[100][100];
int n1;
int n2=0;


//taking in the strings
printf("Enter the number of strings in the array:");
scanf("%d",&n1);
for(int i=0; i<n1;i++)
{
printf("Enter string number %d:",i+1);
scanf("%s",s[i]);
}
//printing the strings
/*for(int i=0; i <n1;i++)
{
printf("%s\n1",s[i]);
}
*/

for(int i=0; i<n1;i++)
{
int j;
int k=0,l,f=0;
char t[100];
char p[100];
strcpy(p,s[i]);
l=strlen(p);
for ( j = l - 1; j >= 0; j--)
  	{
		
  		t[k] = p[j];
		k++;
		
  	}
t[k]='\0';
for(int o=0;o<l;o++)
{
if(t[o]==p[o])
{f=0;}
else
f=1;
}
if(f==0)
{
printf("%s is palindrom.\n",p);
n2++;
}
}
printf("Number of Palindrome Numbers:%d\n",n2);
}

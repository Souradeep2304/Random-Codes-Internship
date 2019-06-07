/* Counting the number of palindromes in an array of strings given by the user*/

#include<stdio.h>
#include<string.h>
int n2=0;
int function(char s[100][100],int n1)
{

for(int i=0; i<n1;i++)
{
int j;
int k=0,l,f=0;
char t[100];
char p[100];
strcpy(p,s[i]);
l=strlen(p);

					//reversing the string
for ( j = l - 1; j >= 0; j--)
  	{
		
  		t[k] = p[j];
		k++;
		
  	}
t[k]='\0';				//mark the end of the string 
					//comparing the reversed and actual string
for(int o=0;o<l;o++)
{
if(t[o]==p[o])                           //tolower() to ignore case
{f=0;}
else
f=1;
}
if(f==0)
{
printf("%s is palindrome.\n",p);
n2++; 					//counting the number of palindromes
}
}
}



void main()
{
char s[100][100];
int n1;

					//taking in the strings
printf("Enter the number of strings in the array:");
scanf("%d",&n1);
for(int i=0; i<n1;i++)
{

printf("Enter string number %d:",i+1);
scanf("%s",s[i]);
}
				

function(s,n1);				//checking palindrome
printf("Number of Palindromes:%d\n",n2);
}

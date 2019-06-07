/* Counting the number of palindromes in a paragraph*/

#include<stdio.h>
#include<string.h>

void main()
{
int n2=0;
char new[]="Hello maam my name is oso. amma";
//gets(new);
int l=strlen(new);
//char sep[]=" ";
char sep[]=",. ";
char *w=strtok(new,sep);
while(w!=NULL)

					//checking palindrome
{
int j;
int k=0,l,f=0;
char t[100];
char p[100];
strcpy(p,w);
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
if(t[o]==p[o])
{f=0;}
else
f=1;
}
if(f==0)
{
printf("%s is palindrome.\n",p);
n2++; 					//counting the number of palindromes
}
//w=strtok(NULL,sep);
w=strtok(NULL,sep);
}
printf("Number of Palindromes:%d\n",n2);
}

/* Counting the number of palindromes in a paragraph*/

#include<stdio.h>
#include<string.h>
char longeststring[100];			//longest palindrome
int longest;
int final=0;
void main()
{
int number_of_palindromes=0;
char paragraph[]="I maam my name is oso. amma %  121  I"; 
//gets(new);
//char sep[]=" ";
char sep[]=",. ";			//seperator
char *tokens=strtok(paragraph,sep);
while(tokens!=NULL)			//checking palindrome
{
int j;	
int k=0,len,f=0;			//k is the size of temporary character array to store reversed word, l is to store length, f is flag
char temp[100];				//to store reversed word
char org[100];				//to store original word
strcpy(org,tokens);
len=strlen(org);

					//reversing the string
for ( j = len - 1; j >= 0; j--)
  	{
		
  		temp[k] = org[j];
		k++;
		
  	}
temp[k]='\0';				//mark the end of the string 
					//comparing the reversed and actual string
for(int o=0;o<len;o++)
{
if(temp[o]==org[o])                     //tolower() to ignore case
{f=0;}
else
f=1;
}
if(f==0)
{
printf("%s is palindrome.\n",org);
longest=strlen(temp);
					//longest palindrome
if(longest>final)
{
strcpy(longeststring,temp);
final=longest;
}
number_of_palindromes++; 		//counting the number of palindromes
}
tokens=strtok(NULL,sep);
}
printf("Number of Palindromes:%d\n",number_of_palindromes);
printf("Longest Palidrome:%s\n",longeststring);
}

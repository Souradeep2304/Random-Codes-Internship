/* Counting the number of palindromes in an array of strings given by the user*/

#include<stdio.h>
#include<string.h>

void main()
{
char string[100][100];
int number_of_strings;
int number_of_palindromes=0;


					//taking in the strings
printf("Enter the number of strings in the array:");
scanf("%d",&number_of_strings);
for(int i=0; i<number_of_strings;i++)
{
printf("Enter string number %d:",i+1);
scanf("%s",string[i]);
}

					//checking palindrome

for(int i=0; i<number_of_strings;i++)
{
int j;
int k=0,len,f=0;			//k is the size of temporary character array to store reversed word, l is to store length, f is flag
char temp[100];				//to store reversed word
char org[100];				//to store original word
strcpy(org,string[i]);
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
number_of_palindromes++; 		//counting the number of palindromes
}
}
printf("Number of Palindromes:%d\n",number_of_palindromes);
}

#include"stdio.h"
int main()
{
	char c='0';
	c=getchar();
	int i=1,j=1; 
	for(i=65;i<=c;i++)
	{
	  for(j=1;j<=c-i;j++)
	 {
	 	printf(" ");
	 }	
	 for(j=65;j<i;j++)
	 {
	 	printf("%c",j);
	 }
	 for(;j>=65;j--)
	 {
	 	printf("%c",j);
	 }
	 printf("\n");
	}
	return 0;
 } 

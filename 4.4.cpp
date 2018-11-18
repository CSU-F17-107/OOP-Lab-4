#include <stdio.h>
#include<string.h>
int main(void) {
	char str[50],c;
	int temp=0,i;
	printf("\nEnter the string : ");
	scanf("%s",str);
	printf("\nEnter the char to find : ");
	scanf(" %c",&c);
	for(i=0;i<strlen(str)&&str[i]!=c;++i);
	if(i<strlen(str))
		printf("\1   Charecter found,pos : %d",i);
	else
		printf("\ 0   Charecter not found");
	return 0;
}

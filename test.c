#include<stdio.h>
int main()
{
int month = 0;
char months[][12]={
	"January",
	"February",
	"March",
	"Arpil",
	"May",
	"June",
	"july",
	"August",
	"September",
	"October",
	"November",
	"decmber"};
	while(1){
		scanf("%d",&month);
		if(month>0&&month<13)
		printf("%s\n",months[month-1]);
		else
		printf("Dsmn!What the fuck you doing?No such month.\n");
	}
	return 0;
	}
	
	

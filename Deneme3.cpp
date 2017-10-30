#include<stdio.h>
#include<conio.h>

main()
{
	char word[]="";
	int adet=0;
	printf("enter a word please: ");
	scanf("%s",&word);
	
	printf("number of word: ");
	scanf("%d",&adet);
	
	for (int i = 0; i < adet; i++)
			printf("%s \n", word);
	
	
getch ();
}


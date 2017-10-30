#include<stdio.h>
#include<conio.h>

main()
{
	char kelime[]="";
	int adet=0;
	printf("bir kelime girin: ");
	scanf("%s",&kelime);
	
	printf("ekrana yazilma adeti: ");
	scanf("%d",&adet);
	
	for (int i = 0; i < adet; i++)
			printf("%s \n", kelime);
	
	
getch ();
}


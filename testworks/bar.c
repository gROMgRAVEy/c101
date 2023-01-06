#include <stdio.h>

void printBar(int ar[],int len) 
{	
	register int a = 0;//for this functions. most of the acululations is done to a so i made it a regiter var.
	printf(".");
        for (len = (len > 3) ? len - 2 : 0; len > 0; len--)//starts from last index and works down to first 
	{
        	a = ar[len+1] + ar[len] + ar[len-1];
                switch (a) 
		{
			case 0:
				printf(".");
				break;
			case 1:
				printf("_");
				break;
			case 2:
				printf("-");
				break;
			case 3:
				printf("^");
				break;
			default:
				printf("?");
		}
                a = 0;
	}
        printf(".\n");
	return;
}

int main() 
{ 
	int a[] = {1,0,0,1,0,1,1,1,1,1,0,1,0,0,0,0,1,1,1,1};
	printBar(a,20);
	return 0;
}

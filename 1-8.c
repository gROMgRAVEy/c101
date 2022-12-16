#include <stdio.h>

int main() 
{
	int c,i = 0;
	while ((c = getchar()) != EOF)//type ctrl d on the keyboard to produce EOL char
		if (c == ' ' || c == '\n' || c == '\t' )
			i++;
	printf("there are : %i blank spaces\n",i);
	//this is also so cool as you can just pipe in text.
	//echo "test this out" | ./a.out
	//there are : 3 blank spaces
	return 1;
}

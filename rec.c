#include <stdio.h>

//FILO or LIFO idk. 
//this is why i need to do study lisp and sicp, watching the lectures made recurestion seem like a breeze

//char[] dose not work, thanks java!
void printRec(char str[], int len)
{
	//first call str[len] = e
	//last call str[len] = a
	if(--len > 0)
		printRec(str,len); 

	printf("%c",str[len]);
	return;
}

int main() 
{
	printRec("abcde",5);
	printf("\n");
	return 0;
}

//i think this is baby example of recurestion, i just cant think of something to write out

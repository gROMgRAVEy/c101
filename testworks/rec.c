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

//here is example i can think of recurestion being really helpful.
//
//openAllDirs(dir mydir)
//{
//	dirList = listdir(mydir); //stores array dirs in dirlist.
//	for(i,x in(dirlist)))	  //if there is more dirs inside, start opening them
//		openAllDirs(x);
//	print(ls(mydir));	  //after opening all the dirs, print out the contens of the dir
//}
//sorry for this shitty half lua half c psudo code

#include <stdio.h>

//i could not find anything talking about bit fields making code quicker.
//unions still got me feeling weird ways

//also i just relized i put braces on a new line, and like all the resources show same line. thats bc in highschool teacher always did it like that in java

enum {REVERSE = 1, RECORD = 2, CAM = 4, OPTIMIZE = 8, INPUT = 16, PIPE = 32, ROOT = 64, NOLOG = 128, EXPLODE = 256 };

int main(int argc, char *argv[])
{
	unsigned char flags; //holds up to 8 flags as unsigned char, or depends on ur compile
	flags |= RECORD | OPTIMIZE;
	
	if ((flags & (CAM | OPTIMIZE)) == 0 )
		printf("winrar\n");
	
	if ((flags & (CAM | REVERSE | OPTIMIZE)) == 0 )
		printf("gamming time\n");
	printf("printing bits as number : %i\n",flags);
	
	flags |= REVERSE | RECORD | CAM | OPTIMIZE | INPUT | PIPE | ROOT | NOLOG; //| EXPLODE; 
										  //having to many flags wont break, it will just ignore the values it cant reach it seems?
	printf("all : %i\n",flags);//probly would never do this,
				   //this is also why i belive overflow will just be ignored on sighned
	
	//these have some weird propertys internal and can differ from compiler and hardware.
	//not array
	//dose not have adresses
	//use int for portablity
	struct {
		unsigned int is_Running : 1;
		unsigned int has_Network : 1;
		unsigned int can_Test : 1; //widthgs can be anysize.
	} moreflags;
	// the c book says something about using : 0 to force alignment to next word but i keep getting erros.


	//moreflags.has_Network = 2; dispite the warning saying it will truncate. i insted got overflow and set it back to 0
	moreflags.has_Network = 1;
	
	//if it just regualr if.

	printf("coolflags %i\n" , moreflags.has_Network);
	//bit wise hurty head a litle 
}


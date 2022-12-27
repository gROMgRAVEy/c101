#include <stdio.h>
static void myprint()
{
	printf("static func\n");
	return;
}
void callStatic()
{
	myprint();//this will call the print in this file only.
		  //there may be other files have a function named "myprint" but since this is static its only local to this file
	return;
}

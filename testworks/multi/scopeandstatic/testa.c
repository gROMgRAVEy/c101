#include <stdio.h>
void myprint()//other files that use "myprint()" will be calling this function. even if there is no header. 
	      //the compiler reserves the symbol "myprint" as this definition
{
	printf("global print\n");
}

//test(); declares a function
//test(){} declares and defines a function;
//you can have nothing inside and not give a return type and it should return a int and grabage int value.
test(){}

int main()
{
	myprint();
	callStatic(); //no header file is needed as long as compiled with object that has callStatic symbol- (basicly some other src file has this function)
		      
	int trash = test();
	printf("myTrash : %i\n",trash);
	return 0;
}

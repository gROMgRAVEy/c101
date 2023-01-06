#include <stdio.h>

struct cat
{
	char *nyame;
	int catlives;
}catter;


union utype{
	int myInt;
	double *pMyDouble;
	struct cat neko;
}u;

//unions can hold 1 data type at a time but you can enough space to hold up to the max size of a given type.
//tho you have to specify the types when u are using. u can also ignore warning and just do thing.
//
int main(int argc, char *argv[])
{
	u.myInt = 5;
	printf("int val : %i \n",u);

	double md = 5.2;
	u.pMyDouble = &md;
	printf("double pointer : %p\n",u);


	catter.catlives = 9;
	u.neko = catter;
	printf("cat lives : %i \n",((struct cat *)(&u))->catlives);
	//i got yelled at by some one for doing this ^
	//you can get a lot don with out using u.type
	//all members have the offest of 0 from the union structer.
	//so thats why i was able to do these wacky thing. i dont belive there to be a speed benifite
	
	
	//(int)u = 5; cant seem to type cast it like how i wanted
	u = (union utype)123; //utype? more like universal type
	printf("%i\n",u);
	//idc what my friend says. this is amazing

	u.myInt = 5;
	printf("normal use %i\n",u.myInt);

	u.neko = catter;
	printf("cat lives : %i\n", u.neko.catlives);

}

#include <stdio.h>
#include "func.h"

int main(int argc,char **argv)
{
	
	int num = givNum();//first val
	struct point myPoint;
	myPoint.x = givNum();//set to next val
	printf("p%i\n",myPoint.x);//2
	struct point a = givPoint();
	struct point b = givPoint();
	printf("point a %i point b %i\n",a.x,b.x); //should be same as other vals
	printf("new val = %i\n",myPoint.x = givNum());//next val 3
	printf("%i\n",givNum()); // print next numbeer

	return 0;
}

//p2
//point 1 2 point 2 2
//new val = 3
//4
//
//i really thought muti file was gonna be harder but its just
//.h is just shared forward declarations to help the programer code complition and keep files synced.

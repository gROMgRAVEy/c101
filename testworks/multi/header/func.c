#include "func.h"

int calls = 0;
int givNum()
{
	calls++;
	return calls;
}

struct point givPoint()
{
	struct point tmp;
	tmp.x = calls;
	tmp.y = calls;
	
	return tmp;
}

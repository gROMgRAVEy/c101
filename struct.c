#include <stdio.h>
#include <stdlib.h>

struct thing {
	char *name;
	int age;
	float speed;
};

struct thing newThing() //returns a whole structure. not just a pointer.
{
	struct thing tmp;
	tmp.age = 40;
	tmp.name = "boomer";
	tmp.speed = 2.7;
	return tmp;
}

struct thing modThing(struct thing clone,int num)
{
	clone.age += num;
	return clone;
}

struct thing *newThingPointer()
{
	//struct *thing tmp; 	this makes a struct in the stack when the function is called.
	//			this is bad as once the funciton exits. the only thing copy back is the pointer to dead memory
	//			the other function newThing() is fine bc it copys back a whole struct insted of just a pointer to soon to dead memory.
	

	struct thing *tmp = malloc(sizeof(struct thing)); //include <stdlib.h>
									   //to use malloc

	tmp->age = 14;		//i dont know how arrow oporater works in java, tho i used it in java
	tmp->name = "zooooomer";//but in c. it gets the element from a pointer struct. 
	tmp->speed = 2.7;	//derefrence the struct and then acssesing the element
	return tmp;
}

int main(int argc, char *argv[])
{
	struct thing thinga = newThing();
	printf("age thinga : %i\n",thinga.age);
	
	struct thing thingb = modThing(thinga, 10);
	printf("age thingb : %i\n",thingb.age);
	printf("age thinga : %i\n",thinga.age);//show that it copys the whole struct. value is not 50.


	struct thing *mything = newThingPointer();
	printf("point age : %i\n",mything->age);//for faster programs.u should malloc and return a pointer to the struct.
						//else it would be made on the stack and then will need to be cloned over to where it should have been malloced

	return 0;
}

#include <stdio.h>

int main() {
  // int *nums[10] , total = 10, x = y = 3; huh i really thought i read
  // something in ansi c book where u can declair and set varable like this `int x = y = 1;`
  
  // turns out what i read it was declared on one line then set on the next `int a , b; 
  // 									     a = b = 6;`
  int *pnums[10], total = 10, x, y = x = 3;
	
  	printf("setting array of pointers to the counter\n");
        for (;total >= 1;)		  	//*nums[total] = &total; wrong     also total-- would acsses outside of the array, decramenting first puts it in bounds
						//using * on a pointer will get the value at the pointer and not the pointer itself
		
		printf("\n%i\n", *(pnums[--total] = &total)); //lot of things going on here
							      //pointrs[num] = &num     this sets pointer at index num to the adress of num
							      // *(pointer[n....)	the *() is taking the pointer var and asking for the actual value
							      // 			with out the *(var) , it would be passing adress to printf 
							      // 	--i have ccls compiled for OBSD and the warning states. arguemnt type is int but got int *
	
	printf("setting index 8 and 1 to difrent pointers\n");
        pnums[8] = &x; //9th pointer in array = the adress of x
	pnums[1] = &y;
	
	printf("values of pointer array: ");
	for(int i = 9; i >= 0; i--)
		printf("%i ",*pnums[i]);
	
	y--; //sets y = to 2
	printf("\ndecramenting y and printing the alterd pointers in the array : %i %i\n",*pnums[1],*pnums[8]); //tho in the exprestion y = x = 3; they wont share adresses. 
						 //a pointer to the same adress is the closest thing to a java alias
	
	int a = 5, *b = &a;
	printf("\"declariring b as alias to a\"\nprinting b and a %i %i\n",*b,a);
        return 1;
}

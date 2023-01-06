//on openbsd this gives error by defult as it tried to use stdio by defualt. i think there is a compiler flag to say, dont use sdtio
//guess while talking about compile flags,i should note. int main can be changed as entrence. and there is actual some other house keeping function that gets ran before main()
//void printf(*char s,int num)
//{
//	return;
//}

int main()
{
	printf("powfunc %d \n",16);//pow(4,2));
	return 0;
}
//u can make programs with out header files as long as u include all the object files when compiling.
//i am not sure i been looking up but i belive <> includes the lib that is on system when compiling.
//and when its not included u get nothing of sys lib.
//something like clang -I /path/to/obj myfile.c ?
//
//really header files are useful for the dev to stay consistent.
//things like code completion and consistent struct declorations


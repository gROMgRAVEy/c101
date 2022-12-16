#include <stdio.h>

int points[3] = {'0','0','0'};
#define v1 ('0' + '0' + '0')
#define v2 ('1' + '0' + '0')
#define v3 ('1' + '1' + '0')
#define v4 ('1' + '1' + '1')


//use pipes or any other way to enter in 1's and 0's
//this will have a frquincey chart. char will be higher up the more 1's there is and lower down the more 0 there is.
//echo '110101010011010100000111110101110' | ./a.out
//.---.-.-...---.-.__.-^^^--.--^-
int main() 
{
        for(register int i = 0; (points[i] = getchar()) != EOF; i = (i + 1 < 3) ? i + 1 : 0) //it fit in a for loop >:D
		switch(points[0]+points[1]+points[+2])
		{
			//i wanted to do something like `case static '0' + '0' + '0';` so it only gets evlauated once. maybe the c compiler dose that already?
			//even then i think define would be better as it gets evaluated before exacutable is compiled? 
			case v1:
				printf("_");
				break;
			case v2:
				printf(".");
				break;
			case v3:
				printf("-");
				break;
			case v4:
				printf("^");
				break;
		}

        return 1;
}

//use pipes or any other way to enter in 1's and 0's
//this will have a frquincey chart. char will be higher up the more 1's there is and lower down the more 0 there is.
//echo '110101010011010100000111110101110' | ./a.out
//.---.-.-...---.-.__.-^^^--.--^-
#include <stdio.h>

int main() 
{
	int points[3] = {'0','0','0'};

        for(register int i = 0; (points[i] = getchar()) != EOF; i = (i + 1 < 3) ? i + 1 : 0) //it fit in a for loop >:D
		switch(points[0]+points[1]+points[+2])
		{
			//switch uses constance exprestions.
			//i thought this would not work since it uses arithmitic. but looking into it more, as long as there is no varable, these exprestions will be evaluated preprocessing
			//so i removed the defines switched it to this format
			case '0' + '0' + '0':
				printf("_");
				break;
			case '1' + '0' + '0':
				printf(".");
				break;
			case '1' + '1' + '0':
				printf("-");
				break;
			case '1' + '1' + '1':
				printf("^");
		}

        return 1;
}

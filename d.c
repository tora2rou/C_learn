#include <stdio.h>

int main(void){
	int a = 0;
	char b = '\0';
	puts("please enter num and char.");
	scanf("\n%d %c",&a,&b);
	printf("you entered num is %d.\nyou entered char is %c\n",a,b);

	return 0;
}

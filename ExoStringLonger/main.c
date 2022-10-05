#include <stdio.h>

void longer(char *chain, int *l){
	char *p;
	p = chain;
	printf("inside %s",chain);
	while(*p != '\0'){
		printf("%c \n", *p);
		*l = *l + 1;
		p++;
		}
	
}


int main(int argc, char **argv)
{
	int l = 0;
	char * test  = "Test";
	printf("%s",test);
	longer(test, &l);
	printf("%d",l);
}

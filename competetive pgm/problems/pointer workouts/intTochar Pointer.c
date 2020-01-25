#include<stdio.h>
int main(){
	int a = 10;
	int *p = &a;
	char *p0 =	(char *) p;
	printf(" (%c) [%c] {%c} %c",p0,p0+1,p0+2,p0+3);
	return 0;
}

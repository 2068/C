#include<stdio.h>
#include<string.h>
int main()
{
	char s[] = "hello";
	char *p = strchr(s, 'l');
	char *t = (char*)malloc(strlen(p) + 1);
	strcpy(t, p);
	printf("%s\n", t);
	free(t);
	return 0;
}
int lhs;
int rhs;
int result;
void add()
{
	result = lhs + rhs;
}
#include <stdio.h>
int main()
{
	lhs = 1;
	rhs = 2;
	add();
	printf("%d\n", result);
}

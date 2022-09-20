#include "Test.h"

int Test::a;
void sub();
int main()
{
	Test x, y;
	x.a = 100;//無駄
	x.b = 200;
	y.a = 300;//上書き
	y.b = 400;
}

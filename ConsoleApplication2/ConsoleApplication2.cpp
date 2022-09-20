#include <stdio.h>
void f()
{
	char a[1024];//自動変数
	if (scanf_s("%s", a, (int)sizeof a) == 0) {
		printf("入力された文字列 = %s\n", a);
	}
}
int main()
{
	f();
}

#include <stdio.h>
int main()
{
	char s1[] = "ABCDEFG";//データ転送処理
	static const char s2[] = "ABCDEFG";//データ定義
	static const char s3[] = "TEST";
	puts(s3);
	puts(s3);
}

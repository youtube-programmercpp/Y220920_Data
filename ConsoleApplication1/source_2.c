//source_2.c

int f()
{
	int x = 0;//変数名「x」は source_2.c の中に封じ込められる
	++x;
	return x;
}

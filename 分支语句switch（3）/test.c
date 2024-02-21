//break语句的实际效果是把语句列表分成不同的部分。
//最好在最后一个case语句后面添加一条break语句，以便以后的修改

//default子句（顺序未知无要求，正常习惯放最最后）
#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		n++;
	case 2:
		m++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;//该break用于跳出嵌套，程序仍然会继续运行
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}
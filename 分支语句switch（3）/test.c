//break����ʵ��Ч���ǰ�����б�ֳɲ�ͬ�Ĳ��֡�
//��������һ��case���������һ��break��䣬�Ա��Ժ���޸�

//default�Ӿ䣨˳��δ֪��Ҫ������ϰ�߷������
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
		{//switch����Ƕ��ʹ��
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;//��break��������Ƕ�ף�������Ȼ���������
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
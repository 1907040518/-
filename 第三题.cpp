//#include<stdio.h>
//int main()
//{
//	int a,b,c,d,e,f,g,h;
//	double x;
//	printf("������һ����λ������:");
//	scanf("%lf", &x);
//	h=x - (int)x;  //�ж�a�Ƿ�Ϊ����
//	if (h == 0)
//		printf("error");
//	else {
//		int a = (int)x;
//		if (a < 0)
//			printf("error");//�ж�a�Ƿ�Ϊ����
//
//		b = a % 100;
//		if (b == 0)
//		{
//			a = a / 100;
//			printf("%d", a);
//		}
//		c = a % 10;
//		if (c == 0)
//		{
//			a = a / 10;
//			printf("%d", a);
//		}
//		d = a % 10;  //dΪ��λ�ϵ���
//		e = (a - d) / 10;  //eΪ��λ��ʮλ
//		f = e % 10;  //fΪʮλ�ϵ���
//		g = (e - f) / 10;  //gΪ��λ�ϵ���
//		printf("%d%d%d", d, f, g);
//	}
//	return 0;
//}
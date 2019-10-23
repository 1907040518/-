//#include<stdio.h>
//int main()
//{
//	int a,b,c,d,e,f,g,h;
//	double x;
//	printf("请输入一个三位正整数:");
//	scanf("%lf", &x);
//	h=x - (int)x;  //判断a是否为整数
//	if (h == 0)
//		printf("error");
//	else {
//		int a = (int)x;
//		if (a < 0)
//			printf("error");//判断a是否为负数
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
//		d = a % 10;  //d为个位上的数
//		e = (a - d) / 10;  //e为百位和十位
//		f = e % 10;  //f为十位上的数
//		g = (e - f) / 10;  //g为百位上的数
//		printf("%d%d%d", d, f, g);
//	}
//	return 0;
//}
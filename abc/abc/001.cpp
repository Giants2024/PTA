#define _CRT_SECURE_NO_WARNINGS 1
/*#include<stdio.h>�á�*�����������
int main()                               //��ӡ���ݲ���Ϊ�գ����һ��Ҳ����ֻ��ӡ\n
{
	printf("\n");
	printf("       *\n");
	printf("       *\n");
	printf("       *\n");
	printf("   *   *   *\n");
	printf("   *********\n");
	printf("   *   *   *\n");
	printf("   *   *   *\n");
	printf("   *   *   *\n");
	printf("   *********\n");
	printf("   *   *   *\n");
	printf("       *\n");
	printf("       *\n");
	printf("       *\n");
	printf("       *\n");
	return 0;
}
/*/

/**-------------------------------------//A����B
#include<stdio.h>
int main()
{
	int A, B, C;
	scanf("%d",& A);
	scanf("%d", &B);
	C = A * B;
	printf("%d", C);
	return 0;
 }
*/


/*-------------------------------------//����������λ����֮��
#include<stdio.h>
int main()
{
	unsigned int a=0,b=0 ;
	scanf("%3u",&a);
	b = a % 10 + a / 10 % 10 + a / 100;
	printf("%u", b);
	return 0;
}
/*/

/*-------------------------------------//�ǲ���̫����
#include<stdio.h>
int main()
{
	int H ;
	float w;
	scanf("%d", &H);
	w = (H - 100) * 0.9 * 2;
	printf("%.1f", w);
	return 0;
}
/*/

/*-------------------------------------//������������
#include<stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	return 0;
}
/*/

/*-------------------------------------//����������������ľ���
#include<stdio.h>                      //��scanf����ȡַ����ע���ӡ������
int main()
{
	int t ;
	double height;
	scanf("%d",&t);
	height = 0.5 * 9.8 * t * t;         //��pow�����Ľ�
	printf("height = %.2lf", height);
	return 0;
}
/*/


/*-------------------------------------//����������������ľ���
#include<stdio.h>                      //��scanf����ȡַ����ע���ӡ������
#include<math.h>
int main()
{
	int t ,t2;
	double height;
	scanf("%d",&t);
	t2 = pow(t, 2);
	height = 0.5 * 9.8 * t2;         //
	printf("height = %.2lf", height);
	return 0;
}
/*/

/*-------------------------------------//������Ӱ���
#include<stdio.h>
int main()
{
	int x, y, s;
	scanf("%d %d", &x, &y);
	s = 5000 - (100-x)*y - 0.5 * x * y - 0.5 *(100-y) * (100 - x);
	if(x > y)
	printf("%d",s);
	return 0;
}
/*/


/*-------------------------------------//ƻ��װ��
#include<stdio.h>
int main()
{
	int N, n;
	scanf("%d",&N);
	if (N % 3 == 0)
	n = N / 3;
	else
		n = N / 3 + 1;
	printf("%d\n",n);
	return 0;
}
/*/

/*-------------------------------------//7-9 ���׻���Ӣ��Ӣ��
#include<stdio.h>                       //floor������ceil������round����Ӧ��
#include<math.h>
int main()
{
	int cm, foot, inch;
	double F;
	scanf("%d", &cm);
	F =0.01 * cm / 0.3048;
	foot = floor(F);
	inch = (0.01 * cm / 0.3048 - foot) * 12;
	printf("%d %d", foot, inch);
	return 0;
}
/*/

/*-------------------------------------//�������λ��
#include<stdio.h>                      //��ѧ˼ά
int main()
{
	int a,b,c,d ;
	scanf("%3d", &a);
	b = a % 10;
	c = a / 10 % 10;
	d = a / 100;
	if (b != 0)
	{
		printf("%d", b);
		printf("%d", c);
	}
	else if (c != 0)
		printf("%d", c);
		printf("%d", d);
	return 0;
}
/*/

/*-------------------------------------//	��������ֵ
#include<stdio.h>
int main()
{
	int a, b, c, d, Sum;
	double  Average;
	scanf("%d %d %d %d", &a, &b,&c,&d);
	Sum = a + b + c + d;
	Average = Sum / 4.0;
	printf("Sum = %d; Average = %.1f", Sum, Average);
	return 0;
}
/*/


/*-------------------------------------//���ڸ�ʽ��
#include<stdio.h>                     //ѧ��������03--%02d
int main()
{
	int a, b, c;
	scanf("%2d-%2d-%4d", &a, &b, &c);
	printf("%d-%02d-%02d", c, a,b );
	return 0;
}
/*/

/*-------------------------------------//	����������ݸ�ʽ������
#include<stdio.h>
int main()
{
	int a;
	float b, c;
	char d;
	scanf("%f %d %c %f", &b, &a, &d, &c);
	printf("%c %d %.2f %.2f", d, a, b, c);
	return 0;
}
/*/

/*-------------------------------------//	Ȼ���Ǽ���
#include<stdio.h>                       //��Ҫ̫��Ͷ��ȡ�ɣ���ʱ��õ�·�����������
int main()                              //�Ƚ�Сʱ��Ϊ���ӣ���תСʱ
{
	int a, b ,c,d ;
	scanf("%d %d", &a,&b);
	c = (a % 100 + b)  + a / 100 * 60;
	d = c / 60 * 100 + c % 60;
	if(d<1000)
	printf("%03d", d);
	else
	printf("%d", d);

}
/*/

/*-------------------------------------//��������Ϣ
#include<stdio.h>                      //ע���ӡ��ʽ
#include<math.h>
int main()
{
	double m, y, r, i;
	scanf("%lf %lf %lf", &m, &y, &r);
	i = m *  pow(1+r, y) - m;
	printf("interest = %.2lf", i);
	return 0;
}
/*/

/*-------------------------------------//���㲢���������ֵ
#include<stdio.h>
int main()
{
	double a, b, c;
	scanf("%lf %lf", &a, &b);
	c = 1 / (1 / a + 1 / b);
	printf("%.2f", c);
	return 0;
}
/*/

/*-------------------------------------//ÿ�����һ���
#include<math.h>                         //ѧ��ٷֺŴ�ӡ%%
#include<stdio.h>
int main()
{
	int n;
	double a, b ,c ;
	scanf("%d", &n);
	a = pow(1.01, n);
	b = pow(0.99, n);
	c = a * 100 / b;
	printf("%.2lf %.2lf %.1lf%%", a, b,c );
	return 0;
}
/*/

/*-------------------------------------//16����ת10����
#include<stdio.h>
int main()
{
	int a , b;
	scanf("%d",&a);
	b = a / 16 * 10 + a % 16;
	printf("%d", b);
	return 0;
}
/*/

/*-------------------------------------//����ֶκ���
#include<stdio.h>                       //�ύ��ʱ���ٳ���2�飻
#include<math.h>
int main()
{
	double a,b, c, d;
	scanf("%lf", &a);
	if (a >= 0)
		b = sqrt(a);
	else
		b = pow(a + 1, 2) + 2 * a + 1 / a;
	printf("f(%.2f) = %.2f", a, b);
	return 0;
}
/*/

/*-------------------------------------//�����������ɹ��
#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d",&a);
	b = a % 5;
	if (b <= 3 && b >= 1)
	printf("Fishing in day %d", a);
	else
		printf("Drying in day %d", a);

	return 0;
}
/*/

/*-------------------------------------// ���������ʱ��
#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%4d %4d", &a,&b);
	a = a/100*60+a%100;
	b = b / 100 * 60 + b % 100;
	c = (b - a) / 60;
	d = (b - a) % 60;
	printf("%02d:%02d", c,d);
	return 0;
}
/*/

/*-------------------------------------//�������ļ򵥼�����
#include<stdio.h>                      //switchӦ��,breakӦ�ã�������Ӧ��
#include<math.h>
#include<stdlib.h>
int main()
{
	char f;
	int a, b, c, d;
	scanf("%d %c %d",&a,&f,&b );
	switch (f)
	{
	case '+':
		c = a + b;
		printf("%d", c);
		break;
		case'-':
			c = a - b;
			printf("%d", c);
			break;
		case'*':
		   c = a * b;
			printf("%d", c);
			break;
		case'/':
			c = a / b;
			printf("%d", c);
			break;
		case'%':
				c = a % b;
				printf("%d", c);
				break;

		default:
				printf("ERROR");

	}
	return 0;
}

/*/

/*-------------------------------------//�ж�������ַ�����������
#include<stdio.h>                       //ע���ӡ��ʽ
#include<math.h>
#include<stdlib.h>
int main()
{
	char a, b, c, d;
	scanf("%c",&a);
	if (a >= 48 && a <= 57)
	printf("This is a digit.");
	else if (a >= 65 && a <= 90)
	printf("This is a capital letter.");
	else if (a >= 97 && a <= 122)
	printf("This is a small letter.");
	else
	printf("Other character.");
	return 0;
}

/*/

/*-------------------------------------//
#include<stdio.h>                       //��������ʼ���Ǹ���ϰ��;��ѧ���й������ļ���
#include<math.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d = 0;
	scanf("%d-%d-%d",&a,&b,&c);
	int A[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int B[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	if ((a % 400 == 0 )||( a % 4 == 0 && a % 100 != 0))
	{
		while(b<=12)
		{
			d += B[b];
			b ++;

		}
		d = d - c+1;
	}
	else
	{
		while (b <= 12)
		{
			d += A[b];
			b++;

		}
		d = d - c+1;
	}
	printf("����%d�쵽����",d);
	return 0;
}

/*/

/*-------------------------------------//�����˷�
#include<stdio.h>                       //�����ַ����������
#include<math.h>
#include<stdlib.h>
int main()
{
	double a, b, c, d;
	scanf("%lf %lf %lf",&a,&b,&c);
	d = a * b * c;
	if (c < 250)
		d = d;
	else if(c<500)
		d *= (1 - 0.02);
	else if (c <1000 )
		d *= (1 - 0.05);
	else if (c< 2000)
		d *= (1 - 0.08);
	else if (c< 3000)
		d *= (1 - 0.1);
	else
		d *= (1 - 0.15);

	printf("freight=%.2f",d);
	return 0;
}

/*/

/*-------------------------------------//˭�ܽ�ͼ���
#include<stdio.h>                        //��������
#include<math.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if (c < a && d < a)
		printf("%d-N %d-N\nzhang da zai lai ba",c,d);
	if (c >=b && d < a)
		printf("%d-Y %d-Y\nqing 1 zhao gu hao 2",c,d);
	if (d >= b && c < a)
		printf("%d-Y %d-Y\nqing 2 zhao gu hao 1",c,d);
	if (d >= a &&d<b&& c < a)
		printf("%d-N %d-Y\n2: huan ying ru guan",c,d);
	if (c >= a &&c<b&& d < a)
		printf("%d-Y %d-N\n1: huan ying ru guan",c,d);
	if (d >=a  && c >=a)
		printf("%d-Y %d-Y\nhuan ying ru guan",c,d);

	return 0;
}

/*/

/*-------------------------------------//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d;
	scanf("%d",&a);
	printf();
	return 0;
}

/*/

/*-------------------------------------//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d;
	scanf("%d",&a);
	printf();
	return 0;
}

/*/


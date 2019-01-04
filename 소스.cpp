#include<stdio.h>//단순 2진 암호코드
char arr[501][2005];
int code[8];
char tmp[50];//이진수로 변환한거 담을 배열
struct password
{
	int a, b, c, d;//2진코드 크기 비율
}pw,num[10];

void tobinary(int n, int m)//16진수를 이진수로 바꾸기
{
	for (int i = 0;i<)
}
int compare(int a)//이진수가 무슨 숫자 표현하는지 보는것
{
	for (int i = 0; i < 10; i++)
	{
		if (pw.a%num[i].a == 0 && pw.b%num[i].b == 0 && pw.c%num[i].c == 0 && pw.d%num[i].d == 0)
			return i;
	}
}
int main(void)
{
	num[0].a = 3;	num[0].b = 2;	num[0].c = 1;	num[0].d = 1;
	num[1].a = 2;	num[1].b = 2;	num[1].c = 2;	num[1].d = 1;
	num[2].a = 2;	num[2].b = 1;	num[2].c = 2;	num[2].d = 2;
	num[3].a = 1;	num[3].b = 4;	num[3].c = 1;	num[3].d = 1;
	num[4].a = 1;	num[4].b = 1;	num[4].c = 3;	num[4].d = 2;
	num[5].a = 1;	num[5].b = 2;	num[5].c = 3;	num[5].d = 1;
	num[6].a = 1;	num[6].b = 1;	num[6].c = 1;	num[6].d = 4;
	num[7].a = 1;	num[7].b = 3;	num[7].c = 1;	num[7].d = 2;
	num[8].a = 1;	num[8].b = 2;	num[8].c = 1;	num[8].d = 3;
	num[9].a = 3;	num[9].b = 1;	num[9].c = 1;	num[9].d = 2;


	int T = 0;
	scanf("%d", &T);
	for (int testcase = 1; testcase <= T; testcase++)
	{
		int N = 0;	int M;//N:세로,M:가로
		int n = 0;	int m = 0;
		int ans = 0;	int sum = 0;
		scanf("%d %d", &N, &M);
		for (int i = 0; i < N; i++)
			scanf("%s", arr[i]);

		for (int i = 0; i < N; i++)
		{
			for (int j = M - 1; j >= 0; j--)
			{
				if (arr[i][j] == '1')//코드가 끝나는 부분
				{
					n = i;	m = j;
					break;
				}
			}
			if (m != 0)//코드가 이 라인에 존재하는경우
			{
				int index = 0;
				for (int x = m - 55; x <= m; x += 7)
				{
					int temp = cal(n, x);
					code[index++] = compare(temp);
				}
				sum = 3 * (code[0] + code[2] + code[4] + code[6]) + code[1] + code[3] + code[5] + code[7];
				break;
			}
		}
		if (sum % 10 == 0)
		{
			ans = code[0] + code[1] + code[2] + code[3] + code[4] + code[5] + code[6] + code[7];
			printf("#%d %d\n", testcase, ans);
		}

		else
			printf("#%d 0\n", testcase);
	}
	return 0;
}
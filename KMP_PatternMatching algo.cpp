#include<bits/stdc++.h>
using namespace std;

void KMP(const char* X, const char* Y, int m, int n)
{

	if (*Y == '\0' || n == 0)
		printf("Pattern occurs with shift 0");


	if (*X == '\0' || n > m)
		printf("Pattern not found");
	int next[n + 1];

	for (int i = 0; i < n + 1; i++)
		next[i] = 0;

	for (int i = 1; i < n; i++)
	{
		int j = next[i + 1];

		while (j > 0 && Y[j] != Y[i])
			j = next[j];

		if (j > 0 || Y[j] == Y[i])
			next[i + 1] = j + 1;
	}

	for (int i = 0, j = 0; i < m; i++)
	{
		if (*(X + i) == *(Y + j))
		{
			if (++j == n)
				printf("Pattern occurs with shift %d\n", i - j + 1);
		}
		else if (j > 0) {
			j = next[j];
			i--;
		}
	}
}

int main(void)
{
	char text[1000];
	char pattern[1000];

	cout<<"Enter text string : " ;
    gets(text);
    cout<<"Enter the pattern you want to match : ";
//    gets(x);
    gets(pattern);
//    gets(x);

	int n = strlen(text);
	int m = strlen(pattern);

	KMP(text, pattern, n, m);

	return 0;
}

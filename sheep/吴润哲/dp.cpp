#include <bits/stdc++.h>
#define N 55
using namespace std;

typedef long double ld;

double p, q;
ld f1[N<<1][N<<1], f2[N<<1][N<<1], g[N<<1][N<<1];

void Gauss(int n)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = i+1; j <= n; j++)
		{
			assert(g[i][i] > 0);
			ld x = g[j][i] / g[i][i];
			for(int k = i; k <= n+1; k++)
				g[j][k] -= x * g[i][k];
		}
	}
	for(int i = 1; i <= n; i++)
		for(int j = n+1; j >= i; j--)
		{
			assert(g[i][i] > 0);
			g[i][j] /= g[i][i];
		}
	for(int i = n; i >= 1; i--)
	{
		ld x = g[i][n+1];
		for(int j = i-1; j; j--)
		{
			g[j][n+1] -= g[j][i]*x;
			g[j][i] = 0;
		}
	}
}

int main()
{
	scanf("%lf%lf",&p,&q);

	f1[1][0] = f2[1][0] = 1;

	for(int d = 2; d < N; d++)
	{
		f1[d][0] = f2[d][0] = d;

		for(int a = 1; a < d; a++)
		{
			int b = d - a;

			f1[a][b] = max(f1[a][b], (long double)a);
			for(int c = 1; c < b; c++)
			{
				ld tmp = 1.0 * a * p / (a * p + c * q) * f2[a+1][c-1] + 1.0 * c * q / (a * p + c * q) * f2[a-1][c+1];
				if(tmp > f1[a][b])
				{
					f1[a][b] = tmp;
				}
			}
		}

		for(int a = 1; a < d; a++)
		{
			int b = d - a;
			f2[a][b] = f1[a][b];
		}

		for(int l = 0; l < d; l++)
			for(int r = l+2; r <= d; r++)
			{
				int n = r - l + 1;
				for(int i = 0; i <= n+1; i++)
					for(int j = 0; j <= n+1; j++)
						g[i][j] = 0;
				g[1][1] = 1;
				g[n][n] = 1; g[n][n+1] = 1;

				for(int a = l+1; a < r; a++)
				{
					int b = d - a;
					g[a-l+1][a-l+1] = 1;
					g[a-l+1][a+1-l+1] = -1.0 * a * p / (a * p + b * q);
					g[a-l+1][a-1-l+1] = -1.0 * b * q / (a * p + b * q);
				}
				Gauss(n);
				for(int a = l+1; a < r; a++)
				{
					int b = d - a;
					ld pro = g[a-l+1][n+1];
					f2[a][b] = max(f2[a][b], pro * f1[r][d-r] + (1-pro) * f1[l][d-l]);
				}

			}

	}

	printf("%lf\n", (double)f2[21][15]);

	// for(int i = 1; i <= 30; i++, puts(""))
	// 	for(int j = 1; j <= 30; j++)
	// 	{
	// 		if(i*p-j*q <= 0) 
	// 			printf("(%lf)\t", (double)(f2[i][j] - f2[i][j-1]));
	// 		else
	// 			printf("%lf\t", (double)(f2[i][j] - f2[i][j-1]));
	// 	}

	// puts("");

	// for(int i = 1; i <= 30; i++, puts(""))
	// 	for(int j = 1; j <= 30; j++)
	// 		printf("%lf\t", i*p-j*q);

}
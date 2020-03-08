#include <bits/stdc++.h>
using namespace std;
double p, q; int a, b;

default_random_engine dre(time(NULL));
uniform_real_distribution<double> dis2(0.0, 1.0);

int simul()
{
	int cur_a = a, cur_b = b;
	while(cur_a && cur_b)
	{
		while(cur_a * p <= cur_b * q) cur_b --;

		if(!cur_a || !cur_b) break;

		// uniform_int_distribution<int> dis1(0, cur_a + cur_b - 1);
		// int choose = dis1(dre) < cur_a ? 1 : 0;
		// double pro = dis2(dre);

		// if(choose == 1) // black
		// {
		// 	if(pro < p)
		// 		cur_a++, cur_b--;
		// }
		// else
		// {
		// 	if(pro < q)
		// 		cur_a--, cur_b++;
		// }

		if(dis2(dre) < cur_a * p / (cur_a * p + cur_b * q))
			cur_a++, cur_b--;
		else
			cur_a--, cur_b++;

	}
	return cur_a ? cur_a : 0;
}
int main()
{
	// scanf("%lf%lf%d%d",&p,&q,&a,&b);

	// p = 1, q = 1; a = 21, b = 15;
	p = 0.5, q = 0.8; a = 21, b = 15;

	printf("(%lf)\n", a*p-b*q);

	int T = 20000000; long long ans = 0;
	for(int i = 1; i <= T; i++)
		ans += simul();
	printf("%lf\n", 1.0 * ans / T);

}
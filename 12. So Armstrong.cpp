#include<stdio.h>
#include<math.h>
#define ll long long 
int main()
{
	int t;
	scanf("%d",&t);
	for(int i = 0; i < t; i++)
	{
		ll n;
		scanf("%lld", &n);
		ll t = n;
		int cnt = 0;
		int z[cnt];
		while(n)
		{
			z[cnt++] = n % 10;
			n /= 10;
		}
		ll sum = 0;
		for(int i = 0; i < cnt; i++)
		{
			sum += pow(z[i], cnt);
		}
		if(sum == t) printf("So %d la so Armstrong", t);
		else printf("So %d khong phai so Armstrong", t);
		printf("\n");
	}
	  
 } 

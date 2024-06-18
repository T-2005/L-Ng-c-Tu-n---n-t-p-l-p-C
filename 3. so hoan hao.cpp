#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
	
		int sum = 1;
		for(int j = 2; j <= sqrt(n); j++)
		{
			if(n % j == 0) sum = sum + j + n / j;
			if(j * j == n) sum -= n;
		 }	  
	 if(sum == n) printf("So %d la so hoan hao", n);
	 else printf("So %d khong phai so hoan hao", n);
	 printf("\n");
	}
}

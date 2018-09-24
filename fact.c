#include <stdio.h>

int main()
{
	int n, a, z=0, k;
	scanf("%i", &n);
	for(a=1; a<=n; a++) {
		k=a;
		while((a%5)==0){
			z++;
			a = a/5;
		}
		a=k; 
	}
	printf("%i\n", z);
}

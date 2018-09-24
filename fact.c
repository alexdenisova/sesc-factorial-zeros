#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);
    int r = n%10;
    if(r<5) {
        printf("%i\n", (n-r)/5);
    }else{
        printf("%i\n", (n-(r-5))/5);
    }
}
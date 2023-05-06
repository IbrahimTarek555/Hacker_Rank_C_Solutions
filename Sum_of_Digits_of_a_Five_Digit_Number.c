#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    
    int o;
    int sum = 0;
    
    while(n != 0)
    {
        o = n % 10;
        sum = sum + o;
        n = n / 10;
    }
    
    printf("%d\n", sum);
    
    return 0;
}

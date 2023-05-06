#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int FirstIntNumber;
    int SecondIntNumber;
    
    float FirstFloatNumber;
    float SecondFloatNumber;
    
    scanf("%d %d", &FirstIntNumber, &SecondIntNumber);
    scanf("%f %f", &FirstFloatNumber, &SecondFloatNumber);
    
    printf("%d\t%d\n", (FirstIntNumber + SecondIntNumber), (FirstIntNumber - SecondIntNumber));
    
    printf("%0.1f\t%0.1f\n", (FirstFloatNumber + SecondFloatNumber), (FirstFloatNumber - SecondFloatNumber));
    
    return 0;
}

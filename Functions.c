#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int Biggest;
    
    if(a >= b)
    {
        if(a >= c)
        {
            if(a >= d)
            {
                Biggest = a;
            }
            else
            {
                Biggest = d;
            }
        }
        else
        {
            if(c >= d)
            {
                Biggest = c;
            }
            else
            {
                Biggest = d;
            }
        }
    }
    else
    {
        if(b > c)
        {
            if(b > d)
            {
                Biggest = b;
            }
            else
            {
                Biggest = d;
            }
        }
        else
        {
            if(c > d)
            {
                Biggest = c;
            }
            else
            {
                Biggest = d;
            }
        }
    }
    
    return Biggest;
}

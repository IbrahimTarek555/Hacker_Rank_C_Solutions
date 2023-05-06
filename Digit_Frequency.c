#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *s = (char *) malloc(sizeof(char) * 1024);
    scanf("%s", s);
    
    
    int arr[10] = {0};
    
    int x = 0;
        
      
    while(s[x] != '\0')
    {
        if(s[x] >= '0' && s[x] <= '9')
        {
            switch(s[x])
            {
                case 48: arr[0]++; break;
                case 49: arr[1]++; break;
                case 50: arr[2]++; break;
                case 51: arr[3]++; break;
                case 52: arr[4]++; break;
                case 53: arr[5]++; break;
                case 54: arr[6]++; break;
                case 55: arr[7]++; break;
                case 56: arr[8]++; break;
                case 57: arr[9]++; break;
            }
        }
        x++;
    }
    
    for(int y = 0; y < 10; y++)
    {
        printf("%d ", arr[y]);
    }
    return 0;
}

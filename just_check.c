#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("%d",a);
            }      
        } 
        else
    {
        printf("%d",d); 
    }
    }
    else
    if(b>c)
    {
        if (b>d)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",d);
        }
    }
    else
    printf("%d",c);

}
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is greatest");
        
    }
    if(b>c)
    {
        printf("b is greatest");
        
    }
    else
    {
        printf("c is greatest");
        
    }

    return 0;
}
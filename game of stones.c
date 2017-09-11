# Game-theory2
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

       
    int T,n;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&n);
    if(n==1) printf("Second\n");
        else if(n%7<2) printf("Second\n");
        else printf("First\n");
    }
        return 0;
}

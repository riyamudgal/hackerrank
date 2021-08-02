/*
Sample Input
4
5

Sample Output
9
1
Explanation
a'=4+5
b'=|4-5|
*/

#include <stdio.h>
#include <stdlib.h> 

void update(int *a,int *b) {
    int c=*a;
    *a = *a+*b;
    *b= (abs(c-*b));
}

int main() {
    int a,b;
    int *pa=&a, *pb=&b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

#include<stdio.h>

int main(){
    int n1 = 5;
    printf("%d\n", int(n1=sizeof(n1)));
    float n2 = 5.0;
    printf("%d\n", int(n2=sizeof(n2)));
    double n3 = 5.0;
    printf("%d\n", int(n3=sizeof(n3)));
    char n4 = 'C';
    printf("%d\n", int(n4=sizeof(n4)));
    printf("%d %d\n", 72, 072);
    printf("%d", 10*8/5);
    return 0;
}

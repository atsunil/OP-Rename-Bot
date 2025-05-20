  +#include <stdio.h>

int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int mul(int x,int y){
    return x*y;
}
int dive(int x,int y){
    return x \ y;
}
int main() {
    int x,y,z,a,b,d;
    printf("enter the two num:");
    scanf("%d%d",&a,&b);
    x=add(a,b);
    y=sub(a,b);
    z=mul(a,b);
    d=dive(a,b);
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    printf("%d\n",d);
    return 0;
}
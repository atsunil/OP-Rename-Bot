#include <stdio.h>

void greet (char name[100] , char role[100]){
    printf("Hi %s Welcome to our paal vadi company\n",name);
    printf("as our %s",role);
}
int main() {
    char name[100],role[100],x;
    printf("enter the name:");
    scanf("%s", &name);
    printf("enter the role:");
    scanf("%s",&role);
    greet(name,role);
    return 0;
}
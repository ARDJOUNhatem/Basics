#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
    // this code  sapping of two integers input by the user.
    // in the code we use a add and subtraction ex: a=5,b=6-> 5+6=11->11-6=5->b=5->11-5->6->a=5.
    // so this how the values swapping of them.
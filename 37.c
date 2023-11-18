/*Fibonacci Series in C
Fibonacci Series in C: In case of fibonacci series, next number is the sum of previous two numbers for example 0, 1, 1, 2, 3, 5, 8, 13, 21 etc. The first two numbers of fibonacci series are 0 and 1.
The sequence of Fibonacci numbers can be defined as:
Fn = Fn-1 + Fn-2
the Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones. Numbers that are part of the Fibonacci sequence are known as Fibonacci numbers, commonly denoted Fn 
*/
#include <stdio.h>

int main() {
    int n;
    printf("enter n value:");
    scanf("%d",&n);
    
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    
    for(int i=2;i<n;i++) {
        fib[i]=fib[i-1] + fib[i-2];
        printf("%d\n",fib[i]);
    }
    
    printf("\n");
    
    return 0;
}
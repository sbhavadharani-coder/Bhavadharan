#include <stdio.h>
int main() {
    char op;
    double n1, n2;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);
    switch(op) {
        case '+': printf("%.1lf + %.1lf = %.1lf", n1, n2, n1+n2); break;
        case '-': printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2); break;
        case '*': printf("%.1lf * %.1lf = %.1lf", n1, n2, n1*n2); break;
        case '/': 
            if(n2!=0) printf("%.1lf / %.1lf = %.1lf", n1, n2, n1/n2);
            else printf("Error! Division by zero"); 
            break;
        default: printf("Invalid operator");
    }
    return 0;
}

// LAB 7, Q.NO.5. :-
// This program passes a structure Complex (real, imaginary) to a function that
// adds two complex numbers and returns the result as a structure.
struct Complex{
    float real;
    float imag;
};

struct Complex addComplex(struct Complex x, struct Complex y){
    struct Complex result;
    result.real = x.real + y.real;
    result.imag = x.imag + y.imag;
    return result;
}

#include<stdio.h>
int main()
{
    struct Complex a,b, sum;
    printf("Enter first Complex Number (real imag): ");
    scanf("%f %f", &a.real, &a.imag);
    printf("Enter second Complex Number (real imag): ");
    scanf("%f %f", &b.real, &b.imag);
    sum = addComplex(a,b);

    printf("Sum = %.2f + %.2fi\n" , sum.real, sum.imag);
    return 0;
}
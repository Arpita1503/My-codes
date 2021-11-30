//38.WAP  to add, subtract and multiply two complex numbers using structures to function.

#include<iostream>
using namespace std;

typedef struct complex{
    float real;
    float image;
}ep;

ep sum(complex num1, complex num2){
    complex temp;
    temp.real = num1.real + num2.real;
    temp.image = num1.image + num2.image;
    return(temp);
}

ep subs(complex num1, complex num2){
    complex temp;
    temp.real = num1.real - num2.real;
    temp.image = num1.image - num2.image;
    return(temp);
}

ep multiply(complex num1, complex num2){
    complex temp;
    temp.real = num1.real * num2.real;
    temp.image = num1.image * num2.image;
    return(temp);
}

int main(){
    ep num1, num2, add, minus, mul;
    cout<<"Enter real part of first number "<<endl;
    cout<<"Enter image part of first number "<<endl;
    cin>>num1.real>>num1.image;

    cout<<"Enter real part of second number "<<endl;
    cout<<"Enter image part of second number "<<endl;
    cin>>num2.real>>num2.image;

    add = sum(num1, num2);
    cout<<"Sum is "<<add.real<<" + "<<add.image<<" i "<<endl;

    minus = subs(num1, num2);
    cout<<"Subtraction is "<<minus.real<<" + "<<minus.image<<" i "<<endl;

    mul = multiply(num1, num2);
    cout<<"Multiply is "<<mul.real<<" + "<<mul.image<<" i "<<endl;
    
    return 0;
}
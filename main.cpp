#include <iostream>
#include "header.h"

int main() {

    Fraction f1(6,3); // 6/3
std::cout << "Fraction 1 set: "; f1.get_fraction();
    Fraction f2(4,3); // 4/3
std::cout << "Fraction 2 set: "; f2.get_fraction();

std::cout<<std::endl;
    // проверка +
std::cout << "test + " << std::endl;
    double a = 0;
    a=f1+f2;
    std::cout << "6/3 + 4/3 = " << a << std::endl; // = C

    a=a+f2;
    std::cout << "0.666667 + 4/3 = " << a << std::endl; // = 4.66667

    a=f2+a;
    std::cout << "4/3 + 0.666667 = " << a << std::endl; // = 6

    // проверка -
std::cout<<std::endl;
std::cout << "test - " << std::endl;
    a = 0;
    a=f1-f2;
    std::cout << "6/3 - 4/3 = " << a << std::endl; // = 0.666667

    a=a-f2;
    std::cout << "0.666667 - 4/3 = " << a << std::endl; // = -0.666667

    a=f2-a;
    std::cout << "4/3 - (-0.666667) = " << a << std::endl; // = 2

    // проверка *
std::cout<<std::endl;
std::cout << "test * " << std::endl;
    a = 0;
    a=f1*f2;
    std::cout << "6/3 * 4/3 = " << a << std::endl; // = 2.66667

    a=a*f2;
    std::cout << "2.66667 * 4/3 = " << a << std::endl; // = 3.55556

    a=f2*a;
    std::cout << "4/3 * 3.55556 = " << a << std::endl; // = 4.74074

    // проверка /
std::cout<<std::endl;
std::cout << "test / " << std::endl;
    a = 0;
    a=f1/f2;
    std::cout << "6/3 / 4/3 = " << a << std::endl; // = 1.5

    a=a/f2;
    std::cout << "1.5 / 4/3 = " << a << std::endl; // = 1.125

    a=f2/a;
    std::cout << "4/3 / 1.125 = " << a << std::endl; // = 1.1851851851851851...

    //проверка унарного (-)
std::cout<<std::endl;
std::cout << "test (-) " << std::endl;
   a=0;
   a=-f2+f1+(-f1);
    std::cout << "-(4/3) + 6/3 + (-6/3) = " << a << std::endl; //  -1.3333333333333333

    //проверка ==
std::cout<<std::endl;
std::cout << "test == " << std::endl;
    a=5;
    if(f1==f2){
        std::cout<<"true < -- 4/3 and 6/3"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 6/3"<<std::endl;
    }

    if(f1==a){
        std::cout<<"true < -- 4/3 and 5"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 5"<<std::endl;
    }

    if(a==f1){
        std::cout<<"true < -- 5 and 4/3"<<std::endl;
    }else{
        std::cout<<"false < -- 5 and 4/3"<<std::endl;
    }

    //проверка !=
std::cout<<std::endl;
std::cout << "test != " << std::endl;
    if(f1!=f2){
        std::cout<<"true < -- 4/3 and 6/3"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 6/3"<<std::endl;
    }

    if(f1!=a){
        std::cout<<"true < -- 4/3 and 5"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 5"<<std::endl;
    }

    if(a!=f1){
        std::cout<<"true < -- 5 and 4/3"<<std::endl;
    }else{
        std::cout<<"false < -- 5 and 4/3"<<std::endl;
    }

    //проверка >
std::cout<<std::endl;
std::cout << "test > " << std::endl;
    if(f1>f2){
        std::cout<<"true < -- 4/3 and 6/3"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 6/3"<<std::endl;
    }

    if(f1>a){
        std::cout<<"true < -- 4/3 and 5"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 5"<<std::endl;
    }

    if(a>f1){
        std::cout<<"true < -- 5 and 4/3"<<std::endl;
    }else{
        std::cout<<"false < -- 5 and 4/3"<<std::endl;
    }

    //проверка <
std::cout<<std::endl;
std::cout << "test < " << std::endl;
    if(f1<f2){
        std::cout<<"true < -- 4/3 and 6/3"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 6/3"<<std::endl;
    }

    if(f1<a){
        std::cout<<"true < -- 4/3 and 5"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 5"<<std::endl;
    }

    if(a<f1){
        std::cout<<"true < -- 5 and 4/3"<<std::endl;
    }else{
        std::cout<<"false < -- 5 and 4/3"<<std::endl;
    }

    //проверка >=
std::cout<<std::endl;
std::cout << "test >= " << std::endl;
    if(f1>=f2){
        std::cout<<"true < -- 4/3 and 6/3"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 6/3"<<std::endl;
    }

    if(f1>=a){
        std::cout<<"true < -- 4/3 and 5"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 5"<<std::endl;
    }

    if(a>=f1){
        std::cout<<"true < -- 5 and 4/3"<<std::endl;
    }else{
        std::cout<<"false < -- 5 and 4/3"<<std::endl;
    }

    //проверка <=
std::cout<<std::endl;
std::cout << "test <= " << std::endl;
    if(f1<=f2){
        std::cout<<"true < -- 4/3 and 6/3"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 6/3"<<std::endl;
    }

    if(f1<=a){
        std::cout<<"true < -- 4/3 and 5"<<std::endl;
    }else{
        std::cout<<"false < -- 4/3 and 5"<<std::endl;
    }

    if(a<=f1){
        std::cout<<"true < -- 5 and 4/3"<<std::endl;
    }else{
        std::cout<<"false < -- 5 and 4/3"<<std::endl;
    }
}

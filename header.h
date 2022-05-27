#pragma once
#include <iostream>

class Fraction{
public:
    Fraction(int _numerator, int _denominator);
    ~Fraction();
    void get_fraction() const;

    // перегрузка +
    double operator+(Fraction& r_op) const;
    double operator+(double r_op) const;
    friend double operator+(double l_op, Fraction& r_op);

    // перегрузка -

    double operator-(Fraction& r_op) const;
    double operator-(double r_op) const;
    friend double operator-(double l_op, Fraction& r_op);

    // перегрузка *

    double operator*(Fraction& r_op) const;
    double operator*(double r_op) const;
    friend double operator*(double l_op, Fraction& r_op);

    // перегрузка /

    double operator/(Fraction& r_op) const;
    double operator/(double r_op) const;
    friend double operator/(double l_op, Fraction& r_op);

    // перегрузка (-)

    double operator -() const;

    // перегрузка == и !=

    bool operator==(Fraction& r_op) const;
    bool operator!=(Fraction& r_op) const;
    friend bool operator==(double l_op, Fraction& r_op);
    friend bool operator!=(double l_op, Fraction& r_op);
    bool friend operator==(Fraction& l_op, double r_op);
    bool friend operator!=(Fraction& l_op, double r_op);

    // перегрузка  <, >

    bool operator<(Fraction& r_op) const;
    bool friend operator<(double l_op, Fraction& r_op);
    bool friend operator<(Fraction& l_op, double r_op);
    bool operator>(Fraction& r_op) const;
    bool friend operator>(double l_op, Fraction& r_op);
    bool friend operator>(Fraction& l_op, double r_op);

    // перегрузка <=, >=

    bool operator<=(Fraction& r_op) const;
    bool friend operator<=(double l_op, Fraction& r_op);
    bool friend operator<=(Fraction& l_op, double r_op);
    bool operator>=(Fraction& r_op) const;
    bool friend operator>=(double l_op, Fraction& r_op);
    bool friend operator>=(Fraction& l_op, double r_op);


private:
    int numerator;
    int denominator;
    double sol_Fraction = static_cast<double>(numerator)/static_cast<double>(denominator); // значение дроби
    int* buf = nullptr; // указатель на знаменатель для контроля
};
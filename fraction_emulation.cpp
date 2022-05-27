#include "header.h"

Fraction::Fraction(int _numerator, int _denominator) : numerator(_numerator), denominator(_denominator) {
    buf = new int;
    *buf = denominator;
    if(*buf == 0){
        std::cout << "denominator cannot be " << *buf << " !!!" << std::endl;
        buf = nullptr;
    }
}

Fraction::~Fraction() {
    delete buf;
}

void Fraction::get_fraction() const {
    if (buf == nullptr) {
        std::cout << "The Fraction is empty !!!" << std::endl;
        return;
    }
        std::cout << numerator << "/" << denominator << std::endl;

}

// перегрузка <=, >=

bool operator>=(Fraction &l_op, double r_op) {
    if (l_op.sol_Fraction >= r_op){
        return true;
    } else {
        return false;
    }
}

bool operator>=(double l_op, Fraction &r_op) {
    if (l_op >= r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}

bool Fraction::operator>=(Fraction &r_op) const {
    if (sol_Fraction >= r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}

bool operator<=(Fraction &l_op, double r_op) {
    if (l_op.sol_Fraction <= r_op){
        return true;
    } else {
        return false;
    }
}

bool operator<=(double l_op, Fraction &r_op) {
    if (l_op <= r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}

bool Fraction::operator<=(Fraction &r_op) const {
    if (sol_Fraction <= r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}


// перегрузка  <, >

bool  operator>(Fraction &l_op, double r_op) {
    if (l_op.sol_Fraction > r_op){
        return true;
    } else {
        return false;
    }
}

bool operator>(double l_op, Fraction &r_op) {
    if (l_op > r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}

bool Fraction::operator>(Fraction &r_op) const {
    if (sol_Fraction > r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}

bool operator<(Fraction &l_op, double r_op) {
    if (l_op.sol_Fraction < r_op){
        return true;
    } else {
        return false;
    }
}

bool operator<(double l_op, Fraction &r_op) {
    if (l_op < r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}

bool Fraction::operator<(Fraction &r_op) const {
    if (sol_Fraction < r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}


// перегрузка == и !=

bool operator!=(Fraction &l_op, double r_op) {
    if (l_op.sol_Fraction != r_op){
        return true;
    } else {
        return false;
    }
}

bool operator==(Fraction &l_op, double r_op) {
    if (l_op.sol_Fraction == r_op){
        return true;
    } else {
        return false;
    }
}

bool operator!=(double l_op, Fraction &r_op) {
    if (l_op != r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}

bool operator==(double l_op, Fraction &r_op) {
    if (l_op == r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}

bool Fraction::operator!=(Fraction &r_op) const {
    if (sol_Fraction != r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}

bool Fraction::operator==(Fraction &r_op) const {
    if (sol_Fraction == r_op.sol_Fraction){
        return true;
    } else {
        return false;
    }
}

// перегрузка (-)

double Fraction::operator-() const {
    double Fraction = - sol_Fraction;
    return Fraction;
}


// перегрузка /

double operator/(double l_op, Fraction &r_op) {
    double Fraction = l_op / r_op.sol_Fraction;
    return Fraction;
}

double Fraction::operator/(double r_op) const {
    double Fraction = sol_Fraction / r_op;
    return Fraction;
}

double Fraction::operator/(Fraction &r_op) const {
    double Fraction = sol_Fraction / r_op.sol_Fraction;
    return Fraction;
}


// перегрузка *

double operator*(double l_op, Fraction &r_op) {
    double Fraction = l_op * r_op.sol_Fraction;
    return Fraction;
}

double Fraction::operator*(double r_op) const {
    double Fraction = sol_Fraction * r_op;
    return Fraction;
}

double Fraction::operator*(Fraction &r_op) const {
    double Fraction = sol_Fraction * r_op.sol_Fraction;
    return Fraction;
}


// перегрузка -

double operator-(double l_op, Fraction &r_op) {
    double Fraction = l_op - r_op.sol_Fraction;
    return Fraction;
}

double Fraction::operator-(double r_op) const {
    double Fraction = sol_Fraction - r_op;
    return Fraction;
}

double Fraction::operator-(Fraction &r_op) const {
    double Fraction = sol_Fraction - r_op.sol_Fraction;
    return Fraction;
}


// перегрузка +

double operator+(double l_op, Fraction &r_op) {
    double Fraction = l_op + r_op.sol_Fraction;
    return Fraction;
}

double Fraction::operator+(double r_op) const {
    double Fraction = sol_Fraction + r_op;
    return Fraction;
}

double Fraction::operator+(Fraction &r_op) const {
    double Fraction = sol_Fraction + r_op.sol_Fraction;
    return Fraction;
}


























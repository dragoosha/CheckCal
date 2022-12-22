#include "functions.h"
#include<iostream>
using namespace std;
Operation askForOperation() {
    int num_of_operation;
    cout << "Choose the operation: " << endl;
    cout << "Arithmetics:" << "\t\t\t\t\t" << "Trigonometry:" << endl;
    cout << "1 - Add" << "\t\t\t\t\t\t\t" << "12 - Sinus" << endl;
    cout << "2 - Subtract" << "\t\t\t\t\t" << "13 - Cosinus"  << endl;
    cout << "3 - Multiply" << "\t\t\t\t\t" << "14 - Tangent" << endl;
    cout << "4 - Divide" << "\t\t\t\t\t\t" << "15 - Cotangent" << endl;
    cout << "5 - Unary_minus" << endl;
    cout << "6 - Exp" << endl;
    cout << "7 - Log" << endl;
    cout << "8 - Sqrt" << endl;
    cout << "9 - Pow" << endl;
    cout << "10 - Remainder" << endl;
    cout << "11 - unary_plus" << endl;
    cout << "0 - exit" << endl;
    cin >> num_of_operation;
    while (cin.fail() || num_of_operation < 0 || num_of_operation > 20) {
        cin.clear();
        cin.ignore();
        cout << "enter the number of operation(1-13):  ";
        cin >> num_of_operation;
    }
    switch (num_of_operation) {
        case 1: return Operation::add;
            break;
        case 2: return Operation::subtract;
            break;
        case 3: return Operation::multiply;
            break;
        case 4: return Operation::divide;
            break;
        case 5: return Operation::unary_minus;
            break;
        case 6: return Operation::Exp;
            break;
        case 7: return Operation::Log;
            break;
        case 8: return Operation::Sqrt;
            break;
        case 9: return Operation::Pow;
            break;
        case 10: return Operation::Remainder;
            break;
        case 11: return Operation::unary_plus;
            break;
        case 12: return Operation::Sinus;
            break;
        case 13: return Operation::Cosinus;
            break;
        case 14: return Operation::Tangent;
            break;
        case 15: return Operation::Cotangent;
            break;
        case 0: return Operation::Exit;
            break;
    }
    return Operation::Exit;
}


bool isUnary(Operation oper) {
    if (oper == Exp || oper == Sqrt || oper == Log || oper == unary_minus || oper == unary_plus || oper == Sinus ||
        oper == Cosinus || oper == Tangent || oper == Cotangent) {
        return true;
    }
    return false;
}


int askForNumber() {
    int num;
    cout << "enter num: ";
    cin >> num;
    return num;
}


int Unary_minus(int a) {
    return -a;
}

int Unary_plus(int a) {
    return a;
}
double fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}
double sinus(double x){
    long double e = (1e-20);
    long double ch = x;
    long double zn = 1;
    int counter = 0;
    double res = 0;
    double dr = 1;
    while (fabs(dr) > e) {
        dr = ch / zn;
        if (counter % 2) {
            res -= dr;
        }
        else {
            res += dr;
        }
        counter++;
        ch = ch * x * x;
        zn = zn * (counter * 2) * (counter * 2 + 1);
    }
    return res;
}
double cosinus(double x){
    return sqrt((1-(pow(sinus(x),2))));
}
double tangent(double x){
    return sinus(x)/ cosinus(x);
}
double cotangent(double x){
    return cosinus(x)/ sinus(x);
}

double applyUnaryOperation(Operation oper, int x) {
    switch (oper) {
        case Operation::Exp: return exp(x);
            break;
        case Operation::Sqrt: return sqrt(x);
            break;
        case Operation::Log: return log(x);
            break;
        case Operation::unary_minus: return Unary_minus(x);
            break;
        case Operation::unary_plus: return Unary_plus(x);
            break;
        case Operation::Sinus: return sinus(x);
            break;
        case Operation::Cosinus: return cosinus(x);
            break;
        case Operation::Tangent: return tangent(x);
            break;
        case Operation::Cotangent: return cotangent(x);
            break;
    }
    return 0;
}

double Sum(double a, double b){
    return a + b;
}

double Sub(double a, double b) {
    return a - b;
}

double Mult(double a, double b) {
    return a * b;
}

double Div(double a, double b) {
    try {
        if (b == 0) {
            throw 1;
        }
    }
    catch (double exc) {
        if (exc == 1) {
            cout << "ERROR. Dividing by 0!!!";
            return 0;
        }
    }
    return a / b;
}

int Mod(int a, int b) {
    try {
        if (b == 0) {
            throw 1;
        }
    }
    catch (int exc) {
        if (exc == 1) {
            cout << "ERROR. Dividing by 0!!!";
        }
    }
    return a % b;
}

double applyBinaryOperation(Operation oper,int a,int b) {
    switch (oper) {
        case Operation::subtract: return Sub(a, b);
            break;
        case Operation::multiply: return Mult(a, b);
            break;
        case Operation::Pow: return pow(a,b);
            break;
        case Operation::divide: return Div(a, b);
            break;
        case Operation::add: return Sum(a, b);
            break;
        case Operation::Remainder: return Mod(a, b);
            break;
    }
    return 0;
}


void printResult(double res) {
    cout << res << endl;
}
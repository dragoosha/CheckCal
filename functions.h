#include <iostream>
#include <cmath>

using namespace std;
enum Operation {
    //arithmetical
	add = 1,
	subtract = 2,
	multiply = 3,
	divide = 4, 
	Exp = 6, //not arithmetic
	Log = 7, // not arithmetic
	Sqrt = 8,//not arithmetic
	Pow = 9, //not arithmetic
	Exit = 0,
	Remainder = 10,
	unary_plus = 11,
	unary_minus = 5,
    // trigonometry
    Sinus = 12,
    Cosinus = 13,
    Tangent = 14,
    Cotangent = 15,
};
// arithmetical functions
double Sum(double a, double b);
double Sub(double a, double b);
double Mult(double a, double b);
double Div(double a, double b);
int Mod(int a, int b);
double Root(double a, double b);
double Power(double a, double b);
Operation askForOperation();
bool isUnary(Operation);
int askForNumber();
double applyUnaryOperation(Operation oper, int x);
double applyBinaryOperation(Operation oper, int a, int b);
void printResult(int res);
int Unary_minus(int a);
int Unary_plus(int a);
double cotangent(double x);
double tangent(double x);
double sinus(double x);
double cosinus(double x);



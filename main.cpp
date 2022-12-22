#include "functions.cpp"

int main(){
    while (true) {
        const Operation operation = askForOperation();
        if (operation == Exit) {
            exit(0);
        }
        double result;
        if (isUnary(operation)) {
            const int x = askForNumber();
            result = applyUnaryOperation(operation, x);
        }
        else {
            const int a = askForNumber();
            const int b = askForNumber();
            result = applyBinaryOperation(operation, a, b);
        }
        printResult(result);
    }
    return 0;
}
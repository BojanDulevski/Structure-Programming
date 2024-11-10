//Од стандарден влез се внесуваат два цели броја N и Х.
//Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
//Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
//Задачата да се реши без употреба на низи и матрици.


  
//Two integers N and X are entered from standard input.
//To find the closest number less than N which is totally different from the number X.
//A number is totally different from another if and only if none of the digits of the other number appear in it.
//To solve the problem without using arrays and matrices.



#include <iostream>
using namespace std;

bool areNumbersDifferent(int num1, int num2) {
    while (num1 > 0) {
        int digit = num1 % 10;
        if (num2 % 10 == digit) {
            return false;
        }
        num1 /= 10;
    }
    return true; //
}

int main() {

    int N, X;
    cin >> N >> X;


    for (int i = N - 1; i > 0; i--) {
        if (areNumbersDifferent(i, X)) {
            cout << i <<endl;
            break;
        }
    }

    return 0;
}

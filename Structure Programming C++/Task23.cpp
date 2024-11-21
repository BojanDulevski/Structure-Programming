Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.

Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број. За секој од нив да се испечати максималната цифра во посебен ред.

Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.

Забелешка: ЗАБРАНЕТО е користење на глобални променливи.



  #include <iostream>
using namespace std;

int findMaxDigit(int num, int maxDigit = 0) {
    if (num == 0) {
        return maxDigit;
    }

    int lastDigit = num % 10;
    if (lastDigit > maxDigit) {
        maxDigit = lastDigit;
    }

    return findMaxDigit(num / 10, maxDigit);
}

int main() {
    int number;

    while (cin >> number) {
        if (!cin) {
            break;
        }

        int maxDigit = findMaxDigit(number);

        cout << maxDigit << endl;
    }

    return 0;
}

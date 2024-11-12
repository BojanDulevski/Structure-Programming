Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број. За секој број треба да се пресмета збирот на цифрата со максимална вредност од претходно внесениот број  и сумата на цифрите на тековниот број (за првиот внесен број се пресметува само сумата на неговите цифри). За секој внесен број резултатот треба да се испечати во следниот формат:

[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]

342: 9   //3+4+2

345: 16 //3+4+5+4

123: 11 //1+2+3+5

456: 18 //4+5+6+3



  #include <iostream>
using namespace std;

// Функција за пресметка на сумата на цифрите на даден број
int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

// Функција за пресметка на максималната цифра на даден број
int maxDigit(int number) {
    int maxDigit = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }
    return maxDigit;
}

int main() {
    int number;
    int prevMaxDigit = 0;  // Иницијално, нема претходен број, па земаме 0 како максимална цифра

    

    while (cin >> number) { // Чита додека не се внесе нешто различно од број
        int currentSum = sumOfDigits(number);
        int result = currentSum + prevMaxDigit;

        cout << number << ": " << result << endl;

        // Ажурирање на максималната цифра за тековниот број за следната итерација
        prevMaxDigit = maxDigit(number);
    }

    return 0;
}

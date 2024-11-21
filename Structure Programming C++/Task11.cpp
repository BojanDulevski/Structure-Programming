На стандарден влез се дадени повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во истиот ред.
  Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. 
  Читањето на броеви завршува кога ќе се прочита бројот 0.




  #include <iostream>

int getMostSignificantDigit(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num;
}

int main() {
    while (true) {
        int N;
        std::cin >> N;

        if (N == 0) {
            break;
        }

        int maxDigit = -1;
        int numberWithMaxDigit;

        for (int i = 0; i < N; ++i) {
            int num;
            std::cin >> num;

            int msd = getMostSignificantDigit(num);

            if (msd > maxDigit) {
                maxDigit = msd;
                numberWithMaxDigit = num;
            }
        }

        std::cout << numberWithMaxDigit << std::endl;
    }

    return 0;
}

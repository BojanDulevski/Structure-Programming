Од стандарден влез се чита ливче во спортска обложувалница.

Во првиот ред е запишана сумата на уплата (цел број).

Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот #) е запишан по еден тип во следниот формат:

ab12 1 1.25
Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).

Ваша задача е да го испечатите типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

For example:
Input:
100
ab12 1 1.2
c234 2 2.0
#

Ouput:
c234 2 2
240


#include<iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int uplata;
    cin >> uplata;

    string sifra, najgolemSifra;
    int tip, najgolemTip = -1;
    double koef, najgolemKoef = -1;
    double produktKoeficienti = 1;

    while (true) {
        cin >> sifra;
        if (sifra == "#") break;

        cin >> tip >> koef;


        produktKoeficienti *= koef;


        if (koef > najgolemKoef) {
            najgolemKoef = koef;
            najgolemSifra = sifra;
            najgolemTip = tip;
        }
    }


    double moznaDobivka = produktKoeficienti * uplata;
    


    cout << najgolemSifra << " " << najgolemTip << " " << najgolemKoef << endl;
    cout << (int)(moznaDobivka * 100 + 0.5) / 100.0 << endl;

    return 0;
}

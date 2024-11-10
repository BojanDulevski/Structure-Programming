//Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.). 
//Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри. 
//Доколку добиениот декаден збир е делив со 16 се печати Pogodok. 
  //Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6), се печати Poln pogodok инаку се печати самиот збир.

//Пример:
//влез: A 7 F 2 0 c A 5
//излез: 61
//(61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните цифри му се 1,6)




#include <iostream>
#include <string>
using namespace std;

int main() {
    string hex_digit;
    int decimal_sum = 0;//deklariram suma
    //vnesuvam heksadecimalni cifri
    while (cin >> hex_digit && hex_digit != ".") {
        decimal_sum += stoi(hex_digit, nullptr, 16);
    }
//ako e deliv so 16 pecati pogodok
    if (decimal_sum % 16 == 0) {
        cout << "Poln pogodok" << endl;
        //deliv so 16 i zavrsuva na 16 
    } else if (decimal_sum % 16 == 16 - (decimal_sum % 16)) {
        cout << "Poln pogodok" << endl;
    } else {
        //pecati zbir
        cout << decimal_sum << endl;
    }

    return 0;
}

//Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100). 
//Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
//Напомена: cin во C++ ги игнорира празните места (space). За да не ги игнорира потребно е да се додаде noskipws пред читањето на знакот (пр. cin >> noskipws >> znak;)



//Characters are read from standard input until an exclamation point is read. Whole numbers (less than 100) are hidden in the text entered like this.
//To write a program that will read all the characters and print the sum of all the numbers hidden in the text.
//Note: cin in C++ ignores spaces. In order not to ignore them, it is necessary to add noskipws before reading the character (eg cin >> noskipws >> znak;)




#include<iostream>
using namespace std;
int main(){
    char znak;
    int zbir=0;
    cin>>noskipws>>znak;
    while(znak != '!') {
        if (isdigit(znak)) {
            int broj = 0;
            while (isdigit(znak)) {
                broj = broj * 10 +(znak - '0');
                cin >> noskipws >> znak;
            }
            zbir += broj;
        } else {
            cin >> noskipws >> znak;
        }
    }
            cout<<zbir<<endl;
            return 0;
        }

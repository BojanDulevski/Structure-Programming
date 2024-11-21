Од стандарден влез се читаат низи од знаци се додека не се прочита знакот #. 
Да се напише програма во која од за секој прочитан ред ќе се отпечати бројот на цифри во тој ред, знакот :, па самите цифри подредени според ASCII кодот во растечки редослед.
  Низите од знаци не се подолги од 100 знаци.

  input
  74I9BjpbhbsfX6Ai0xtnmv4csz2gNv
wtkb3Y82B9oygnG1vhRsMOuman2n894v08w4pI3e4x
p7A3pO1U70aeGxwpOptb2rie
nw01MAok4HWisf913hjtiyscgwhdr7w92lm7eddhy6ne40fHbsZc3ac
Zmwk1yrnqt0LjT6ItS2kH
kfcp3Xpxx030B0ojf2G2o4JgkTsolbxqgxkifmbwrxRevKum8tvq4FZxi9LsUM2bq3jGjuo0eu4iv6
W79qURXz32tn8gdzAmasf019JdFbVtizbwu1t09dlkLfpxF1dw7g4wqHSLgEojK27bYP
wyqzCunXvicN1D31v41hbhvmC45m69u587aW0gAZ4mvhypshmn0kVs
#

Result: 
7:0244679
14:01223344488899
6:012377
14:00112334467799
4:0126
16:0000222333444689
16:0011122347778999
15:001113444556789



  #include <iostream>
#include <cstring> // За strlen и функции за ракување со стрингови
using namespace std;

int main() {
    char line[100];  // Низа за чување на секој ред
    while (true) {
        cin.getline(line, 100);  // Читање на редот од стандарден влез

        if (line[0] == '#') {  // Прекинување ако е прочитан знак #
            break;
        }

        int digits[100];  // Низа за чување на цифрите
        int digitCount = 0;  // Број на цифри во редот

        // Пронаоѓање на сите цифри во редот
        for (int i = 0; i < strlen(line); i++) {
            if (isdigit(line[i])) {
                digits[digitCount++] = line[i];
            }
        }

        // Сортирање на цифрите (bubble sort)
        for (int i = 0; i < digitCount - 1; i++) {
            for (int j = 0; j < digitCount - i - 1; j++) {
                if (digits[j] > digits[j + 1]) {
                    // Размена на елементите
                    int temp = digits[j];
                    digits[j] = digits[j + 1];
                    digits[j + 1] = temp;
                }
            }
        }

        // Печатење на резултатот
        cout << digitCount << ":";
        for (int i = 0; i < digitCount; i++) {
            cout << (char)digits[i];
        }
        cout << endl;
    }

    return 0;
}

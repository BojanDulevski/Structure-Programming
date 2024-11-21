Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели броеви:

N - бројот на низи од знаци кои ќе се читаат и
X - поместување.
Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z). Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.

Трансформацијата да се имплементира со посебна рекурзивна функција.

Пример:

Welcome -> трансформирано со поместување 5 -> Bjqhtrj



  #include <iostream>
#include <cstring>
using namespace std;

// Функција за проверка дали еден карактер е буква
bool isAlpha(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

// Функција за проверка дали еден карактер е голема буква
bool isUpper(char ch) {
    return ch >= 'A' && ch <= 'Z';
}

// Функција за трансформација на карактер со дадено поместување
char transformChar(char ch, int shift) {
    if (isAlpha(ch)) {
        char base = (isUpper(ch)) ? 'A' : 'a';
        return static_cast<char>((ch - base + shift) % 26 + base);
    }
    return ch;
}

// Рекурзивна функција за трансформација на текст
void transformString(char str[], int shift, size_t index = 0) {
    if (str[index] != '\0') {
        str[index] = transformChar(str[index], shift);
        transformString(str, shift, index + 1);
    }
}

int main() {
    int N, X;
    cin >> N >> X;
    cin.ignore();  // Ignore newline character after reading N and X

    for (int i = 0; i < N; ++i) {
        char input[101]; // Maximum length of each text is 100
        cin.getline(input, 101); // Read the entire line

        char* token = strtok(input, " "); // Split the line into tokens separated by space

        while (token != 0) {
            transformString(token, X); // Transform each token
            cout << token << " ";
            token = strtok(0, " "); // Get the next token
        }

        cout << endl; // Output a new line after processing each input line
    }

    return 0;
}

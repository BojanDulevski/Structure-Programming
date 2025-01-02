Од стандарден влез се внесува почетна тексутуална низа (стринг) со максимална должина од 20 знаци - почетен стринг.

Потоа се внесува цел број N (N<=100), а во продолжение секоја во нов ред, се внесуваат N текстуални низи (реченици) со максимална должина од 100 знаци.

За секоја од внесените реченици треба да се изброи колку вкупно пати почетниот стринг се појавува во неа (треба  да се прави разлика помеѓу мали и големи букви).
  На крај да се генерира извештај во кој ќе се наведе колку вкупно реченици имаат 0, 1, 2, …
  односно n појавувања на почетниот стринг. Во овој случај n е бројот на појавувања на почетниот стринг во некоја од речениците.
  Излезот треба да биде во форматот како што е даден во примерот.

Забелешка: Броењето на тоа колку пати почетниот стринг се наоѓа во реченицата да се направи во посебна функција.

Кај излезот првиот број означува појавувања на стрингот 2024 (од 0 до n), а вториот број означува кај 
  колку реченици од влезот е соодветниот број на појавувања на почетниот стринг 2024.


  #include <iostream>
#include <string>
using namespace std;

// Функција за броење на појавувањата на подниза во низа
int countOccurence(string &sentence,  string &substring) {
    int counter = 0;
    int len = substring.length();

    

    for (int  i = 0; i <= sentence.length() - len; i++) {
        if (sentence.substr(i, len) == substring) {
            counter++;
        }
    }
    return counter;
}

int main() {
    string Firstsentence;

    cin >> Firstsentence;

    int N;

    cin >> N;
   
 cin.ignore(); // За да се игнорира преостанатиот newline знак
    const int MaxOccurrence = 100;
    int occurrenceCount[MaxOccurrence] = {0};
    int maxOccurrence = 0;

    for (int i = 0; i < N; i++) {
        string sentence;

        getline(cin, sentence); // Внесуваме реченица

        int occurrence = countOccurence(sentence, Firstsentence);
        if (occurrence < MaxOccurrence) {
            occurrenceCount[occurrence]++;
            if (occurrence > maxOccurrence) {
                maxOccurrence = occurrence;
            }
        }
    }


    for (int i = 0; i <= maxOccurrence; i++) {
        cout << i << ": " << occurrenceCount[i] << endl;
    }

    return 0;
}

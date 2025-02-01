Од стандарден влез се внесува почетна тексутуална низа (стринг) со максимална должина од 20 знаци - почетен стринг.

Потоа се внесува цел број N (N<=100), а во продолжение секоја во нов ред, се внесуваат N текстуални низи (реченици) со максимална должина од 100 знаци.

За секоја од внесените реченици треба да се изброи колку вкупно пати почетниот стринг се појавува во неа (треба  да се прави разлика помеѓу мали и големи букви). На крај да се генерира извештај во кој ќе се наведе колку вкупно реченици имаат 0, 1, 2, … односно n појавувања на почетниот стринг. Во овој случај n е бројот на појавувања на почетниот стринг во некоја од речениците. Излезот треба да биде во форматот како што е даден во примерот.


Забелешка: Броењето на тоа колку пати почетниот стринг се наоѓа во реченицата да се направи во посебна функција.

Кај излезот првиот број означува појавувања на стрингот 2024 (од 0 до n), а вториот број означува кај колку реченици од влезот е соодветниот број на појавувања на почетниот стринг 2024.

_____________________________________________________________________________________________________


From standard input an initial textual string is entered with a maximum length of 50 characters - the starting string.

Then entered a whole number N (N <= 100). Following that, for each line, N textual strings (sentences) with a maximum length of 100 characters.



For each of the entered sentences, count how many times the starting string appears in it (case-insensitive). Finally, generate a report that indicates how many sentences have 0, 1, 2, ..., or n occurrences of the starting string. In this case, n is the number of occurrences of the starting string in any of the sentences. The output should be in the format given in the example.



Note: Counting how many times the starting string appears in the sentence should be done in a separate function.

In the output, the first number indicates occurrences of the string 2024 (from 0 to n), and the second number indicates how many sentences from the input have the corresponding number of occurrences of the starting string 2024.


input:
2024
4
Srekjna Nova Godina!
Srekjkna Nova 2024 godina! Mnogu zdravje, uspeh i srekja vo 2024ta.
2024 e novata godina koja ni pretstoi, Da bide ispolneta so radost i srekja. Srekjna 2024 godina!
Uste edna nova godina ni dojde.


  Output:
0: 2
1: 0
2: 2

#include <iostream>
#include <string>
using namespace std;


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
   
 cin.ignore(); 
    const int MaxOccurrence = 100;
    int occurrenceCount[MaxOccurrence] = {0};
    int maxOccurrence = 0;

    for (int i = 0; i < N; i++) {
        string sentence;

        getline(cin, sentence); 

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

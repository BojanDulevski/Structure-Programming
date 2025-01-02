Од стандарден влез се задаваат димензиите на една матрица Аmxn (m,n <=100), а во продолжение се читаат елементите на матрицата. 
  Елементите на матрицата се цели броеви. 

Да се испечатат сите збирови кои се добиваат со испишување на шабллонот за буквата Z во матрицата A. 
  Првиот шаблон се добива од подматрица А1 (2x2) почнувајќи од индекс (0,0) во матрицата А, наредниот од подматрицата А2 (3x3) 
  исто почнувајќи од индекс (0,0) во матрицата А итн. Види пример!

 
Пример влез:
4
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20

Излез:
16
49
100


  #include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n; // Внесување на димензиите на матрицата

    int A[100][100]; // Декларација на матрицата

    // Внесување на елементите на матрицата
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Пресметка на збировите за секој шаблон Z
    for (int size = 2; size <= min(m, n); size++) {
        int sum = 0;

        // Пресметка на горната хоризонтална линија
        for (int j = 0; j < size; j++) {
            sum += A[0][j];
        }

        // Пресметка на дијагоналата
        for (int i = 1; i < size - 1; i++) {
            sum += A[i][size - 1 - i];
        }

        // Пресметка на долната хоризонтална линија
        for (int j = 0; j < size; j++) {
            sum += A[size - 1][j];
        }

        cout << sum << endl;
    }

    return 0;
}

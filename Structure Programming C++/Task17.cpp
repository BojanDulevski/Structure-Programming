Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$ ќе ја пресмета вредноста на непрекинатата дропка дефинирана како:

v=a0+1a1+...1an−2+1an−1

Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100). Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.

  intput 50 50 8 43 32 29 4 23 26 17 16 30 16 20 42 41 24 36 27 38 43 22 10 27 14 48 21 20 40 36 13 10 28 33 3 8 3 6 49 23 23 12 31 37 33 12 47 32 42 16 1 
  Result: 50.1246


  #include <iostream>
using namespace std;


double neprekinitenaDrofka(int arr[], int n) {
    
    if (n == 1) {
        return arr[0];
    }

   
    return arr[0] + 1.0 / neprekinitenaDrofka(arr + 1, n - 1);
}

int main() {
    int N;
    cin >> N;

    int arr[100];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

   
    double rezultat = neprekinitenaDrofka(arr, N);

    // Печатење на резултатот
    cout << rezultat << endl;

    return 0;
}

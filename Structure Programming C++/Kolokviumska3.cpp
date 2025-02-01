За даден број n, испечатете ја следнава секвенца без да користите наредби за повторување (со помош на рекурзија): n n-5 n-10 n-15 … n-15 n-10 n-5 n

Напомена: При печатење на секвенцата на броеви се користат празни места измеѓу броевите.


  #include <iostream>
using namespace std;


void printSequence(int n, int current, bool reverse) {
    cout << current;

  
    if (reverse && current == n) {
        return;
    }

   
    if (!reverse && current - 5 >= -4) { 
        cout << " ";
        printSequence(n, current - 5, false);
    } else {
        
        cout << " ";
        printSequence(n, current + 5, true);
    }
}

int main() {
    int n;
    cin >> n;

    printSequence(n, n, false);

    return 0;
}

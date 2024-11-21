Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата. 
  Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица. 
  Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот. Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

Пример:

Влез:

3 6

1 2 2 3 4 5

1 1 2 2 3 3

1 2 3 4 5 6

Излез:

5 1 1


  #include<iostream>
using namespace std;




int main(){

    int n,m;
    cin>>m>>n;
    int matrix[100][100];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    int result[100];

    for(int i=0;i<m;i++) {
        double sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        double avg = sum / n;

        int FurthestElement = matrix[i][0];
        double maxDistance= abs(matrix[i][0]-avg);
        for(int j=0;j<n;j++){
            if(abs(matrix[i][j]-avg)>maxDistance){
                FurthestElement=matrix[i][j];
                maxDistance=abs(matrix[i][j]-avg);
            }
        }
        result[i]=FurthestElement;

    }
    for(int i = 0; i < m; i++){
        cout << result[i]<<" ";
    }

    return 0;
}



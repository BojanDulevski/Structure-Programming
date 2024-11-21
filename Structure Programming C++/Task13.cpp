Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата). Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (-5 во примерот на сликата).

Од стандарден влез се внесува матрица со димензии NxM (1 <= N, M < 100). Потоа се внесуваат два броеви кои претставуваат индекси на еден елемент од матрицата.

Да се најдат сумите на секој од квадрантите и да се испечатат на стандарен излез. Притоа се печати сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот.
  Доколку не може да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0.


  #include<iostream>
#include<cstring>
using namespace std;


int main(){
     int matrix [100] [100];
     int n,m,row,col;
     
     cin>>n>>m;
     
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             cin>>matrix[i][j];
         }
     }
     cin>>row>>col;
     
     int firstQuadrant=0,secondQuadrant=0,thirdQuadrant=0,fourthQuadrant=0;
     
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             if(i<row && j>=col){
                 firstQuadrant+=matrix[i][j];
             }else if(i<row && j<col){
                 secondQuadrant+=matrix[i][j];
             }else if(i>=row && j<col){
                 thirdQuadrant+=matrix[i][j];
             }else if(i>=row && j>=col){
                 fourthQuadrant+=matrix[i][j];
             }
         }
     }
     cout<<firstQuadrant<<" "<<secondQuadrant<<" "<<thirdQuadrant<<" "<<fourthQuadrant<<" ";

    return 0;
}

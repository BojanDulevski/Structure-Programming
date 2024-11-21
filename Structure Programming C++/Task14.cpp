Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100). На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0. Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.

Пример:

   1111
  1011
  1001




  #include<iostream>
using namespace std;




int main(){

    int m,n;
    cin>>m>>n;
    int matrix[100][100];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int number=0;

    for(int i=0;i<m;i++){
        int movingrow=0;
        for(int j=0;j<n;j++){
            if(matrix[i][j]==1){
                movingrow++;
            if(movingrow>=3) {
                number++;
                break;
            }
            }else{
                movingrow=0;
            }
        }
    }

    for(int j=0;j<n;j++){
        int movingcol=0;
        for(int i=0;i<m;i++){
            if(matrix[i][j]==1){
                movingcol++;

            if(movingcol>=3) {
                number++;
                break;
            }
            }else{
                movingcol=0;
            }
        }
    }
    cout<<number<<endl;







    return 0;
}

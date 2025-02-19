Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).

Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата) и бројот на валидни елементи во низата. 
  Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс ind па се до крајот на низата. Ако индексот ind е поголем од Nфункцијата треба да врати 0.

НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор [ ]).

Пример

влез:

10
2 4 6 8 1 3 9 12 33 44
6
излез:

98
98 = 9+12+33+44


  #include<iostream>
using namespace std;

int sum_pos(int *niza,int ind,int N){
    if(ind>=N){
        return 0;
    }
    niza+=ind;
    int sum=0;
    while(ind<N){
        sum+=*niza;
        ++niza;
        ++ind;
    }
    return sum;
}


int main(){
   int N;
    cin>>N;

    int niza[100];

    for(int i=0;i<N;i++){
        cin>>niza[i];
    }
    int ind;
    cin>>ind;

    int result= sum_pos(niza,ind,N);
    cout<<result<<endl;

    return 0;
}

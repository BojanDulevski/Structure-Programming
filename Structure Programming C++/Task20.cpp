Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа. Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа. Функцијата е зададена со следниот прототип:

int BrojPozitivni(int niza[], int n);

Да се напише и функција main() за тестирање на функцијата BrojPozitivni.

#include<iostream>
using namespace std;

int BrojPozitivni(int niza[], int n){
    
    if(n==0){
        return 0;
    }
    int BrojPozitivniVoNiza;
    if(niza[0]>0){
        BrojPozitivniVoNiza=1;
    }else{
        BrojPozitivniVoNiza=0;
    }
    return BrojPozitivniVoNiza+ BrojPozitivni(niza+1,n-1);
}

int main(){

    int n;
    cin>>n;
    
    int *niza= new int[n];
    
    for(int i=0;i<n;i++){
        cin>>niza[i];
    }
    cout<<BrojPozitivni(niza,n)<<endl;




    return 0;
}

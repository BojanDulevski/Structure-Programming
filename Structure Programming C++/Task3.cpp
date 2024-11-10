//Од стандарден влез се чита еден природен број n. 
//Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
//Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.


//A single natural number n is read from standard input.
//Among the natural numbers less than n, find the one whose sum of divisors is the largest. 
//In calculating the sum of the divisors of a given number, the number itself should not be taken into account.




#include<iostream>
using namespace std;
int main(){
    int n,suma,maxsuma=0,broj;
    cin>>n;
    for(int i=1;i<n;i++){
     suma=0;   
     for(int a=1;a<i;a++){
     if(i%a==0 && i!=a)
     suma+=a;}
     if(suma>maxsuma){
         broj=i;
         maxsuma=suma;
     }
    }
    cout<<broj;
    return 0;
}
    

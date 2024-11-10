//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
//Од тастатура се внесува природен број n ( n > 9). 
//Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).


A //Natural number is "interesting" if its reciprocal is divisible by its number of digits. A reversed number is a number made up of the same digits, but in reverse order (for example, 653 is the reverse of the number 356). A natural number n ( n > 9) is entered from the keyboard. 
  //To find and print the largest natural number less than n that is "interesting". 
  //If the entered number is not valid, print a corresponding message (Number is not valid).




#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=9){
        cout<<"Brojot ne e validen"<<endl;
    }
    else{
        for(int i=n-1;i>=1;--i){
            int reverse=0;
            int temp=i;
            int broj=0;
            
            while(temp>0){
                reverse=reverse*10 + temp % 10;
                temp/=10;
                broj++;
            }
            if(reverse%broj==0){
                cout<<i<<endl;
                return 0;
            }
        }
    }
}

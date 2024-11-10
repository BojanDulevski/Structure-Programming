//Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
//Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
//Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.
//Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)



#include<iostream>
using namespace std;
int main(){
    int broj1,broj2;
    cin>>broj1>>broj2;

    if(broj1<=0 || broj2<=0){
        cout<<"Invalid input"<<endl;
    }else{
        int pomaliBroj,pogolemibroj;
        if(broj1<broj2){
            pomaliBroj=broj1;
            pogolemibroj=broj2;
        }else{
            pomaliBroj=broj2;
            pogolemibroj=broj1;
        }
        int cifraPomali,Cifrapogolemi;
        bool parenEkvivalent=true;
        while(pomaliBroj>0){
            if(pomaliBroj%10 != pogolemibroj%10){
                parenEkvivalent=false;
                break;
            }
            pomaliBroj/=10;
            pogolemibroj/=10;
        }
        if(parenEkvivalent){
            cout<<"PAREN"<<endl;
        }else{
            cout<<"NE"<<endl;
        }
    }
    return 0;
}

//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
//Во зададен опсег (почетокот m и крајот на опегот n се цели броеви
//чија вредност се внесува од тастатура), да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.



#include<iostream>
using namespace std;


int main(){

int m,n;
    cin>>m>>n;//vo zadacata

    for(int i=m;i<=n;i++) {//gi minuva site broevi od m do n
        bool IsBlag=true;//postavuvame deka Isblag e true odnosno deka brojot e sotaven samo od parni cifti
        int temp=i;//temp promenliva deka i nie vo glavniot ciklus i nemozeme da go izmenime ito cce se izmeni se
        while(temp>0) {//dodeka temp e pogolemo od 0
            int digit=temp%10;//zadavame promenliva za digit da gi proveruvame cifrite sega so temp%10 go proveruvame sekoj broj odvoeno
            if(digit%2!=0) {//proveruvame dali brojot e paren
                IsBlag=false;//ako e neparen togas e false i davas greska koga e brojo neparen togas
                break;//tuka zavrsuva cikluso
            }
            temp/=10;//se otranuva poslednata cifra potoa se vrajka nazad i ja odstranuvame polsednata pa povtorno poslednata.
        }
        if(IsBlag) {//dokolku e ciklusot tocen ispecatigo brojot
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"NE"<<endl;//dokolku ne e ispecati ne

return 0;
}

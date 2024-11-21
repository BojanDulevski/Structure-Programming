Од стандарден влез се читаат непознат број на редови додека не се прочита 0. Да се најде најдолгиот ред во кој има барем 2 цифри.
  Потоа, на стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. 
  Доколку има повеќе такви редови се печати последниот. 
  Се претпоставува дека ниту еден ред не е подолг од 100 знаци.

Пример.

Влез: 
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a
    0
Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2



#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char line[100];           
    char longestLine[100] = "";  
    bool hasDigit = false;    

    while (cin.getline(line, sizeof(line))) {  /
        if (line[0] == '0') {
            break;
        }

        int firstDigit = -1;  
        int lastDigit = -1;  

       
        for (int i = 0; i < strlen(line); i++) {
            if (isdigit(line[i])) {  
                if (firstDigit == -1) {
                    firstDigit = i;
                }
                lastDigit = i;
            }
        }

       
        if (firstDigit != -1) {
            int currentLength = lastDigit - firstDigit + 1;
            
            if (currentLength > strlen(longestLine)) {
                strncpy(longestLine, line + firstDigit, currentLength);
                longestLine[currentLength] = '\0'; 
            }
        }
    }

    cout << longestLine << endl; 

    return 0;
}

    ENT  2
    LLA  -1
    PSH
    IMM  1
    SI
5:     temp2=a;
    LLA  -2
    PSH
    LLA  3
    LI
    SI
6:     while(temp<n){
    LLA  -1
    LI
    PSH
    LLA  2
    LI
    LT
    BZ   0
7:         a=a*temp2;
    LLA  3
    PSH
    LLA  3
    LI
    PSH
    LLA  -2
    LI
    MUL
    SI
8:         temp=temp+1;
    LLA  -1
    PSH
    LLA  -1
    LI
    PSH
    IMM  1
    ADD
    SI
9:     }
10:     return a;
    JMP  -1689583344
    LLA  3
    LI
    LEV
11: }
    LEV
12: int main(){
13:     printf("%d",power(2,3));
    ENT  0
    IMM  -1689321312
    PSH
    IMM  2
    PSH
    IMM  3
    PSH
    JSR  -1689583464
    ADJ  2
    PSH
    PRTF
    ADJ  2
14:     return 0;
    IMM  0
    LEV
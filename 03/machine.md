```
//1: #include<stdio.h>
//2: int power(int a, int n) {
//3:     if (n == 0)
  *e++ = ENT; *e++ = 0;
  *e++ = LLA; *e++ = 2;
  *e++ = LI;
  *e++ = PSH;
  *e++ = IMM; *e++ = 0;
  *e++ = EQ;
//4:         return 1;
  *e++ = BZ; *e++ = 0;
  *e++ = IMM; *e++ = 1;
  *e++ = LEV;
//5:     else if (n < 0)
  *e++ = JMP; *e++ = 0;
  *e++ = LLA; *e++ = 2;
  *e++ = LI;
  *e++ = PSH;
  *e++ = IMM; *e++ = 0;
  *e++ = LT;
//6:         return 1 / power(a, -n);
  *e++ = BZ; *e++ = 0;
  *e++ = IMM; *e++ = 1;
  *e++ = PSH;
  *e++ = LLA; *e++ = 3;
  *e++ = LI;
  *e++ = PSH;
  *e++ = IMM; *e++ = -1;
  *e++ = PSH;
  *e++ = LLA; *e++ = 2;
  *e++ = LI;
  *e++ = MUL;
  *e++ = PSH;
  *e++ = JSR; *e++ = -1792474984;
  *e++ = ADJ; *e++ = 2;
  *e++ = DIV;
  *e++ = LEV;
//7:     else
  *e++ = JMP; *e++ = 0;
//8:         return a * power(a, n - 1);
  *e++ = LLA; *e++ = 3;
  *e++ = LI;
  *e++ = PSH;
  *e++ = LLA; *e++ = 3;
  *e++ = LI;
  *e++ = PSH;
  *e++ = LLA; *e++ = 2;
  *e++ = LI;
  *e++ = PSH;
  *e++ = IMM; *e++ = 1;
  *e++ = SUB;
  *e++ = PSH;
  *e++ = JSR; *e++ = -1792474984;
  *e++ = ADJ; *e++ = 2;
  *e++ = MUL;
  *e++ = LEV;
//9: }
  *e++ = LEV;
//10: int main(){
//11:     printf("%d",power(2,3));
  *e++ = ENT; *e++ = 0;
  *e++ = IMM; *e++ = -1792212832;
  *e++ = PSH;
  *e++ = IMM; *e++ = 2;
  *e++ = PSH;
  *e++ = IMM; *e++ = 3;
  *e++ = PSH;
  *e++ = JSR; *e++ = -1792474984;
  *e++ = ADJ; *e++ = 2;
  *e++ = PSH;
  *e++ = PRTF;
  *e++ = ADJ; *e++ = 2;
//12:     return 0;
  *e++ = IMM; *e++ = 0;
  *e++ = LEV;
```
#include<stdio.h>
#include<math.h>
long long convert(int);
int main(){
    int number,bin;char in;float decimal;
    printf("Enter the Number to be coverted ");
    scanf("%d",&number);
    printf(" It will be converted to:\n1. octal 2. Hexadecimal 3. decimal 4. binary\n");
    printf("%o in Octal \n",number);
    printf("%x in Hexadecimal \n",number);
    decimal=number;
    printf("%.2f in decimal \n",decimal);
    bin = convert(number);
}
long long convert(int number) {
  long long bin = 0;
  int rem, i = 1;

  while (number!=0) {
    rem = number % 2;
    number /= 2;
    bin += rem * i;
    i *= 10;}
    printf("%d in Binary \n",bin);
  }

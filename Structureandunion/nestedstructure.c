#include<stdio.h>
#include<string.h>
typedef struct Sumit {
  int hand;
};
  struct Umang {
  int leg;
  double hairs;
};

int main () {
  struct Sumit Gazi;
  Gazi.hand =2;
  struct Umang Priyanshu; 
  Priyanshu.leg= 2;
  Priyanshu.hairs = 3456789012345;

  printf ("hand is: %d\t leg is: %d\t hairs is: %lf", Gazi.hand, Priyanshu.leg, Priyanshu.hairs);
  return 0;
}
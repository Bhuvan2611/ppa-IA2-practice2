#include <stdio.h>
int input(){
  int n;
  printf("enter the numbers\n");
  scanf("%d",&n);
  return n;
}
int g_cd(int a,int b){
  int gcd;
  if(a>b){
  for(int i=1;i<=a;i++){
    if(a%i==0&&b%i==0){
gcd=i;
    }
  }
}
if(b>a){
  for(int i=1;i<=a;i++){
    if(a%i==0&&b%i==0){
gcd=i;
    }
}
}
return gcd;
}
void output(int a,int b,int gcd){
printf("gcd is %d",gcd);
}
void main(){
  int a,b,gcd;
  a=input();
  b=input();
  gcd=g_cd(a,b);
  output(a,b,gcd);
}


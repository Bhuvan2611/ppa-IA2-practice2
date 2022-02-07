#include <stdio.h>
void input_number(){
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
}
int is_composite(int n){
  int count=0;
  for(int i=1;i<=n;i++){
    if(n%i==0){
count+=1;
    }
  }
  return count;
}
void output(int n,int composite){
  int count;
  if(count>2){
    printf("the number is composite");
  }
  else{
    printf("the number is not composite");
  }
  
}
void main(){
  int n,count;
  input_number();
  count=is_composite(n);
  output(n,count);
}
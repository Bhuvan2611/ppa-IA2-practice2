#include <stdio.h>
void input(){
  int n;
  printf("enter the size of an array\n");
  scanf("%d",&n);
}
void input_array(int n,int a[n]){
printf("enter the numbers");
for(int i=0;i<n;i++){
  scanf("%d",&a[i]);
}
}
int sum_composite(int n,int a[n]){
  int sum;
  for(int i=0;i<n;i++){
    for(int j=2;j<a[i];j++){
    if(a[i]%j==0){
sum+=a[i];
    }}}
    return sum;
}
void output(int sum){
  printf("the sum is %d",sum);
}
void main(){
  int n,sum;
  input();
  int a[n];
  input_array(n,a);
  sum=sum_composite(n,a);
  output(sum);

}
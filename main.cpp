#include <iostream>
using namespace std;
int main() {
  int a,b,c = 0;
  int arr[2] = {0, 0};
  cout <<" Милорд, введите первое, а затем второе число через пробел"<<endl;
  cin >> a >> b; 
  c=a;
  a=b;
  b=c;
  cout<< "первое число теперь = "<< a <<endl<< "второе число теперь = " << b<<endl<< "А теперь по другому"<<endl;
 
}

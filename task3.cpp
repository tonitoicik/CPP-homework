#include <iostream>
#include<stdlib.h>
using namespace std;
int main() {
  int x,y = 0;
  cout <<" Милорд, введите первое, а затем второе число через пробел"<<endl;
  cin >> x >> y; 
  swap(x,y);
  cout<< "первое число теперь = "<< x <<endl<< "второе число теперь = " << y<<endl;
}

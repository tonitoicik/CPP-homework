#include <iostream>
using namespace std;
int main() {
  int x,y = 0;
  cout <<" Милорд, введите первое, а затем второе число через пробел"<<endl;
  cin >> x >> y; 
    x = x + y;
    y = x - y;
    x = x - y;
  cout<< "первое число теперь = "<< x <<endl<< "второе число теперь = " << y<<endl;
}

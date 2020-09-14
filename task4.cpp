#include <iostream>
#include<stdlib.h>
using namespace std;
int main() {
  const string author = "tonitoicik";
  int x = 0;
  cout <<" Милорд, введите число "<<endl;
  cin >> x;
  if (x % 2 == 0) 
    {
      cout<<"Число чётное"<<endl;
    }
  else { cout<<"Число нечётное"<<endl;}
  cout<< "Made by " << author;
  
 

}

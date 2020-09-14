#include <iostream>
#include<stdlib.h>
using namespace std;
int main() {
  const string author = "tonitoicik";
  int arr[3]={0, 0 ,0};
  cout <<" Милорд, введите число "<<endl;
 for (int i=0; i<3; i++)
  {
    cin >> arr[i];
    if (arr[i] >= 1 & arr[i]<=3)
      {cout << arr[i]<<endl;}
  }
  cout<< "Made by " << author;
}

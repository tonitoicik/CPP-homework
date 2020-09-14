#include <iostream>
#include<stdlib.h>
using namespace std;
int main() {
  const string author = "tonitoicik";
  int arr[3]={0, 0 ,0};
  cout <<" Милорд, введите неотрицательное число "<<endl;
 for (int i=0; i<3; i++)
  {
    cin >> arr[i];
    if (arr[i] < 0 ) {cout<< "OSHIBKA"<<endl; break;}
  }
  if (arr[0]< arr[1]+arr[2] & arr[1]< arr[0]+arr[2] & arr[2]< arr[1]+arr[0]) { cout<<"Треугольник существует"<<endl;}
  cout<< "Made by " << author;
}

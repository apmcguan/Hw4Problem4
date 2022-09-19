#include <iostream>
#include <cmath>

using namespace std;


int main() {
  int N, l, sum;
  sum = 0;
  cin >> N;
  if ((N >0 ) && ( N <=100))
    {
     for (int i=0; i< N; i++)
       {
         cin>> l;
         sum +=l;
         
       }
    N = N - 1;
      sum =sum - N;
      cout << sum << endl;
    }
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main() {
  int X=0, Y=0;

  cin >> X;
  cin >> Y;

  if(X < Y) {
      for (int i = X+1; i < Y; ++i) {
            if(i%5 == 2 ||i%5 == 3)
            {
                cout << i << endl;
            }
      }
  }
  else
      {
        for (int i = Y+1; i < X; ++i) {
            if(i%5 == 2 ||i%5 == 3)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}

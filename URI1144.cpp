#include <iostream>
#include <cstdio>

using namespace std;

int main() {
   int n=0;

   cin >> n;

   for(int a = 1; a <= n ; a++) {
       printf("%d %d %d\n", a, (a * a), (a * a * a));
       printf("%d %d %d\n", a, (a * a)+1, (a * a * a)+1);
   }

    return 0;
}

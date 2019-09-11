#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <cstring>

using namespace std;

int main() {
   double Xf, Yf, Xi, Yi, Vi, R1, R2, A, B, dist=0;

   while(cin >> Xf >> Yf >> Xi >> Yi >> Vi >> R1 >> R2){
       A = pow(Xi-Xf,2);
       B = pow(Yi-Yf,2);

       dist = sqrt(A+B);
       dist+= Vi*1.5;
       
       if(dist > R1+R2){
           cout << "N" << endl;
       } else{
           cout << "Y" << endl;
       }
       dist=0.0;
   }

    return 0;
}

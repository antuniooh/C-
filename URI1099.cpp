#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n=0,x=0,y=0,soma=0;

    cin >>n;

    for(int a = 1; a <= n; a++)
    {
        cin >> x >> y;
        if(x==y){
            soma=0;
            printf("%d\n",soma);
        }
        else if(x<y)
        {
            for(int b = x+1; b < y; b++)
            {
                if(b%2==1||b%2==-1)
                    soma+=b;
            }
            printf("%d\n",soma);
            soma=0;
        }
        else
        {
            for(int c = y+1; c < x; c++)
            {
                if(c%2==1||c%2==-1)
                    soma+=c;
            }
            printf("%d\n",soma);
            soma=0;
        }
    }
    return 0;
}

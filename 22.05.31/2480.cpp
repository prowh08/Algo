#include <iostream>

using namespace std;

int main()
{
    int a,b,c,max;
    cin >> a >> b >> c;
    
    if(a==b && b==c){
        cout << 10000+a*1000;
    }
    else if(a==b || b==c || c==a){
        if(a==b || a==c)
            cout << 1000+ a*100;
        else
            cout << 1000+ b*100;
    }
    else{
        max = a;
        if(b>a && b>c)
            max = b;
        else if(c>a && c>b)
            max = c;
        cout << max*100;
    }
}
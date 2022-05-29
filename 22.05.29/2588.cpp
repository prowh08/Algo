#include <iostream>
using namespace std;

int main(){
    int a,b;
    int n;
    cin >> a;
    cin >> b;

    n = b%10;
    cout << a*n<<endl;
    cout << a*(((b%100)-n))/10<<endl;
    cout << a*(b/100)<<endl;
    cout << (a*n)+(a*((b%100)-n))+(a*(b/100)*100);
}
#include <iostream>
#include <cstdio>
using namespace std;

void gr(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    
    if (a>b && a>c && a>d) {
    cout<<a;
    }
    else if (b>c && b>d) {
    cout<<b;
    }
    else if (c>d) {
    cout<<c;
    }
    else {
    cout<<d;
    }
}


int main() {
    
    
    gr();
    
    
    
    return 0;
}
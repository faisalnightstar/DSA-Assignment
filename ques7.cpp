#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
    cin>>a>>b;
    
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    
    char a1=a[0];
    char a2=b[0];
    a[0]=a2;
    b[0]=a1;
    
    cout<<a<<" "<<b<<endl;
    
  
    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    int a;
    cin>>a;
    
    if (a>=1 && pow(10,9)) {
        if (a<=9) {
            if (a==1) {
                cout<<"one";
                }
    
                else if (a==2) {
                cout<<"two";
                }
    
                else if (a==3) {
                cout<<"three";
                }
                
                else if (a==4) {
                cout<<"four";
                }
                
                else if (a==5) {
                cout<<"five";
                }
                
                else if (a==6) {
                cout<<"six";
                }
                
                else if (a==7) {
                cout<<"seven";
                }
                
                else if (a==8) {
                cout<<"eight";
                }
                
                else {
                cout<<"nine";
                }
            }
            
        else {
        cout<<"Greater than 9";
        }
    
    }
    
    

    return 0;
}
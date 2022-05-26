#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string reverseString(string c)
{
 
   
    reverse(c.begin(), c.end());
 
    c.insert(c.end(), ' ');
 
    int d = c.length();//panjang ukuran string
    int j = 0;
 
    for (int i = 0; i < d; i++) {
 
        if (c[i] == ' ') {
            reverse(c.begin() + j,
                    c.begin() + i);
            j = i + 1;
        }
    
    }
 

    return c;
}

int main(){

    string a ;
    getline(cin, a);

    string d = reverseString(a);

    cout << d;
    return 0;  

   
}

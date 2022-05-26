#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
char A [ ] = "tebak aku ";
 int n = strlen(A);
 reverse(A, A+5);
 cout<< A <<endl;
 return 0;
 }
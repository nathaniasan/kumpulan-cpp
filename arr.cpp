#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;


int main(){
	char str[] = "Rara ruri rira";
	int i = 0;
	while(true){
		if (str[i]== '\0')
		{
			break;
		}
		else
		{
			if (str[i] == 'R' || str[i]  == 'r')
			{
				str [i] ='Z';
			}
		}
		i++;
	}
	cout<<str<<endl;
}
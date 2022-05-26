#include <iostream>
using namespace std;

class E
{
public:
    struct X
    {
        int v;
    };

    // 1. (a) Instantiate an 'X' within 'E':
    X x;
};

int main()
{
    // 1. (b) Modify the 'x' within an 'E':
    E e;
    e.x.v = 9;

    // 2. Instantiate an 'X' outside 'E':
    E::X x;
    x.v = 10;

	cout << x.v <<endl;
	cout << e.x.v 
}

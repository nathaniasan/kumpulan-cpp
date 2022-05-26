// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){ 
//     stack<int> St1 ; //St1 is declared a stack of integers
//         for ( int i =1; i< 7; i++) // construction by push function
//         St1.push (10* i);

//         cout <<"Top element of St1 = " <<St1.top() <<endl;
//         cout<<"Size of stack St1 is = " << St1.size() <<endl;
//         cout<<"Elements of St1 are: ";

//     while(!St1.empty()) // output statement for stack elements
//     {
//         cout<<St1.top()<<" " ;

//         St1.pop() ; } // remove the top element
// }


#include<iostream>
#include<queue>
using namespace std;
int main()
 {
 priority_queue <int> antrian ;
 int Array[6] = { 10, 80, 90, 20, 40,70};
    for ( int i =0; i<6; i++)
    antrian.push (Array[i]);

        cout<< "Angka paling atas = " <<antrian.top()<<endl;
        cout<< "Jumlah data dalam antrian = " << antrian.size() <<endl;
        cout<<"Elements of antrian are: ";

    while(!antrian.empty())
    {
        cout<<antrian.top()<<" " ;
        antrian.pop() ; }

}

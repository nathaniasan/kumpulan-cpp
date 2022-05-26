#include <iostream>
using namespace std;

class CnA{
    public:
    string statement, answer;
    void print(){
        int a = 0, 
        n = statement.length();
        answer.insert(answer.end(),' ');
        for(int i = 0; i < n; i++){
            a++;
            if(statement[i]==' '){
                break;
            }
        }
        cout << statement << endl;
        cout << statement.insert(a, answer);
    }
};

int main(){
    CnA a;
    getline(cin, a.statement);
    getline(cin, a.answer);
    a.print();
}
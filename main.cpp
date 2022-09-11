#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class B
{
    int x;
public:
    B(int n) : x(n){};
    void print() const {cout << "x = " << x << endl;}
};
class A
{
    vector<B> mB;
public:
    A(initializer_list<B> list): mB(list) {};
    auto begin(){return this->mB.begin();}
    auto end(){return this->mB.end();}
};

int main() {

    cout << "---Initializer_list/for_auto---" << endl;
    auto A1 = A{1,2,3,4,5};

    for(const auto &b:A1)
        b.print();

    cout << "---Bye, bye!---" << endl;
    return 0;
}

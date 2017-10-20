#include <iostream>
using namespace std;

template<typename tmpl>
class Template
{
public:
    Template();
    tmpl a;
    void func(tmpl);
};
template<typename tmpl> Template<tmpl>::Template()
{
    cout << "Template structure function" << endl;
}
template<typename tmpl> void Template<tmpl>::func(tmpl x)
{
    x *= 10;
    cout << "x=" << x <<endl;
}
template<typename in> in returnNum(in x)
{
    return x;
}

int main(int arg,char* args[])
{
    Template<double> tmp;
    tmp.func(returnNum(9.1));
    return 1;
}
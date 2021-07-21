#include<iostream.h>
using namespacestd;

template <classtype1,classtype2>
void myfunc(type1 x,type2 y)
{
    cout<<x<<''<<y<<'\n';
}
int main()
{
    myfunc(10,"I Like C++");
    myfunc(98.6,19L);
    return 0;
}

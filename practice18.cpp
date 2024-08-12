// PROTECTED ACCESS MODIFIER



/*
                       public derivation     protected derivation         private derivation 
                
public member          public                protected                     private

protected member       protected             protedcted                    private

private memebr         not inherited         not inherited                 not inherited

*/

#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    private:
    int b;
    public:
    int c;
};
class derived:protected base
{

};
int main()
{
    base b;
    derived d; 
    //cout<<d.a<<endl;  // no access
    //cout<<d.b<<endl; // no access
    //cout<<d.c<<endl; // access when base is public
    return 0;
}

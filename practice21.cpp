// CALCULATOR
#include<iostream>
#include<math.h>
using namespace std;
class SimpleCalculator
{
    int a,b;
    public:
    SimpleCalculator()
    {
        int a1,b1;
        a=a1;
        b=b1;
    }
    int sum(int a1, int b1)
    {
        return a1+b1;
    }
    int sub(int a1, int b1)
    {
        return a1-b1;
    }
    int multi(int a1, int b1)
    {
        return a1*b1;
    }
    int div(int a1, int b1)
    {
        return a1/b1;
    }

};
class ScientificCalculator
{
    int c,d;
    public:
    ScientificCalculator()
    {
        int c1,d1;
        double c2,d2;
        c=c1;
        d=d1;
        c=c2;
        d=d2;
    }
    double power(double c2,double d2)
    {
        return pow(c2,d2);
    }
    int fact(int c1)
    {
        if(c1>1)
       {
         return c1*fact(c1-1);
       }
       else{return 1;}
    }
    double sqroot(double c1)
    {
        return sqrt(c1);
    }

};
class HybridClaculator:public ScientificCalculator,public SimpleCalculator
{

};
int main()
{
    SimpleCalculator Si;
    ScientificCalculator Sc;
    HybridClaculator H;
    int choice,ch,m,n,flag;
    double p,q;
    do
    {
        flag:
        cout<<"Which calculator do you want to use?"<<endl;
        cout<<"1.Simple\n2.Scintific\n3.Hybrid\n4.exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                do
                {
                    cout<<"What do you want to do?"<<endl;
                    cout<<"1.Add\n2.Substract\n3.Multiply\n4.Divide\n5.exit"<<endl;
                    cin>>choice;
                    switch(choice)
                    {
                        case 1:
                        cout<<"Enter first number:"<<endl;
                        cin>>m;
                        cout<<"Enter second number:"<<endl;
                        cin>>n;
                        cout<<Si.sum(m,n)<<endl;
                        break;
                        case 2:
                        cout<<"Enter first number:"<<endl;
                        cin>>m;
                        cout<<"Enter second number:"<<endl;
                        cin>>n;
                        cout<<Si.sub(m,n)<<endl;
                        break;
                        case 3:
                        cout<<"Enter first number:"<<endl;
                        cin>>m;
                        cout<<"Enter second number:"<<endl;
                        cin>>n;
                        cout<<Si.multi(m,n)<<endl;
                        break;
                        case 4:
                        cout<<"Enter first number:"<<endl;
                        cin>>m;
                        cout<<"Enter second number:"<<endl;
                        cin>>n;
                        cout<<Si.div(m,n)<<endl;
                        break;
                        case 5:
                            goto flag;
                            break;
                        default:
                            cout<<"Invalid Input !!!"<<endl;
                            break;
                    }
                } while (true);
                break;
            case 2:
                do
                {
                    cout<<"What do you want?"<<endl;
                    cout<<"1.Power\n2.Factorial\n3.Square root\n4.Exit"<<endl;
                    cin>>choice;
                    switch (choice)
                    {
                        case 1:
                        cout<<"Enter the number:"<<endl;
                        cin>>p;
                        cout<<"Enter the power:"<<endl;
                        cin>>q;
                        cout<<Sc.power(p,q)<<endl;
                        break;
                        case 2:
                        cout<<"Enter the number:"<<endl;
                        cin>>m;
                        cout<<Sc.fact(m)<<endl;
                        break;
                        case 3:
                        cout<<"Enter the number:"<<endl;
                        cin>>p;
                        cout<<Sc.sqroot(p)<<endl;
                        break;
                        case 4:
                        goto flag;
                        break;
                        default:
                        cout<<"Invlid Input !!!"<<endl;
                        break;
                    }
                } while (true);
            case 3:
                    do
                {
                    cout<<"What do you want to do?"<<endl;
                    cout<<"1.Add\n2.Substract\n3.Multiply\n4.Divide\n5.Power\n6.Factorial\n7.Square root\n8.Exit"<<endl;
                    cin>>choice;
                    switch(choice)
                    {
                        case 1:
                        cout<<"Enter first number:"<<endl;
                        cin>>m;
                        cout<<"Enter second number:"<<endl;
                        cin>>n;
                        cout<<H.sum(m,n)<<endl;
                        break;
                        case 2:
                        cout<<"Enter first number:"<<endl;
                        cin>>m;
                        cout<<"Enter second number:"<<endl;
                        cin>>n;
                        cout<<H.sub(m,n)<<endl;
                        break;
                        case 3:
                        cout<<"Enter first number:"<<endl;
                        cin>>m;
                        cout<<"Enter second number:"<<endl;
                        cin>>n;
                        cout<<H.multi(m,n)<<endl;
                        break;
                        case 4:
                        cout<<"Enter first number:"<<endl;
                        cin>>m;
                        cout<<"Enter second number:"<<endl;
                        cin>>n;
                        cout<<H.div(m,n)<<endl;
                        break;
                        case 5:
                        cout<<"Enter the number:"<<endl;
                        cin>>p;
                        cout<<"Enter the power:"<<endl;
                        cin>>q;
                        cout<<H.power(p,q)<<endl;
                        break;
                        case 6:
                        cout<<"Enter the number:"<<endl;
                        cin>>m;
                        cout<<H.fact(m)<<endl;
                        break;
                        case 7:
                        cout<<"Enter the number:"<<endl;
                        cin>>p;
                        cout<<H.sqroot(p)<<endl;
                        break;
                        case 8:
                        goto flag;
                        break;
                        default:
                        cout<<"Invlid Input !!!"<<endl;
                        break;
                    }
                } while (true);
                break;
            case 4:    
                exit(0);
            default:
                cout<<"Invlid Input !!!"<<endl;
                break;
        }
    } while (true);
    
    return 0;
}
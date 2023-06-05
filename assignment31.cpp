//pointer concept
/*#include<iostream>
using namespace std;
class demo
{
    int num;
    public:
    void setdata(int v)
    {
        num=v;
    }
    demo(){}
    demo * operator=(demo v)
    {
        return this;
    }
};
int main()
{
    demo d,d1;
    demo *d3;
    d.setdata(5);
    d3=d=d1;
}*/



//Vactor concept...............................
/*#include<iostream>
using namespace std;
class abc
{
    int x;
    public:
    abc(int a)
    {
        cout<<"parameterized constructor call\n";
        x=a;
        showdata();
    }
    void showdata()
    {
        cout<<"x==>"<<x<<"\n";
    }
};
class list{

    int x;
    const int y;//value fix rehse bdha object mate
    const int c=10;
    int &z;
    abc a1;
    public:
    list(int x,int y):x(x),y(y),z(y),a1(45)//const ni value change thase
    //y(printf("first \n")),x(printf("second\n"))//x(a),y(x)////
    {
        //y=b;wrong
        //z=b;wrong
        //a1=5;wrong
    }
    void showdata()
    {
        cout<<"x = :"<<x<<" y = :"<<y<<" z = :"<<z<<" c =: "<<c<<"\n";
    }
};
int main()
{
    list l(4,9);
    list l2(4,7);
    l.showdata();
    l2.showdata();
}*/


//pointer concept

/*#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
        void setdata(int real,int img)
        {
            
           this->real=real;
            this->img=img;
        }
        void showdata()
        {
            cout<<"real -->"<<real<<"img -->"<<img<<"\n";
        }
        complex  sumgrater(complex c1)
        {
           if ((real+img)>(c1.img+c1.real))
           {
                return *this;
           }
           else
           {
                return c1;
           }


        }
};
void inputdata(complex * p)
{
    int x,y;
    cout<<"enter two numbwer";
    cin>>x>>y;
    p->setdata(x,y);
}
int main()
{
    complex c,c2,c3;
    inputdata(&c);
    c.showdata();
    c2.setdata(5,7);
    c3=c.sumgrater(c2);//sum  of both variable is grater
}*/
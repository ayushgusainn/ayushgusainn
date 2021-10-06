#include<iostream>
using namespace std;

class base
{

private:
int y;

public:
int x;
void setdata(int a)
{
y = a;
}

void display()
{

cout<< "pub value of x is:"<<x<<endl;
cout<< "priv value of y is :"<<y<<endl;
}

};

int main()
{
base obj, deepak;
obj.x=56;
obj.setdata(78);
obj.display();

deepak.x=36;
deepak.setdata(60);
deepak.display();



return 0;
}

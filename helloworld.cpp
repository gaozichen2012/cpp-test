#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Box
{
public:
    double length;  // 长度
    double breadth; // 宽度
    double height;  // 高度

    //默认的构造函数没有任何参数，但如果需要，构造函数也可以带有参数。这样在创建对象时就会给对象赋初始值
    Box(double length, double breadth, double height);// 这是构造函数声明
    ~Box();

    //成员函数可以定义在类定义内部，或者单独使用范围解析运算符::来定义。
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
    double getVolume1(void);

    //在类定义中定义的成员函数把函数声明为内联的，即便没有使用inline标识符。
    double getVolume2(void)
    {
        return length * breadth * height;
    }
};

//在::运算符之前必须使用类名。
Box::Box(double leng, double bread, double heig)
{
    cout << "Object is being created" << endl;
    length = leng;
    breadth = bread;
    height = heig;
}

Box::~Box(void)
{
    cout << "Object is being deleted" << endl;
}

void Box::setLength(double len)
{
    length = len;
}

void Box::setBreadth(double bre)
{
    breadth = bre;
}

void Box::setHeight(double hei)
{
    height = hei;
}

double Box::getVolume1(void)
{
    return length * breadth * height;
}

int main()
{
    Box Box1(1,2,3);
    double volume = 0.0;
    char name[50];

    // vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    volume = Box1.getVolume1();
    cout << "Box1 default getVolume1 = " << volume << endl;
    Box1.setLength(2);
    Box1.setBreadth(4);
    Box1.setHeight(6);
    volume = Box1.getVolume1();
    cout << "Box1 getVolume1 = " << volume << endl;
    volume = Box1.getVolume2();
    cout << "Box1 getVolume2 = " << volume << endl;

    // for (const string &word : msg)
    // {
    //     cout << word << " ";
    // }
    // cout << endl;

    cout << "please your name: ";
    cin >> name;
    cout << "your name is " << name << endl;
}

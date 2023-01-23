/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/


#include <iostream>
using namespace std;
class Oval{
    int width;
    int height;
    public:
    Oval(int width, int height);
    Oval(); //너비와 높이를 1로 초기화하는 생성자
    ~Oval();
    int getWidth();
    int getHeight();
    void set(int width, int height);
    void show();
};

Oval::Oval(){
    width = 1;
    height = 1;
}

Oval::Oval(int width, int height){
    this->width=width;
    this->height=height;
}

Oval::~Oval(){
    cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;  
}

int Oval::getWidth(){
    return width;
}

int Oval::getHeight(){
    return height;
}

void Oval::set(int width, int height){
    this->width=width;
    this->height=height;
}

void Oval::show(){
    cout << "width = " << width << ", height = " << height << endl;
}



int main()
{
    Oval a, b(3,4);
    a.set(10,20);
    a.show();
    cout << b.getWidth() << "," << b.getHeight() << endl;
    return 0;
}




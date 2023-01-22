/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random{
  
  public:
  Random();
  int next();
  int nextInRange(int num1,int num2);
};

Random::Random(){
    srand((unsigned)time(0));
}
int Random::next(){
   
    int n=rand();
    return n;
}

int Random::nextInRange(int a, int b){
    int n=rand()%(b-a+1)+a;
    return n;
}

int main()
{
    Random r;
    cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수10개--" << '\n';
    for(int i=0; i<10; i++){
        int n=r.next(); //0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << '\n' << '\n' << "--2에서 " << "4 까지의 랜덤 정수 10개 --" << '\n';
    for(int i=0; i<10; i++){
        int n=r.nextInRange(2,4);//2에서4사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << '\n';
    return 0;
}
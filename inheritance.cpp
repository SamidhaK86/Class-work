#include<iostream>
using namespace std;
class Calculator{
    public:
    int n1, n2, sum;
    void add(int num1,int num2){
        n1=num1;
        n2=num2;
        sum=n1+n2;
        cout<<sum<<endl;
    }
};

class Calculation:public Calculator{
    public:
    int num,number,diff;
    void subtract(int a,int b){
        num=a;
        number=b;
        diff=a-b;
        cout<<diff<<endl;

    }
};

int main(){
    Calculation c;
    int number1,number2,number3,number4;
    cin>>number1>>number2>>number3>>number4;
    c.add(number1,number2);
    c.subtract(number3,number4);
    return 0;
}

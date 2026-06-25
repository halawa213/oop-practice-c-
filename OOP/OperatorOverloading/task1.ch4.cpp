#include<iostream>
using namespace std;
class operations{
private:
int value;
public:
operations() : value(0){}
operations(int val) : value(val){} 

void showResult();

operations operator+(operations ob);
operations operator-(operations ob);
void operator++();
void operator--();
void operator++(int);
void operator--(int);
};
operations operations :: operator+(operations ob){
    operations adder(value+ob.value);
    return adder;
}
operations operations :: operator-(operations ob){
    operations minus(value-ob.value);
    return minus;
}
void operations :: operator++(){
    ++value;
}
void operations :: operator--(){
    --value;
}
void operations :: operator++(int){
    value++;
}
void operations :: operator--(int){
    value--;
}
void operations :: showResult(){
    cout<<"result: "<<value<<endl;
}
int main(){
    operations a(10); 
    operations b(5); 
    ++a;
    ++b;
    a++;
    b++;
    a--;
    b--;
    --a;
    --b;
    operations c = a + b ;
    a.showResult();
    b.showResult();
    c.showResult();
}
// #include<iostream>
// using namespace std; 

//using normal function technique 
// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcAverage2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// using function template 

// template<class T1, class T2>
// float funcAverage(T1 a, T2 b){
//      float avg = (a+b)/2.0;
//      return avg;
// }

// template<class T>
// void swapnum(T &a,T &b){
//     T temp = a;
//     a = b;
//     b = temp;
// }
// int main(){
//     float a,b,c;
//     // // for funcAverage
//     // a = funcAverage(4,7);
//     // printf("the average of these numbers is %.3f\n",a); // will print upto 3 decimal places 
//     // // for funcaverage2
//     // b = funcAverage2(3,4.5);
//     // printf("the average of numbers is: %.3f\n",b);
//     // return 0;

//     // for template
//     // c =funcAverage(5,2);
//     // printf("the average of these numbers is: %.3f\n",c);

//     // for swap case 
//     int x = 3,y = 4;
//     cout<<"value of x before swap is: "<<x<<endl;
//     cout<<"value of y before swap is: "<<y<<endl;
//     swapnum(x,y);
//     cout<<"now value of x is: "<<x<<endl;
//     cout<<"now value of y is: "<<y<<endl;

// }


// member function and function template overloading 
#include<iostream>
using namespace std; 

template<class T>
class Vasu{
    public:
        T data;
    Vasu(T a){
        data = a;
    }
    void display();
};

template<class T>   
void Vasu <T> :: display(){  // defining the function outside the class 
        cout<<data<<endl;
    }

void func(int a){
    cout<<"I am first func"<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"this is template func "<<a<<endl;
}
int main(){
    // Vasu <char> V1('r');
    // V1.display();
    // Vasu <int> V2(100);
    // V2.display();

    func(100);  // it will call that function which has exact match i.e function with same syntax has highest priority 
    func1(200);
    return 0;
}
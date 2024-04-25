/* syntax for templates with multiple parameters 
template<class T1, class T2>
class nameofclass{
    // code
}
*/

// #include<iostream>
// using namespace std; 

// template<class T1, class T2>  // means we will declare the data types after making the object of the class 
// class Myclass{
//     public:
//         T1 data1;
//         T2 data2;
    
//     Myclass(T1 a, T2 b){
//         data1 = a;
//         data2 =b;
//     }
//     void display(){
//         cout<<this->data1<<endl<<this->data2;
//     }
// };
// int main(){
//     Myclass <int,float> obj1(1,10.06); // <> can be varies according to the using 
//     obj1.display();
//     return 0;
// }

//-------------------------------------------------------

#include<iostream>
using namespace std; 

template <class T1 = int, class T2 = float , class T3 = char>
class Vasu{
    public:
        T1 a;
        T2 b;
        T3 c;
        Vasu(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }

        void display(){
            cout<<"the value of a is: "<<a<<endl;
            cout<<"the value of b is: "<<b<<endl;
            cout<<"the value of c is: "<<c<<endl;
        }
};
int main(){
    // without specifing datatypes 
    Vasu <> V(100,20.6,'g');
    V.display(); // will display a->100 , b->20.6, c->g
   
    // with data specifier 
    Vasu <char,int,float>V1('k',200,10.6);
    V1.display(); // will display a->k , b->200 , c->10.6 (irrespective of the given default parameters)
    return 0;
}

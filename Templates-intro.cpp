/* why to use template -
1) A class is being made once , and then for different data types automatically different classes will be made rather than making it idividually different
2) A code has 1 template, and using that one template we can use it for different data types and will behave same as defined other classes 
3) Also called parameterised class 
4) Do not violates DRY(do it yourself) principle.
5) Generic programming 
*/

/* syntax - represent many classes 
template <class T>
class vector{
    T*arr; -> an array of type of desired data type ( T can be int, float , string , etc)
    public:
        vector(T*ar){
            // code
        }
        and many other methods 
};

int main(){
    vector <int> myIntVec(ptr1);
    vector <float> myFloatVec(ptr2);
}

*/

#include<iostream>
using namespace std; 
template <class T> // wherever we use T, it acts as a variable and we will define it later 
// we pass dataype as a variable that means what datattype we need to use i will define it later 
class Vector{
    int size;
    public:
    T * arr; // integer pointer
        Vector(int m){  // constructor 
            size = m;
            arr = new T[size];
        }
        T dotproduct(Vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d+=this->arr[i] * v.arr[i];
            }
        return d;
            
        }
};
int main(){
    // Vector V1(3);
    // V1.arr[0]=4;
    // V1.arr[1]=3;
    // V1.arr[2]=1;

    // Vector V2(3);
    // V2.arr[0]=1;
    // V2.arr[1]=0;
    // V2.arr[2]=1;
    // int a = V1.dotproduct(V2);
    // cout<<a<<endl;

    Vector <float>V1(3);
    V1.arr[0]=1.4;
    V1.arr[1]=3.3;
    V1.arr[2]=0.1;

    Vector <float>V2(3);
    V2.arr[0]=0.1;
    V2.arr[1]=1.90;
    V2.arr[2]=4.1;
    float a = V1.dotproduct(V2);
    cout<<a<<endl;
    return 0;
}
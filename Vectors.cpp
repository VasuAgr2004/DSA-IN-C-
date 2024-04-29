// vector can resize its storage 
#include<iostream>
#include<vector> // to use vector 
using namespace std; 

template<class T>
void display(vector <T> &v){
    for (int i = 0; i < v.size(); i++)  // size of the storage container 
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // ways to create a vector 
    vector <int> vec1;  // zero length integer vector 
    cout<<"displaying this vector"<<endl;
    vector <char> vec2(4);  // 4 element character vector 
    vector <char> vec3(vec2);  // 4 element character vector from vec2
    vector<int> vec4(6,3); // 6 element vector of 3's  
    
    // vec2.push_back('6');
    // display(vec1); // will display nothing 
    // display(vec2); // willl display 6 
    // display(vec3); // also will display nothing as it is just created from vec2
    display(vec4); // 6 times displaying 3 


    int element,size = 5;
    // cout<<"enter the size of the container: "<<endl; // to ask user the container size 
    // cin>>size;
    // // using push_back function 
    // for (int i = 0; i < size; i++)
    // {   
    //     int element;
    //     cout<<"enter element: "<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // using pop function
    // vec1.pop_back(); // will take out an element from last 
    // display(vec1);

    // //using insert function
    // vector <int> :: iterator iter = vec1.begin(); // to make iter this is the syntax 
    // vec1.insert(iter+1,2, 200);  // we will use iter here --> will insert at 1st index, and 2 times 200 
    // display(vec1);
    
    return 0;
}
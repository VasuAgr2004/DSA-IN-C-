// another container to store data 
// a bidirectional linear list which shows insertion deletion operations faster 
// when to use - insertion deletion at middle to be faster 
// when to use array - when you need faster access of the data 

#include<iostream>
#include<list> // to use list 
using namespace std; 

void display(list <int> &lst){  // function to display the elements 
    list<int> ::iterator it;  // made an iterator which will iterate through the list 
    for (it = lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list <int> l1; // list of zero length  
    l1.push_back(5);    
    l1.push_back(7);    
    l1.push_back(1);    
    l1.push_back(9);    
    l1.push_back(12);

    display(l1);  // function calling which will display the list 
    
    // to pop an element from last 
    // l1.pop_back();
    // display(l1);
    // l1.pop_front();
    // display(l1);
    // l1.remove(7);
    // display(l1);

    // to sort a list 
    l1.sort();  // sorts the list in ascending order 
    display(l1);

    // reversing the list 
    cout<<"reversing the list......"<<endl;
    l1.reverse();
    display(l1);

    list<int> l2(5); // empty list of size 7
    list<int> ::iterator iter;
    iter = l2.begin();
    
    *iter = 45; //inserted element 45 in the first position 
    iter++;
    *iter = 46; //inserted element 46 in the second position 
    iter++;
    *iter = 47; //inserted element 47 in the third position 
    iter++;
    *iter = 48; //inserted element 48 in the fourth position 
    iter++;
    *iter = 49; //inserted element 49 in the fifth position 
    iter++;
    display(l2);

    // to merge 2 lists
    cout<<"merging 2 lists ............"<<endl;
    l1.merge(l2);
    display(l1);
    return 0;
}
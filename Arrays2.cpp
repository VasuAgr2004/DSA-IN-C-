#include<iostream>
#include<array>
#include<set>
#include<vector>
using namespace std; 

// to rotate the array to left by 1 place 

// int main(){
//     array <int,5> arr = {1,2,3,4,5};
//     int temp = arr[0];
//     int size = arr.size();
//     for(int i=1;i<arr.size();i++){
//         arr[i-1] = arr[i];
//     }
//     arr[size-1] = temp;
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// ----------------------------------------------------------
// to rotate array by d places 

// void rotationArray(int arr[], int n, int d){
//     d = d % n; // to deduce to >n i.e it will start repeating itself 
    
//     // storing to temp 
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i] = arr[i];
//     }

//     //shifting of other than dth idex elements 
//     for(int i = d;i<n;i++){
//         arr[i-d] = arr[i];
//     }

//     // replacing last places with d elements 
//     for(int i=n-d;i<n;i++){
//         arr[i] = temp[i-(n-d)];
//     }
// }

// int main(){
//     // initial inputs 
//     int n;
//     cout<<"enter the size of arrray: "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int d;
//     cout<<"enter the d value: "<<endl;
//     cin>>d;

//     // calling of the function
//     rotationArray(arr,n,d);

//     // to print the array
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// -------------------------------------------------------
// to store non zero numbers at the end of an array 

// int main(){
//     array <int,10> arr = {1,0,2,3,2,0,0,4,5,1};
//     cout<<"array before end zeroes----------"<<endl;
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int j =-1;
//     for(int i=0;i<arr.size();i++){
//         j = i;
//         break;
//     }
//     for(int i=j+1;i<arr.size();i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
//     cout<<"array after  end zeroes----------"<<endl;
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// ------------------------------------------------------------
// linear search 

// int main(){
//     array<int,5> arr = {1,2,3,4,5};
//     int num = 5;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i] ==num){
//             cout<<"numnber present at index: "<<i<<endl;
//         }
//     }
// }

// -------------------------------------------------------------
// move all zeroes to the end 

// int main(){
// array <int,10> arr = {1,0,2,3,2,0,0,4,5,1};
// int j = -1;
// for(int i=0;i<arr.size();i++){
//     if(arr[i] == 0){
//         j = i;
//         break;
//     }
// }
// for(int i = j+1;i<arr.size();i++){
//     if(arr[i] != 0){
//         swap(arr[i],arr[j]);
//         j++;
//     }
// }
// for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// }

// ----------------------------------------------------------------
// find union of 2 arrays 

// int main(){
// array <int,6> arr1={1,1,2,3,4,5};
// array <int,5> arr2={2,3,4,4,5};

// int i=0;
// int j=0;
// vector <int> unionarr;
// while(i<arr1.size() && j<arr2.size()){
//     if(arr1[i]<=arr2[i]){
//         if(unionarr.back() != arr1[i]){
//             unionarr.push_back(arr1[i]);
//         }
//         i++;
//     }else{
//        if(arr2[i]<arr1[i]){
//             if(unionarr.back() != arr2[j]){
//             unionarr.push_back(arr2[j]);
//         }
//         j++;
//        }
//     }
// }
// while(j<arr2.size()){
//     if(arr2[i]<arr1[i]){
//             if(unionarr.back() != arr2[j]){
//             unionarr.push_back(arr2[j]);
//     }
//     j++;
//     }
//     while(i<arr1.size()){
//         if(arr1[i]<=arr2[i]){
//         if(unionarr.back() != arr1[i]){
//             unionarr.push_back(arr1[i]);
//         }
//         i++;
//     }
// }
// }
// // to print unin array 
// for(int i=0;i<unionarr.size();i++){
//     cout<<unionarr[i]<<" ";
// }
// cout<<endl;
// }


// -------------------------------------------------------------------------------
// to find intersection of 2 arrays 

// int main(){
// array <int,6> arr1={1,1,2,3,4,5};
// array <int,5> arr2={2,3,4,4,5};

// int i=0;
// int j=0;
// vector <int> answer;
// while(i<arr1.size() && j<arr2.size()){
//     if(arr1[i]<arr2[i]){
//         i++;
//     }else if (arr2[i]<arr1[i]){
//         j++;
//     }else{
//         answer.push_back(arr1[i]);
//         i++;
//         j++;
//     }
// }
// // to print 
// for(int i=0;i<answer.size();i++){
//     cout<<answer[i]<<" ";
// }
// cout<<endl;
// }

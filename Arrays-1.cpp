#include<iostream>
#include<array>
#include<Set>
using namespace std; 

// ------------------------------------------------------------------------------------------------------------
// to find the greatest element in the array 

// int main(){
//    array<int,6> arr = {100,60,12,1,15,30};
//    int largest = arr[0];
//     for(int i=1; i < arr.size();i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//         }
//     cout<<" largest element of the array is: "<<largest<<endl;
//     }

// ----------------------------------------------------------------------------------------------------------
// to find second largest element of the array 

// int main(){
//     array<int,5> arr = {1,40,89,25,100};
//     int largest = arr[0];
//     int second_largest = -1;
//     for(int i=1;i< arr.size();i++){
//         if(arr[i]>largest){
//             second_largest = largest;
//             largest = arr[i];
//         }else if(arr[i]<largest && arr[i]>second_largest){
//             second_largest = arr[i];
//         }
//     }
//     cout<<"second largest element is: "<<second_largest<<endl;
// }

//--------------------------------------------------------------------------------------------------------------
//  to check if the array is sorted or not 

// int main(){
//     array <int,5> arr = {1,5,2,3,6};
//     for(int i =0;i< arr.size();i++){
//         if(arr[i]>=arr[i-1]){
//         }else{
//             return false;
//         }
//     } return true;
// }

// -------------------------------------------------------------------------------------------------------------
// to remove duplicates from sorted array and return number of elements 

// int main(){
// array<int,7> arr = {1,2,2,3,4,4,5};
// int i = arr[0];
// for(int j = 1;j<arr.size();j++){
//     if(arr[i] != arr[j]){
//         arr[i+1] = arr[j];
//     }
// }
// cout<<"number of unique elements: "<<i<<endl;
// }

// --------------------------------------------------------------------------------------------------------------

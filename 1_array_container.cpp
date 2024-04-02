#include<bits/stdc++.h>
using namespace std;
array<int,5>arr2;//in this declaration all values are intialised to 0 according to the length;
int main(){
    
int arr1[1000]={0};
array<int,5>arr;//this declaration is container declaration of array and all values are declared to garbage values
array<int,5>arr3={2,4,6};/*this declaration is container declaration of array and remaining values are declared to zero(0)
if atleast one value is intialised remaining values are zero*/
array<int,6>arr4={0};//all values are zero
array<int,7>arr5;
arr5.fill(10);//this declares all values to a value 10
arr5.at(0);//arr.at(index) gives the values at that index
for(int i=0;i<7;i++){
   cout<<arr5.at(i)<<" ";
}
//iterators
//begin()->points the first index value
//end()->points address after last element
//rbegin()->points to the last element
//rend()->points to the before first element


}
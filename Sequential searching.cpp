/*
Name:Dushal kella
prn:24070123053
Batch:A2
*/

#include<iostream>
using namespace std;

int main()
{
 int n, key, i;
 cout<<"Enter no. of elements : ";
 cin>>n;

 int arr[n];
 cout<<"Enter elements : ";
 for(i=0; i<n; i++)
 {
  cin>>arr[i];
 }

 cout<<"Enter element to search : ";
 cin>>key;

 int f = 0;
 for(i=0; i<n; i++)
 {
  if(arr[i] == key)
  {
   cout<<"Element found at position "<<i<<endl;
   f = 1;
   break;
  }
 }

 if(f == 0)
 {
  cout<<"Element not found"<<endl;
 }

 return 0;
}
Enter no. of elements : 5
Enter elements : 7 9 10 56 78
Enter element to search : 9
Element found at position 1

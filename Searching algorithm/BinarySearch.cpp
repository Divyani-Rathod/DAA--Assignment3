#include<iostream>
using namespace std;
int Binary_search( int arr[] , int n  , int key )
{
    int start = 0 ;
    int end = n ;
    int mid  = start + ( end - start )/2 ;

    while( start<=end )
    {
        if( arr[mid] == key )
        {
            return mid ;
        }
        else if( arr[mid] < key)
        {
            start = mid + 1 ;
        }
        else 
        {
            end = mid - 1 ;
        }
        mid  =  start + ( end-start)/2 ;
    }
}
int main()
{
    int arr[] = {0,6,10,12,33,45,75,98,100} ;
    int key = 12 ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    cout<<" THE ELEMENT FOUND AT INDEX : "<<Binary_search( arr, n, key) <<endl ;

    return 0;
}
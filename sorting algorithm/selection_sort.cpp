#include<iostream>
using namespace std;

void selection_sort( int arr[] , int n )
{
    
    for( int i=0 ; i<n-1 ; i++)
    {
        for( int j=i+1 ; j<n ; j++)
        {
            if( arr[j]<arr[i] )
            {
                int temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ;
            }
        }
    }
    }


int main()
{
    int arr[] = {25,5,10,66,35,7} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    selection_sort( arr , n ) ;
    for( int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" " ;
    }
    return 0;
}
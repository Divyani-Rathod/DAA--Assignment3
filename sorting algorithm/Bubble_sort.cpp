#include<iostream>
using namespace std ;

void Bubble_sort( int arr[] , int n )
{
    for( int i=0 ; i<n-1 ; i++ )
    {
        for( int j=0 ; j<n-1 ; j++ )
        {
            if( arr[j]>arr[j+1])
            {
                swap( arr[j] , arr[j+1] );
            }
        }
    }
}

int main()
{
    int arr[] = {25,5,10,66,35,7} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    Bubble_sort( arr , n ) ;
    for( int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" " ;
    }
    return 0;
}
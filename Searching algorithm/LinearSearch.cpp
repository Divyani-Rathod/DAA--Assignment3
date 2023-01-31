#include<iostream>
using namespace std;
int linear_search( int arr[] , int n , int key )
{
    for( int i=0 ; i<n ; i++)
    {
        if( arr[i] == key )
        {
            return i ;
            break ;
        }
    }
}
int main()
{
    int arr[] = {10,0,53,74,12,68,99,48} ;
    int key = 12 ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    cout<<" THE ELEMENT FOUND AT INDEX : "<<linear_search( arr, n, key) <<endl ; 
    
    return 0;
}
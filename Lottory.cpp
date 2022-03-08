
/*
Description of the program :simulates a lottery.
Author: Shayan Mansouri
*/

#include <iostream>
#include <string>
#include<cstdlib>
#include <ctime>
using namespace std ;


void showvalue ( int[],int) ;
int matchvalue( int[], int[] , int ) ;

int main()
{
    const int ARRAYSIZE = 5 ;
    int lottery[ARRAYSIZE] ;
    int user[ARRAYSIZE] ;
    srand(time(0)) ;
    int result ;
    
    for(int i=0; i<ARRAYSIZE; i++ ) 
  {
      lottery[i] = rand() % 72 + 1 ;
  }
  
  cout<< "inter 5 random numbers from 1 through 72:"<< endl ;
  
  for( int i=0 ; i< ARRAYSIZE; i++ ) 
  {
      cin >> user[i] ;
  }
  cout << " your numbers are : " << endl ;
  showvalue( user , ARRAYSIZE) ;
  
  cout << " the winning numbers are :" << endl ;
  showvalue( lottery, ARRAYSIZE ) ;
  
  result = matchvalue(lottery, user, ARRAYSIZE) ;
  
  
  cout<< " you had " << result << " matches " << endl ;
  if( result == 5 )
  {
      cout << " you are the golden winner " << endl ;
  }
  
  
  return 0 ;
  
}

void showvalue ( int numbers[] , int size )
{
    for( int i=0 ; i < size ; i++ )
    {
        cout << " number " << (i +1) << " is : " << numbers[i] << endl ;
    }
    cout << endl ;
}


int matchvalue(int winNum[], int userNum[], int size) 
{
    int total=0 ;
    for( int i=0; i<size ;i++)
    {
        if( winNum[i] == userNum[i] )
        {
            total++;  ;
        }
        cout<< endl ;
    }
    return total ;
}
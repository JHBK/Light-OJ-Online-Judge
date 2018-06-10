#include<bits/stdc++.h>

using namespace std ;
int a[2][2] ;

long long int  bigmod (  int a[2][2],long long int p , int m )
{
    if ( p == 0 )return 1; // If power is 0, then a ^ 0 = 1 for any value of a, And 1 Mod m=1 for any value of m, So return 1

    if ( p % 2 ) // If power is odd, Split it : a ^ 5 =( a )* (a ^ 4) --> left and right child respectively.
    {
        return ( ( a[1][0] % m ) + ( bigmod ( a[1][1], p - 1, m ) ) ) % m;
    }
    else //If power is even then split it equally and return the result...
    {

        return (bigmod(a[1][0],p/2,m)+bigmod(a[1][1],p/2,m))%m;
    }
}

int main ()
{
    int t;

   cin>>t;


   while (T!=0)
   {

      int a,b ,m;
      long long int n;
      cin>>a>>b>>n>>m;
       long long int ar[2][2]={{a,1}
                            {b,0}
                                };


                    cout<<bigmod(ar,n,m)<<endl;




   }


}




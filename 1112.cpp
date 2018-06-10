
#include<bits/stdc++.h>

using namespace std ;





long long  int getSum(long long  int BITree[],long long  int index)
{
    long long int sum = 0;


    index = index + 1;


    while (index>0)
    {

        sum += BITree[index];


        index -= index & (-index);
    }
    return sum;
}


void updateBIT(long long int BITree[],long long  int n,long long  int index,long long  int val)
{

    index = index + 1;


    while (index <= n)
    {

       BITree[index] += val;


       index += index & (-index);
    }
}


long long int *constructBITree(long long  int arr[],long long  int n)
{

   long long  int *BITree = new long long  int[n+1];
    for (int i=1; i<=n; i++)
        BITree[i] = 0;


    for (int i=0; i<n; i++)
        updateBIT(BITree, n, i, arr[i]);



    return BITree;
}



int main()
{


    long long int testcase,n,q,taskno,updateinput,updatemoney,first,second,counter=1,b=0;


    scanf("%lld",&testcase);


     while (testcase--)
    {

        printf("Case %lld:\n",counter);

        scanf("%lld%lld",&n,&q);

          long long int inputarray[n];

          memset(inputarray , 0 , n ) ;


        for(int i =0  ; i<n ; i++ )

        {
            scanf("%lld",&inputarray[i]);



        }



          long long int *BITree = constructBITree(inputarray, n);


          while(q--)
        {
            scanf("%lld",&taskno);

            if(taskno==1)
            {
                scanf("%lld",&updateinput);



                printf("%lld\n",inputarray[updateinput]);
                int temp= inputarray[updateinput];





                updateBIT(BITree,n,updateinput,temp*(-1));

                inputarray[updateinput]=0;
            }

            else if (taskno==2)

            {
                scanf("%lld%lld",&updateinput,&updatemoney);



                  inputarray[updateinput] +=updatemoney;


                updateBIT(BITree,n,updateinput,updatemoney);

            }

            else if (taskno==3)

            {
                scanf("%lld%lld",&first,&second);


                long long  int sum1 = 0, sum2=0;




               sum1=getSum(BITree,first-1);



               sum2=getSum(BITree,second);


                printf("%lld\n",sum2-sum1);


            }

        }
        counter++;

    }







    }





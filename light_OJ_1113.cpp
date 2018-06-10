#include<bits/stdc++.h>


using namespace std ;


int main ()
{

    int t,c=1;

    cin>>t;


    string comand,pus,cur;

    while (t--)
    {
        stack <string> add , remove ;
        pus="http://www.lightoj.com/";

        printf("Case %d:\n",c);
        c++;

        while(1)
        {
            cin >> comand;

            if( comand == "VISIT" )
            {
                remove.push(pus);
                cin>>cur;
                pus=cur;
                cout << cur << endl ;

                while(!add.empty()) add.pop() ;
            }
            else if( comand == "BACK" )
            {
                if(remove.empty())
                {
                    cout<<"Ignored\n" ;
                }
                else
                {
                    add.push( pus ) ;

                    pus = remove.top() ;

                    cout << pus << endl ;

                    remove.pop();
                }

            }
            else if( comand == "FORWARD" )
            {
                if(add.empty())
                {

                    cout<<"Ignored\n" ;
                }
                else
                {
                    remove.push(pus);
                    pus=add.top();
                    cout<<pus << endl ;
                    add.pop();
                }
            }
            else if( comand == "QUIT" )
            {
                break;
            }
        }
    }

}

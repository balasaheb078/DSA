#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    i = 1;
    int counter;
    counter = 1;

    cout << "value of n:" << endl;
    cin >> n;

    /* pattern 1
            1 2 3
            4 5 6
            7 8 9
        while(i<=n){

        int j=1;
            while(j<=n){
                cout<<counter<<" ";
                counter++;
                j++;
            };
            cout<<endl;
            i++;
        };
    */

    /*  pattern 2
        *
        * *
        * * *
        * * * *
        * * * * *
     while(i<=n){

        int j=1;
            while(j<=i){
                cout<<"*"<<" ";

                j++;
            };
            cout<<endl;
            i++;
        };

    */

    /*  for pattern 3
        1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5

        while(i<=n){

        int j=1;
            while(j<=i){
                cout<<i<<" ";

                j++;
            };
            cout<<endl;
            i++;
        };
    */

    /*
    for pattren 4
        value of n: 4
        1
        2 3
        4 5 6
        7 8 9 10

        while (i <= n)
        {

            int j = 1;
            while (j <= i)
            {
                cout << counter << " ";
                counter++;
                j++;
            };
            cout << endl;
            i++;
        };
    */
    /*for pattern 5
        1
        2 1
        3 2 1
        4 3 2 1

    while(i<=n){

        int j=1;
            while(j<=i){
                cout<<(i+1-j)<<" ";

                j++;
            };
            cout<<endl;
            i++;
        };

    */
    /* for pattern 6
      A A A A A
      B B B B B
      C C C C C
      D D D D D
      E E E E E

     while(i<=n){

          int j=1;
              while(j<=n){
                  char ch='A'+i-1;
                  cout<<ch<<" ";

                  j++;
              };

              cout<<endl;
              i++;
          };
    */
    /*for pattern 7
        A B C D E
        A B C D E
        A B C D E
        A B C D E
        A B C D E

        while(i<=n){

            int j=1;
                while(j<=n){
                    char ch='A'+j-1;
                    cout<<ch<<" ";

                    j++;
                };

                cout<<endl;
                i++;
            };
    */
    /*  pattern 8

        A B C D E
        F G H I J
        K L M N O
        P Q R S T
        U V W X Y

        while(i<=n){

            int j=1;
                while(j<=n){
                    char ch='A'-1+counter;
                    cout<<ch<<" ";
                    counter++;
                    j++;
                };
                cout<<endl;
                i++;
            };
    */
    /*pattern 9

    A
    B B
    C C C
    D D D D
    E E E E E

       while(i<=n){

            int j=1;
                while(j<=i){
                    char ch='A'+i-1;
                    cout<<ch<<" ";

                    j++;
                };

                cout<<endl;
                i++;
            };
    */
    /*pattern 10
        E
        D E
        C D E
        B C D E
        A B C D E

    while(i<=n){

            int j=1;

                char start='A'+n-i;
                while(j<=i){
                    cout<<start<<" ";
                    start++;
                    j++;
                };

                cout<<endl;
                i++;
            };
    */

    /* pattern 11
       *
      **
     ***
    ****


    while (i<=n)
    {
       int j = 1;
       int space = n - i;
       //for printing space
       while(space){
        cout<<" ";
        space--;
       }
       //for printing *
       while(j<=i){
        cout<<"*";
        j++;
       }
        cout<<endl;
        i++;
    }

    */

    /* f pattern 12
     1 2 3 4 5
     1 2 3 4 5
     1 2 3 4 5
     1 2 3 4 5
     1 2 3 4 5
 */

    /*        while(i<=n){

              int  j;
              j=1;
                while(j<=n){
                    cout<<j<<" ";
                    j++;
                };
                cout<<endl;
                i=i+1;
            };
    */
    // ============================================

    /* pattern 13
     *
     **
     ***
     ****
     *****
     */

    /*
       while(i<=n){

         int  j;
         j=1;
           while(j<=i){
               cout<<"*";
               j++;
           };
           cout<<endl;
           i=i+1;
       };

    */
}
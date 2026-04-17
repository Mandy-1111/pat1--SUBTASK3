#include <iostream>

using namespace std;

int main()
{
    int choice;

    cout<<"1. Decimal to Binary"<<endl;
    cout<<"2. Binary to Decimal"<<endl;
cout<<"Choose option:";
    cin>>choice;

    //Deciman to Binary
    if(choice==1){
        int num;
        cout<<"Enter decimal number:";
        cin>>num;

        cout<<"binary:";

        while(num>0) {
                //remainder
            cout<<num%2;
            num=num/2; // divide number

        }

        }

       //Inary to decimal
       else if(choice==2){
        int binary,decimal=0,base=1;

         cout<<"Enter binary number:";
         cin>>binary;

         while(binary>0){
            int last= binary%10;
            base=base*2;

           // else{
                cout<<"wrong choice";
            }
         }

       }
      // return 0
   // }




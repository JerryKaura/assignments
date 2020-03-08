#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int i,j,range=0;
    cout<<" \t 10 by 10 Multiplication table.\n \n ";
    for(i=0 ; i<= 10 ; i++){
        for(j=0 ; j<=10 ; j++){
            cout<<"\t"<<(i*j);
        }
        cout<<endl<<endl;
    }
    return 0;
}

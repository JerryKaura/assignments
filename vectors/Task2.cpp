#include <iostream>
using namespace std;

class Vector {
private:
    float vect[10];

public:
    void init();
    void modify(int n);
    void mult(Vector A, int mn);
    void disp();

};

void Vector:: init(){
    int n;
    cout<<"Enter Number of Members:\n";
    cin>>n;
    for(int x=0;x<n;x++){
        cout<<"Enter Value: "<<x<<"\n";
        cin>>vect[x];
    }
};

void Vector:: modify(int i){
    float  n;

    cout<<"\n Enter New Value:\n";
    cin>>n;
    vect[i]=n;

};

void Vector:: mult(Vector A, int mn){
    float ans[5], C[10], D[5];
    for(int x=0;x<5;x++){
        ans[x]=A.vect[x]*mn;
    }

       for(int x=0;x<5;x++){
        cout<<""<<ans[x]<<",";
    }

};

void Vector:: disp(){
    cout<<"(";
    for(int x=0;x<n;x++){

        if(vect[x]){
        cout<<""<<vect[x]<<",";
        }
        else{
            if(x==4){

                break;
            }

        }
    }
    cout<<")\n";
};

int main() {
    int m, mn, s;
Vector first, second;
first.init();
first.disp();

    cout<<"\nEnter Activity 1 to modify\n  2 for multiplication \n 3 to Display ";
    cin>>s;

 if(s==1){
    cout<<"\n Enter Element to Modify in First Vector: ";
    cin>>m;
    first.modify(m);
    first.disp();
    }
    else{ if(s==2){
            cout<<"\n Enter Element to Modify in First Vector: ";
    cin>>m;
    first.modify(m);
    first.disp();

    cout<<"\n Enter Element to Modify in First Vector: ";
    cin>>mn;
    first.mult(first, mn);
    }

    else{
       first.disp();
    }
    }



  return 0;
}


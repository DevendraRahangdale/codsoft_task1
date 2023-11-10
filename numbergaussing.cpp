#include<iostream>
using namespace std;
int main(){
cout<<"==========**********============"<<endl;
cout<<"==========**********============";
cout<<endl;
cout<<"     NUMBER GUESSING GAME"<<endl;

cout<<"==========**********============"<<endl;
cout<<"==========**********============";
cout<<endl;



int n=8;
int k;

cout<<"I have a number in mid (0-20) . can you gues it ?\n ";

while(1){
cout<<"Enter  your Guess no.:";

cin>>k;


if(k==n){
    cout<<"Yes you got it ! ";
    break;
}

else if(n>k){
    cout<<"My number is greater than :";
    cout<<k;
    cout<<endl;
    cout<<"try again..!!"<<endl;

}
else {
    cout<<"My number is less than :";
    cout<<k;
     cout<<endl;
     cout<<"try again..!!"<<endl;;
}

}




return 0;



}

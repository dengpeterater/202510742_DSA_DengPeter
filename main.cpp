#include <iostream>

using namespace std;

int main(){

   long keyNumber=787406589;
   int phoneNumbers[3];
   int i=0;
   //filling numbers
   do{

      cout<<"Enter your phone number"<<endl;
      cin>>phoneNumbers[i];
      i=i+1;
   }
    while(i<3);
    //linear search
    //number Esther
    for(int i=0;i<3;i++){

        if(phoneNumbers[i]==keyNumber){
            cout<< "Esther number's found"<<endl;
        break;
    }
    }
    return 0;
}

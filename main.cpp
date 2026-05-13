#include <iostream>

using namespace std;

int main()
{
    int arr[4]={16,28,9,10};

    int n=4;
    cout<<"before sorting"<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
       cout<<"after swapping"<<endl;
       for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j]=arr[j+1];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            }
        }
          for(int i=0;i<4;i++){
            cout<<arr[i]<<endl;
            return 0;

          }
       }

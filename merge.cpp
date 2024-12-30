// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
class merge{
    public:
  void merge_2(int arr[],int brr[],int sizeA,int sizeB){
          int a=0,b=0,c=0;
          int sizec=sizeA+sizeB;
          int crr[sizec];
          while (a!=sizeA && b!=sizeB)
          {
            if(arr[a]<=brr[b]){
                crr[c]=arr[a];
                a++;
                c++;

            }
            else{
                crr[c]=brr[b];
                b++;
                c++;
            }
          }
          while(a!=sizeA){
            crr[c]=arr[a];
            a++;
            c++;
          }
          while(b!=sizeB){
            crr[c]=arr[a];
            c++;
            b++;
          }
          
          display(crr,sizec);
    }
    void display(int crr[],int n){
        for(int i=0;i<n; i++){
            cout<<crr[i]<<" ";
        }
    }

};
int main(){
    merge m;
    int arr[9]={2,4,8,32,16,60,70,89,98};
    int x=9;
    int brr[9]={3,7,9,30,35,24,102,107,110};
    int y=9;
    m.merge_2(arr,brr,x,y);
    //m.display();
}

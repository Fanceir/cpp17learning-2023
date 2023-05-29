
#include<iostream>
template<typename T>
int Min(T arr[],int n){
    T min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[]={1,2,3,4,5};
    std::cout<<Min(arr,5)<<std::endl;
    return 0;
}
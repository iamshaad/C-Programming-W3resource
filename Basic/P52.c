#include<stdio.h>
int main(){
    int n,a=10000000;
printf("Input the length of the array: ");
scanf("%d",&n);
int arr[n];
int pos = 0;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);

    if(arr[i]<a){
        a=arr[i];
        pos =i+1;
    }
}
printf("Smallest Value:%d",a);
printf("Position of the element:%d",pos);

}

#include<stdio.h>
int binarysearch(int *arr,int first,int last,int x)
{   int mid;
    
    if(arr[first]>arr[last]){
    
    mid=(first+last)/2;
    }
    if(arr[mid]==x)
    return mid;
    else if(arr[mid]>x)
    return binarysearch(arr,mid+1,last,x);
    else
    return binarysearch(arr,first,mid-1,x);
}

int main(){
    int arr[15];
    int *p,x,y;
    scanf("%d",&y);
    for(int i=0;i<15;i++){
        scanf("%d",&arr[i]);
    }
    p=arr;
    
    x=binarysearch(p,0,14,y);
    printf("%d",x);

}
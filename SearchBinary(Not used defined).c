#include<stdio.h>
int main(){
    int arr[11] = {6,12,20,22,24,27,29,39,49,59,70};
    int target;
    int found=0;
    printf("Enter to Search: ");
    scanf("%d",&target);
    int S=0, E=11-1;
    for(int i=0; i<11-1; i++){      //I=0,1,2
        int M=(S+E)/2;      //M=5,8,9
        if(arr[M]==target){
            printf("%d found at index: %d",target,M);
            found=1;
            break;
        }
        else if(arr[M]<target){
            S=M+1;          //6,9
        }
        else if(arr[M]>target){
            E=M-1;
        }
    }
    if(found==0){
        printf("%d not found!",target);
    }
    return 0;
}

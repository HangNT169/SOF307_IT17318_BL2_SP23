#include <stdio.h>

void sapXepNoiBot(){
    int arr[] = {0,10,99,3,88,5,6,7};
    for(int i=0; i < 8; i++){
        for (int j = i + 1 ; j < 9; j++)
        {
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d \n", arr[i]);
    }
    
}
void timSo(int a){
    int arr[] = {0,10,99,3,88,5,6,7};
    for(int i=0; i < 8; i++){
        if(arr[i] == a){
            printf("co, vi tri thu %d \n", i);
        }else{
            printf("K co");
        }
    }
}
int main(){
    // sapXepNoiBot();
    timSo(9229);
}
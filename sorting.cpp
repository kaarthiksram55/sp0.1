//Ramachandran 110117067
#include<stdio.h>
int main(){
    int a[10] = {3,9,16,2,4,18,5,99,7,17};
    int i,k;
    for(i=0;i<10;i++){
        for(k=i+1;k<10;k++){
            if(a[k]<a[i]){
                a[i]=a[i]+a[k];
                a[k]=a[i]-a[k];
                a[i]=a[i]-a[k];
            }
        }
    }
    return 0;
}

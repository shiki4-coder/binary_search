#include <stdio.h>

int n;
int k;
int A[100000];
int p(int x, int A[],int n,int k){
    int sum =0;
    for (int i =0;i<n;i++){
        sum+= A[i]/x;
    }
    if (sum>=k){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    ub = 1000000001;
    lb = 0;
    while(ub-lb>1){
        int mid =(lb+ub)/2;
        if (p(mid,A,n,k)){
            ub = mid;
        }
        else lb =mid;
    }
    printf("%d\n",lb);


    return 0;
}

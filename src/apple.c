#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x,int A[], int n,int k){
    int sum =0;
    for(int i = 0; i <n;i++){
        sum += (A[i]+x-1)/x ;
    }
    if (sum <= k){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    lb =0;
    ub =1000000001;
    while(ub-lb >1){
        int mid = (lb+ub)/2;
        if (p(mid,A,n,k)){
            ub = mid;
        }
        else{
            lb = mid;
        }
    }
    printf("%d\n",ub);

//printf("%d\n",p(A[3],A,n,k));

  return 0;
}

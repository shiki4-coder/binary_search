#include <stdio.h>

int n;
int k;
int A[100000];
int p(int x, int A[], int n,int k){
    int sum =1;
    int temp =0;
    int flag =1;
    for (int i=0;i<n;i++){
        temp+=A[i];
        if (A[i]>x){
            flag =0;
            break;
        }
        if (temp>x){
            sum+=1;
            temp=0;
        }
        if(i == n-1 && temp !=0) sum+=1;
    }
    if (flag == 1 && sum <=k) return 1;
    else return 0;
}


int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    ub =1000000001;
    lb = 0;
    while(ub-lb >1){
        int mid =(ub+lb)/2;
        if (p(mid,A,n,k)){
            ub = mid;
        }
        else{
            lb = mid;
        }
    }
    printf("%d\n",ub);
    return 0;
}

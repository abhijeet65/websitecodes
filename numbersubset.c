#include <stdio.h>

//int A[5]= {0};


void print2(int A[], int N,int B[]){
int sum=0;
    for (int i =0; i <=N; i++){
        if(A[i] ==1){
            printf("%d ",B[i]);
sum++;
        }
    }
if(sum==0)
printf("empty");

        printf("\n");     
}


void print(int A[], int N){

    for (int i =1; i <=N; i++){
            printf("%d ",A[i]);
    }
        printf("\n");     
}



void combination(int A[], int k, int N,int B[]) {
    //printf("k=%d\n",k);
    if (k==N) {
        A[k]=0;
        print2(A,N,B);
        A[k]=1;
        print2(A,N,B); 
        return;         
              
    }
    
    
        A[k]=0;
        combination(A,k+1,N,B);
        A[k]=1;
        combination(A,k+1,N,B);
         
     
     
}

int main(){
int n;
printf("eneter the array size\n");
scanf("%d",&n);
int B[n],i;
int A[n];
printf("eneter the array elemnts\n");
for(i=0;i<n;i++){
scanf("%d",&B[i]);
A[i]=0;
}
printf("-----------------------------------\n");
 combination(A,0,n-1,B);   
   
}



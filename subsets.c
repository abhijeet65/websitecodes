#include <stdio.h>

int A[5]= {0};
char B[5]={'V','A','B','C','D'};

void print2(int A[], int N){

    for (int i =1; i <=N; i++){
        if(A[i] ==1){
            printf("%c ",B[i]);
        }
    }
        printf("\n");     
}


void print(int A[], int N){

    for (int i =1; i <=N; i++){
            printf("%d ",A[i]);
    }
        printf("\n");     
}



void combination(int A[], int k, int N) {
    //printf("k=%d\n",k);
    if (k==N) {
        A[k]=0;
        print2(A,N);
        A[k]=1;
        print2(A,N); 
        return;         
              
    }
    
    
        A[k]=0;
        combination(A,k+1,N);
        A[k]=1;
        combination(A,k+1,N);
         
     
     
}

int main(){
 combination(A,1,4);   
   
}



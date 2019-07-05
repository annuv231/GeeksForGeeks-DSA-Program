int median(int A[],int N)
{
    
    sort(A,A+N); 
    if(N%2==0){
        return (A[N/2]+A[(N/2)-1])/2;
       
    }
    else  return A[N/2];
    
   
}
int mean(int A[],int N)
{  int sum=0;
    for(int i=0;i<N;i++){
     sum=sum+A[i];
    }
    return sum/N;
}

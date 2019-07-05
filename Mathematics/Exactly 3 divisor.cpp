int countDivisor(int n);
int exactly3Divisors(int N)
{  int ans=0;
   for(int i=1;i<=N;i++){
      int divisor=countDivisor(i);
      if(divisor==3){
          ans++;
      }
   }
   return ans;
}
int countDivisor(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(i*i<n){
                count++;
            }
        }
        if(count>3){
           break;
        }
    }
    return count;
}
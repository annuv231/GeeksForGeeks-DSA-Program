bool isPrime(int N)
{   if(N==1){
    return false;
}  
    bool result=true;
   for(int i=2;i<N;i++){
       if(N%i==0){
          result=false;
          break;
       }
   }
   return result;
}

long long factorial (int n)
{  long long ans=1;
    while(n>0){
        ans=ans*n;
        n--;
    }
    return ans;
}

int digitsInFactorial(int n)
{
    double ans=0;
if(n<=0){
    return 0;
}
if(n<=1){
    return 1;
}
while(n>=2){
    ans=ans+log10(n);
    n--;
}
return floor(ans)+1;
}
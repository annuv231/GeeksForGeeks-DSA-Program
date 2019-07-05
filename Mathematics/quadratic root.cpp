void quadraticRoots(int a,int b, int c)
{
   
      int d=b*b-4*a*c;
      //cout<<d;
      if(a==0){
          cout<<"Invalid";
      }
     double root=double(sqrt(abs(d)));
    // cout<<"rot"<<root/(double)2*a;
     //int r=floor((int)(root/(double)2*a));
     //cout<<"r"<<r<<endl;
     if(d<0){
         cout<<"Imaginary";
     }
     //double x=(-b+root);
     //cout<<x;
     //cout<<x/(2*a);
     //
     if(d>=0){
        double x=(double)(-b+root)/(2*a);
        double y=(double)(-b-root)/(2*a);
        cout<<max(floor(x),floor(y))<<" "<<min(floor(x),floor(y));
     }
   
   
   
   // Your don't need to printline
   // It will automatically be 
   // handled by driver code
}
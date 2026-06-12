class Solution 
{
 public:
 int reverse(int x)
 {
    int org=x;
    x=abs(x);
    string Strx=to_string(x);
    std::reverse(Strx.begin(),Strx.end());
    long long res=stoll(Strx);
    if(org<0)
    {
        res*=-1;
    }
    if(res<-(1LL<<31)|| res>(1LL<<31)-1)
    {
        return 0;
    }
    return static_cast<int>(res);
  }
};

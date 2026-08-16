class Solution {
public:
    int divide(int dividend, int divisor) {
        int a=dividend;
        int b=divisor;
        if(a==INT_MIN && b==-1){
            return INT_MAX;
        }
        bool negative=(a<0)^(b<0);

        long long dvd=llabs((long long)a);
        long long dvr=llabs((long long)b);
        
        long long ans=0;
        while(dvd>=dvr){
            long long temp=dvr;
            long long multiple=1;

            while((temp<<1)<=dvd){
                temp<<=1;
                multiple<<=1;
            }

            dvd-=temp;
            ans+=multiple;
        }
        if(negative){
            ans=-ans;
        }
        if(ans<INT_MIN){
            return INT_MIN;
        }
        if(ans>INT_MAX){
            return INT_MAX;
        }
        return (int)ans;
    }
};
#include<cmath>
class ASum
{
      public:
          static long long findNb(long long m){
                    int i=0;
                        long long sum=0;
                        for(i=0;;i++){
                                    sum+=pow(i,3);
                                    if(sum==m){
                                                return i;

                                    }
                                    if(sum>m){
                                                return -1;

                                    }



                        }
                          return i;

          }

};

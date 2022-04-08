#include <iostream>
#include <algorithm>    // std::min
using namespace std;

int bin2(int n, int k){
    int B[k+1];
    //reset array
    for(int i=0; i<=k; i++){
        B[i]=0;
        B[0]=1;
        //loop until n
        for(int i = 1; i <= n; i++){
            //compute C(i,j) using B[j] and B[j-1]
            for(int j = min(i,k); j > 0; j--)
                B[j]= B[j]+B[j-1];
        }
    }
    //return calculated value of C(n,k)
    return B[k];
}


int main(int argc, char **argv)
{
	int n=6, k=2;
    cout << bin2(n,k) <<endl;
	return 0;
}

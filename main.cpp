#include <iostream>

using namespace std;

long long int wartosciTrojkata[3000][3000];

long long Symbol(){
    for(int N=0;N < 2999; ++N) {
        wartosciTrojkata[N][0] = 1;
        wartosciTrojkata[N][N] = 1;
      for(int K=1; K <= N-1; ++K) {
        wartosciTrojkata[N][K] = (wartosciTrojkata[N-1][K-1] + wartosciTrojkata[N-1][K])%1000000007;


    }


}
}

int main()
{
    cout << "Podaj wartosci" << endl;
    Symbol();
    long long A,B,C;
    cin >> A >> B >> C;
    cout << (wartosciTrojkata[A+B+C][A]*wartosciTrojkata[B+C][B])%1000000007<<endl;
    return 0;
}


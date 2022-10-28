#include<bits/stdc++.h> 

using namespace std;
void jalan(int j){
    int x=0, y=0, k=0;
    while(j>0){
        k++;
        for(int c=0; c<k; c++){
            if(j<=0){break;
            }else if(j%4 == 0){
                y--;
                j--;
            }else if(j%4 == 1){
                x++;
                j--;
            }else if(j%4 == 2){
                y++;
                j--;
            }else if(j%4 == 3){
                x--;
                j--;
            }
        }
    }
    cout << x << " " << y << endl;
}
int main()
{
    int n, m;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> m;
        jalan(m);
    }
}
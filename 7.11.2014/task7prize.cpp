#include <iostream>
using namespace std;
int main(){
    int n, points, i, contestantmost, contestantleast, min, max=0;
    int pointsall[100];
    cout << "How many participants?" << endl;
    cin >> n;
    for(i=0;i<n;i++){
        cout << "Enter points for contestant " << i+1 << endl;
        cin >> points;
        pointsall[i]=points;
        }
    if(i==n){
        for(i=0;i<n;i++){
        cout << i+1 << " contestant: " << pointsall[i] << endl;}
    }
    for(int m=0;m<n;m++){
        if(pointsall[m]>max){
            max=pointsall[m];
            contestantmost=m+1;}
}
    for(int k=0;k<n;k++){
        if(pointsall[k]<min){
            min=pointsall[k];
            contestantleast=k+1;}
}
    cout << contestantmost << " has the most with " << max << " points." << endl;
    cout << contestantleast << " has the least with " << min << " points." << endl;
}

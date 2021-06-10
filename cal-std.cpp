// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
#include<cmath>
using namespace std;

double calcavg(double testvals[]) {
    double sum = 0;
    for(int i=0; i< sizeof(testvals); i++) {
        sum += testvals[i];
    }
    return sum/sizeof(testvals);
}

double variance(double testvals[]){
    double sum = 0;
    double avg = calcavg(testvals);
    for(int i=0; i<sizeof(testvals); i++){
        sum += (testvals[i]-avg)*(testvals[i]-avg);
    }
    return sum/sizeof(testvals);
}

int main(){
    double testvals[8] = {89,95,72,83,99,54,86,73};
    cout<<"The average : "<<calcavg(testvals)<<endl;
    cout<<"The Variation : "<<variance(testvals)<<endl;
    cout<<"Standard Deviation : "<<sqrt(variance(testvals))<<endl;
    return 0;
}


#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){


    vector<float> data = {1, 2 , 3,4 ,5};
    vector<float> result(data.size());
    transform(data.begin(),data.end(),result.begin(),[](float v ){return v*3;});
    for(int i=0;i<data.size();i++){
        cout<<"Data: "<<data[i]<<". Result: "<<result[i]<<endl;    
    }
    return 0;
}

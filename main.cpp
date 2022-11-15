#include <iostream>
using namespace std;
int main() {
    int a,b,x,y;
    cout<<"inserire i valori di a , b, x , y"<<endl;
    cin>>a>>b>>x>>y;
    if (x<0 && y>0) {
        cout<<"z = "<<(a*x)-(b*y);
    }
else if (x>=0 && y<=0){
        cout<<"z = "<<(a*(x*x))-(b*y);
}
else cout<<"z= "<<(a*x)+(y*y*b);
return 0;
}


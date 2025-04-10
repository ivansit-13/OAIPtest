#include <iostream>
#include <stdio.h>
using namespace std;
int square(int x1,int y1,int x2,int y2,int x3,int y3){
    return abs((x1*(y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}
int dot(int a, int b){
    int x1 = 0, y1 = 2, x2 = -2, y2 = -3, x3 = 2, y3 = -3;
    int s,s1,s2,s3;
    s = square(x1,y1,x2,y2,x3,y3);
    s1 = square(a,b,x2,y2,x3,y3);
    s2 = square(x1,y1,a,b,x3,y3);
    s3 = square(x1,y1,x2,y2,a,b);
    return s == s1+s2+s3;
}

int main()
{
    int a,b;
    cout<<"Введите x"<<endl;
    cin>>a;
    cout<<"Введите y"<<endl;
    cin>>b;
    if (dot(a,b)){
        printf("Точка принадлежит");
    }
    else{
        printf("Точка непринадлежит");
    }
    return 0;
}

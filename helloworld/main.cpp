//
//  main.cpp
//  helloworld
//
//  Created by 鲁子浩 on 2017/2/21.
//  Copyright © 2017年 Richardo-H-Lu. All rights reserved.
//

#include<iostream>
using namespace std;

//变量声明,让编译器知道这是个外部变量，主要是用在多个文件需要某些变量时不会重复定义，某一个文件定义就行了。
extern int a,b;
extern int c;
extern float f;

//测试GitHub，我在这里改变了

//main是程序开始执行的地方

int main(){
    //typedef 重命名
    typedef int hahahha;
    
    //查看数据类型大小
    cout<<"Size of char: "<<sizeof(char)<<endl;
    cout<<"Size of int: "<<sizeof(hahahha)<<endl;
    cout<<"Size of short int: "<<sizeof(short int)<<endl;
    cout<<"Size of long int: "<<sizeof(long int)<<endl;
    cout<<"Size of float: "<<sizeof(float)<<endl;
    cout<<"Size of double: "<<sizeof(double)<<endl;
    cout<<"Size of wchar_t: "<<sizeof(wchar_t)<<endl;
    
    //枚举类型
    enum week{Monday,Tuseday,Thursday} w;
    w=Monday;
    enum week t=Tuseday;
    cout<<w<<endl;
    cout<<t<<endl;
    
    //变量定义
    int a,b;
    int c;
    float f;
    
    //实际初始化
    a = 0xfff;
    b = 070;
    c = a + b;
    cout<<c<<endl;
    
    f=70.0/3.0;
    cout<<f<<endl;

    //指数
    int e=2e2;
    cout<<e<<endl;
    
    //字符串
    const string k="kkkk \
    ddddd";
    cout<<k<<endl;
    
    
    //算术运算符
     a = 21;
     b = 10;
    
    c = a + b;
    cout << "Line 1 - c 的值是 " << c << endl ;
    c = a - b;
    cout << "Line 2 - c 的值是 " << c << endl ;
    c = a * b;
    cout << "Line 3 - c 的值是 " << c << endl ;
    c = a / b;
    cout << "Line 4 - c 的值是 " << c << endl ;
    c = a % b;
    cout << "Line 5 - c 的值是 " << c << endl ;
    c = a++;
    cout << "Line 6 - c 的值是 " << c << endl ;
    c = a--;
    cout << "Line 7 - c 的值是 " << c << endl ;
   
    
    //异或实现交换值
    a = 5;
    b = 9;
    b = a ^ b;
    a = a ^ b;
    b = a ^ b;
    cout<<a<<endl;
    cout<<b<<endl;
    
    //switch(可以判断整型、字符型
    char x='b';
    switch (x) {
        case 'a':
            cout<<"this is a"<<endl;
            break;
            
        case 'b':
            cout<<"this is b"<<endl;
            break;
        default:
            
            break;
    }
    
    return 0;
    
}

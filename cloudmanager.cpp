
#include "cloudmanager.hpp"

void cloudmanager::creatobj(){
    check++;
    if (check >28){
    cout << "created"<<endl;
    clouds *c1 = new clouds(0,50);
    cld.push_back(c1); 
    check=0;
}
}
void cloudmanager::creatobj1(){
    check1++;
    if (check1 >25){
    cout << "created"<<endl;
    clouds1 *c2 = new clouds1(0,300);
    cld1.push_back(c2); 
    check1=0;
}
}
void cloudmanager::drawobj(){
    int size=0;
    while(size<cld.size()){
        cld[size]->draw();
        cld[size]->move();
        size++;
    }
}
void cloudmanager::drawobj1(){
    int size=0;
    while(size<cld1.size()){
        cld1[size]->draw();
        cld1[size]->move();
        size++;
    }
}


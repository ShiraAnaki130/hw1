#include "myMath.h"
#define EXP 2.718
double Exponent(int x){
    if(x==0){
        return 1;
    } 
    double answer=1;
    if(x<0){
        x=x*(-1);
    }
    for(int i=0;i<x;i++){
        answer*=EXP;
    }
    if(x<0){
        return 1/answer;
    } 
    return answer;
}

double Power(double x , int y){
    if(x==0.0) {
        return 0;
    }
    if(y==0){
        return 1;
    }
    if(y<0){
        y=(y)*(-1);
    } 
    double answer=1;
    for(int i=0; i<y;i++){
        answer*=x;
    }
    if(y<0){
        return 1/answer;
    }
    return answer;
}
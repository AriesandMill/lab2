#include<iostream>
#include<string>
#include<cstdlib>
#include"bmi.h"
#include<fstream>
using namespace std;
int main(){
	float h;
	float w;
	BMI bmi;
	ifstream infile("file.in",ios::in);
	if(!infile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	ofstream outfile("file.out",ios::out);
	
	while(infile>>h>>w && h!=0 && w!=0){
		bmi.setH(h);
		bmi.setW(w);
		outfile<<bmi.bmi_caculate()<<"\t"<<bmi.bmi_result()<<"\n";
	}
}

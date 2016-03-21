#include<iostream>
#include"bmi.h"
void BMI::setH(float Height){
	
	height = Height;
}
void BMI::setW(float Weight){
	
	weight = Weight;
}
float BMI::bmi_caculate(){
	return weight/(height/100.0f)/(height/100.0f);
}
float BMI::getH(){
	return height;
}
float BMI::getW(){
	return weight;
}
string BMI::bmi_result(){
	if(bmi_caculate()<15) bmi_category="Very severely underweight";
	if(bmi_caculate()>=15 && bmi_caculate()<16) bmi_category="Severely underweight";
	if(bmi_caculate()>=16 && bmi_caculate()<18.5) bmi_category="Underweight";
	if(bmi_caculate()>=18.5 && bmi_caculate()<25) bmi_category="Normal";
	if(bmi_caculate()>=25 && bmi_caculate()<30) bmi_category="Overweight";
	if(bmi_caculate()>=30 && bmi_caculate()<35) bmi_category="Obese Class I(Moderately obese)";
	if(bmi_caculate()>=35 && bmi_caculate()<40) bmi_category="Obese Class II(Serverely obese)";
	if(bmi_caculate()>=40) bmi_category="Obese Class III(Very severely obese)";
	return bmi_category;
}






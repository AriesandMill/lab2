#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class BMI{
	public:
		void setH(float height);
		float getH();
		void setW(float weight);
		float getW();
		float bmi_caculate();
		string bmi_result();
		string bmi_category;
	private:
		float height;
		float weight;
};

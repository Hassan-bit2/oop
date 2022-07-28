#include<iostream>
using namespace std;
class product{
	private:
	int serial;
public:
	void setSerial(int s){
		serial=s;
	}
	int getSerial(){
		return serial;
	}	
};

int main()
{
	product cereal;
	cereal.setSerial(1002280);
	cout<<cereal.getSerial();
}

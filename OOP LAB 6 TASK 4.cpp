#include <iostream>
using namespace std;

class Device{
	private:
		string *deviceName;
		string *deviceId;

	public:
		Device(string name, string id){
			deviceName = new string(name);
			deviceId = new string(id);
			cout << "Parent class constructor called, memory allocated on heap..." << endl;
		}

		virtual ~Device(){
			delete deviceName;
			delete deviceId;
			cout << "Parent class destructor called..." << endl;
		}

		string getName(){ return *deviceName; }
		string getId(){ return *deviceId; }
};

class Sensor : public Device{

	private:
		string *sensorType;
		float *sensorValue;

	public:
		Sensor(string name, string id, string type, float value) : Device(name, id){
			sensorType = new string(type);
			sensorValue = new float(value);
			cout << "Child class constructor called, memory allocated on heap..." << endl;
		}

		~Sensor(){
			delete sensorType;
			delete sensorValue;
			cout << "Child class destructor called..." << endl;
		}

		void displayData(){
			cout << "----- Device Details -----" << endl;
			cout << "Device Name  : " << getName() << endl;
			cout << "Device ID    : " << getId() << endl;
			cout << "Sensor Type  : " << *sensorType << endl;
			cout << "Sensor Value : " << *sensorValue << endl;
			cout << "--------------------------" << endl;
		}
};

int main(){

	Sensor *s1 = new Sensor("Thermometer", "TH-101", "Temperature (Celsius)", 36.9);

	s1->displayData();

	delete s1;

	return 0;
}

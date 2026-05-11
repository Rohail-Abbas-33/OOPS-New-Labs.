#include <iostream>
using namespace std;

class File{
	private:
		string name;

	public:
		File(string n){
			name = n;
			cout << "File \"" << name << "\" is opened (Base constructor called)." << endl;
		}

		~File(){
			cout << "File \"" << name << "\" is closed (Base destructor called)." << endl;
		}
};

class TextFile : public File{

	private:
		string content;

	public:
		TextFile(string n, string info) : File(n){
			content = info;
			cout << "Text is loading... (Derived constructor called)" << endl;
		}

		~TextFile(){
			cout << "Text file processing finished (Derived destructor called)" << endl;
		}

		void displayTextFile(){
			cout << "Content : \"" << content << "\"" << endl;
		}
};

int main(){

	{
		TextFile tf("Documents.docx", "It is my data.");
		tf.displayTextFile();

		cout << "Object scope se bahar jane wala hai..." << endl;
	}

	cout << "Object scope se bahar aa chuka hai..." << endl;

	return 0;
}

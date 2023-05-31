#include <iostream>
using namespace std;

class seseorang {
public:
	virtual void pesan() = 0;
	// Virtual void pesan(){
	// cout << "Pesan dari seseorang" << endl;
	// }
};

class joko : public seseorang {
public:
	void pesan() {
		cout << "Pesan dari Joko" << endl;
	}
};


class lia : public seseorang {
public:
	void pesan() {
		cout << "Pesan dari lia" << endl;
	}

};

int main() {
	seseorang* obyek;
	joko a;
	lia b;
#ifndef __SELECT_BUTTON__
#define __SELECT_BUTTON__

#include <iostream>
#include <string>
using namespace std;

class SelectButton {
private:
	string buttonName;
public:
	void setName(string c);
	string getName();
};
#endif

#include "Menu.h"

using namespace std;

void Menu::thinkingMenu() {
	choiceButton1.setName("Choice1");
	choiceButton2.setName("Choice2");
	choiceButton3.setName("Choice3");
	selectButton.setName("SELECT");

	cout << choiceButton1.getName() << "が押されました\n";
	cout << choiceButton2.getName() << "が押されました\n";
	cout << selectButton.getName() << "で決定されました\n";

	if(selectButton.touchButton() == 1)
	    cout << "点灯しました\n";
	else
        cout << "消灯しました\n";

    if(selectButton.touchButton() == 1)
    	    cout << "点灯しました\n";
    	else
            cout << "消灯しました\n";
}


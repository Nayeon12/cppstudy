#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Text {
protected:
	string text;
public:
	Text(string _t) : text(_t) {}
	virtual string get() = 0;// 순수가상함수	
	virtual void append(string _extra) = 0;			
};

class FancyText : public Text {
private:
	string left_brac;
	string right_brac;
	string connector;
public:
	FancyText(string _t, string _lb, string _rb, string _con)
		: Text::Text(_t), left_brac(_lb), right_brac(_rb), connector(_con) {}
	string get() override { return left_brac + Text::text + right_brac; } // 순수가상함수는 오버라이딩이 필수!
	void append(string _extra) override { text += connector + _extra; }
};

class FixedText : public Text {
public:
	FixedText() : Text::Text("FIXED") {}
	void append(string _extra) override {}
	string get() override { return Text::text; }
};

int main() {
	vector<Text*> vec{ new FancyText("Fancy", "<<", ">>" , "*"),
						new FixedText()
	};
	
	Text* pText;
	pText = new FancyText("Fancy1", "(", ")", "-");
	vec.push_back(pText);
	pText = new FixedText;
	vec.push_back(pText);
	pText = NULL;

	for (auto elem : vec)
		elem->append("A");
	for (auto elem : vec)
		cout << elem->get() << endl;
	for (auto elem : vec)
		delete elem;

	return 0;

}
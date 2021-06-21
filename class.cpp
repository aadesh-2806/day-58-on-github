#include<iostream>
#include<ostream>

using namespace std;
class book
{
	public:
		string title;
		string author;
		//can call here from main
		book()
		{
			title = "notitle";
		}
		book(string name,string tut)
		{
			cout<<name<<endl;
			title=tut;
			author =name;
			cout<<title<<endl;
			cout<<author<<endl;
		}
};
int main()
{
	book b3;
	cout<<b3.title<<endl;
	book b1("df","gg");
	book b2("hf","sd");
	cout<<b1.title<<endl;
	//b1.author="hf";
	//b1.title="sd";
	
	//b2.author="df";
	//b2.title="sf";
	return 0;
}

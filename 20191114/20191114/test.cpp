#include <iostream>
#include <string>
#pragma warning (disable :4996) 
using namespace std;
//int main()
//{
//	string s1,s2;
//	/*cin >> s1;
//	cin >> s2;*/
//	getline(cin, s1);
//	getline(cin, s2);   //aeiou
//	int hashtable[256] = { 0 };  
//	for (size_t i = 0; i < s2.size(); ++i)   
//	{
//		hashtable[s2[i]]++;
//	}
//	string ret;   
//	for (size_t i = 0; i < s1.size(); ++i) 
//	{
//		if (hashtable[s1[i]] == 0)
//			ret += s1[i];
//	}        cout << ret << endl;   
//
//	return 0;
//}
//namespace bite
//{
//	// 深拷贝--简介版
//	class string
//	{
//	public:
//		string(char* str = "")
//		{
//			if (nullptr == str)
//				str = "";
//
//			// 申请空间
//			_str = new char[strlen(str) + 1];
//
//			// 存放str中的字符
//			strcpy(_str, str);
//		}
//
//		// vs2013: _str指针的默认值给的是nullptr
//		// 其他编译器：_str指针的默认值给的可能是随机值
//		string(const string& s)
//			: _str(nullptr)
//		{
//			string strTemp(s._str);
//			swap(_str, strTemp._str);
//		}
//
//		// s2 = s1;
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				string strTemp(s);
//				swap(_str, strTemp._str);
//			}
//			return *this;
//		}
//#if 0
//		string& operator=(string s)
//		{
//			swap(_str, s._str);
//			return *this;
//		}
//
//#endif
//		~string()
//		{
//			if (_str)
//			{
//				delete[] _str;
//				_str = nullptr;
//			}
//		}
//	private:
//		char* _str;
//	};
//}
//
//void TestString()
//{
//	bite::string s1("hello");
//	bite::string s2(s1);
//	bite::string s3;
//
//	s3 = s1;
//}
//
//int main()
//{
//	TestString();
//	return 0;
//}
void TestString4()
{
	string s(20, '$');
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(20);
	cout << s.size() << endl;
	cout << s.capacity() << endl;


	s.reserve(40);
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(24);
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(10);
	cout << s.size() << endl;
	cout << s.capacity() << endl;
}
int main()
{
	TestString4();
	return 0;
}
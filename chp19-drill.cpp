#include "std_lib_facilities.h"

template <typename T>
struct S
{
private:
	T val;
public :
	
  
	S()
	{
		val = 0;
	}
	S(T val2)
	{
		val=val2;
	}
	
	T get();

  
	{
	return val;
	}
	*/ 
	const T get() const;
	void operator=(const T&);
	/*
	
	void set(T val3)
	{
		val = val3;
	}
	*/

};


template<typename T>
 T S<T>::get()
	{
		return val;
	}
 
 template<typename T>
 const T S<T>::get() const
 {
	 return val;
 }
 
template <typename T>
void S<T>:: operator=(const T& val3)
{
	val = val3;
}

 template<typename T>
 void read_val(T& v)
 {
	 cin >> v;
}
int main()
{

  
  
	 S<int> intS(1);
	 S<char> charS('A');
	 S<double> doubS(1.1);
	 S<string> strS("String A");
	 S<vector<int>> vecS ({ 1, 2, 3 });
	 /*
	
  
	  cout << intS.val<<endl;
	 cout << charS.val << endl;
	 cout << doubS.val << endl;
	 cout << strS.val << endl;
	 for(int i : vecS.val)
	 cout << i <<" ";
	 */ 
	
	 cout << intS.get()<<endl;
	 cout << charS.get() << endl;
	 cout << doubS.get() << endl;
	 cout << strS.get() << endl;
	 for(int i : vecS.get())
	 cout << i <<" ";
	 cout << endl;
	 
	 int i1; read_val(i1); S<int> i1S(i1);

	double d1; read_val(d1); S<double> d1S(d1);

	 char c1; read_val(c1); S<char> c1S(c1);
	 cout << i1S.get() << endl;
	 cout << d1S.get() << endl;
	 cout << c1S.get() << endl;
	 
	return 0;
}

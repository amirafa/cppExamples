//overloading (+,=
_____________________________________________ +
#include <iostream>
#include <stdlib.h>
using namespace std;
class loc {
private:
	int tool;
	int arz;
public:
	loc() {};
	loc(int a,int b) {
		tool = a;
		arz = b;
	}
	void show() {
		cout << "tool1 + tool2 = " << tool << "         arz1 + arz2 = " << arz;
	}
	loc operator + (loc op);
};
loc loc::operator +(loc op) {
	loc t;
	t.tool =  tool + op.tool;
	t.arz = arz + op.arz;
	return t;
}

int main() {
	loc a1(10, 20), a2(5, 30);
	a1 = a1 + a2;
	a1.show();
	cin.get();
}
_________________________________________________   =
#include <iostream>
#include <stdlib.h>
using namespace std;
class loc {
private:
	int tool;
	int arz;
public:
	loc() {};
	loc(int a,int b) {
		tool = a;
		arz = b;
	}
	void show() {
		cout << "tool1 + tool2 = " << tool << "         arz1 + arz2 = " << arz;
	}
	loc operator = (loc op);
};
loc loc::operator =(loc op) {
	tool = op.tool;
    arz =  op.arz;
	return *this;
}

int main() {
	loc a1(10, 20), a2(5, 30);
	a1 = a2;
	a1.show();
	cin.get();
}    
___________________________________________________________   ++ (pre)
#include <iostream>
#include <stdlib.h>
using namespace std;
class loc {
private:
	int tool;
	int arz;
public:
	loc() {};
	loc(int a,int b) {
		tool = a;
		arz = b;
	}
	void show() {
		cout << "tool1 + tool2 = " << tool << "         arz1 + arz2 = " << arz;
	}
	loc operator ++ ();  // ++()
};
loc loc::operator ++(){
	tool++;
	arz++;
	return *this;
}

int main() {
	loc a1(10, 20);
	++a1;  //important ++ -> a1
	a1.show();
	cin.get();
} 
___________________________________________________    ++(after)
#include <iostream>
#include <stdlib.h>
using namespace std;
class loc {
private:
	int tool;
	int arz;
public:
	loc() {};
	loc(int a,int b) {
		tool = a;
		arz = b;
	}
	void show() {
		cout << "tool1 + tool2 = " << tool << "         arz1 + arz2 = " << arz;
	}
	loc operator ++ (int x); //++(int x)
};
loc loc::operator ++(int x){
	tool++;
	arz++;
	return *this;
}

int main() {
	loc a1(10, 20);
	a1++;  //important a1 -> ++
	a1.show();
	cin.get();
}    
_________________________________

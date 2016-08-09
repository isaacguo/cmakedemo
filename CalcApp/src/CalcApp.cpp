//============================================================================
// Name        : CalcApp.cpp
// Author      : Isaac Guo
// Version     :
// Copyright   : GPL
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int add(int x, int y)
{
return x+y;
}

int main(int argc, char** argv) {
        int foo=10;
	int bar=20;
	cout<<"*************"<<endl;;
	cout<<endl;
	cout<< "foo+bar = "<<add(foo, bar)<<endl;;
	cout<<endl;
	cout<<"*************"<<endl;

	return 0;
}

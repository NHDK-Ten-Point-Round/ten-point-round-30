#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc , char* argv[]){
	registerValidation(argc,argv);

	const int group = validator.group()[0]-'0';

	string a = inf.readString();

	for(int i=0;i<a.size();i++){
		ensuref(!((a[i]<'a'||a[i]>'z')&&(a[i]<'A'||a[i]>'Z')),"Err0r");
	}

	inf.readEof();
}
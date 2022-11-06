#include "testlib.h"
#include <bits/stdc++.h>
 
using namespace std;
 
const int MAXA = 5000;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    string s;
    int len=rnd.next(2500,5000);
	for(int i=0;i<len;i++){
		int y=rnd.next(1,4),e=rnd.next(1,2);
		if(e==1){
			if(rnd.next(0,1)){
				s+="E";
			}
			else s+="e";
			i++;
		}
		if(y==1){
			if(rnd.next(0,1)){
				s+="Y";
			}
			else s+="y";
			i++;
		}
		if(y!=1&&e!=1){
			s+=char('a'+rnd.next(0,25));
			// if(rnd.next(0,1)){
			// 	s[i]=(char(s[i]+('A'-'a')));
			// }
		}
	}
	cout<<s<<"\n";
}
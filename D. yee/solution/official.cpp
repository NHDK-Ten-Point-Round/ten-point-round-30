#include "iostream"
using namespace std;
int main(){
	string s;
	cin>>s;
	int cnt=0;
	bool y=0;
	int cnt_e=0;
	for(char c:s){
		if(c>='A'&&c<='Z'){
			c=c+('a'-'A');
		}
		if(c=='y'){
			y=1;
		}
		else if(c=='e'&&y){
			cnt_e++;
			if(cnt_e==2){
				cnt++;
				y=0;
				cnt_e=0;
			}
		}
	}
 
	cout<<cnt<<"\n";
}
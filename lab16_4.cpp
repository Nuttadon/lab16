#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &i,int &j,int &k,int &l){
	int gach,ct=0;
	int con[]={i,j,k,l};
	for(int n=4;n>0;n--){
		gach=rand()%n+ct;
		swap(con[gach],con[ct]);
	    ct++;
	}
	i=con[0];
	j=con[1];
	k=con[2];
	l=con[3];

}
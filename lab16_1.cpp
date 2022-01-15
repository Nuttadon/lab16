#include<iostream>
using namespace std;

int main(){
	int a=5;
	char b='A';
	char &c=b;
	int *x=&a;
	char *y=&c;
	int **z=&x;
	
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<(void*)y<<" "<<z<<endl;
	cout <<&a<<" "<<(void*)&b<<" "<<(void*)&c<<" "<<&x<<" "<<&y<<" "<<&z<<endl;
	c+=5;
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<(void*)y<<" "<< z<<endl;
    *y+=17;
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<(void*)y<<" "<< z<<endl;
	*x+=1;
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<(void*)y<<" "<< z<<endl;
	*(*z)+=1;
	cout <<a<<" "<<b<<" "<<c<<" "<<x<<" "<<(void*)y<<" "<< z<<endl;
	
	
	return 0;
}

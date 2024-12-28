#include <bits/stdc++.h>
using namespace std;
#define N 4
double rd(int a,int b) {
	char s[1000]={0};
	sprintf(s,"%d.%d",a,b);
	double c;
	sscanf(s,"%lf",&c);
	return c;
}
int cnt=N;
void f(double x) {
	while(1) {
		if(x==11.4514) {
			cnt--;
			break;
		}
		x=sin(sin(cos(cos(sin(sin(sin(114514*x)))))))*19.19810;
		//cout<<a<<endl;
	}
}

int main() {
	srand(time(0));
	thread a[N];
	for(int i=0;i<N;i++) {
		int ab=rand()%100,c=rand();
		int d=rd(ab,c);
		a[i]=thread(f,d);
	}
	while(cnt) {
		cout<<cnt<<endl;
		for(volatile int i=0;i<=51451419;i++);
		system("clear");
	}
	return 0;
}

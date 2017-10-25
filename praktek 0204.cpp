#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	int LR=42;
	cout<<"Luas Rumah		:"<<LR<<"m2"<<endl;
	double LP=1.87596;
	cout<<"Luas 1 box Parket	:"<<LP<<"m2"<<endl;
	double JP=LR/LP;
	cout<<"jumlah box parket	:"<<JP<endl;
	double BPR=JP*500;
	cout<<"biaya parket (Rp)	:"<<BPR<<endl;
	int BPS=LR*20;
	cout<<"biaya pasang (Rp)	:"<<BPS<<endl;
	
}

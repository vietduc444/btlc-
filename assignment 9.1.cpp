#include<iostream>
#include<math.h>
using namespace std;

class Point{
	private:
	    float x, y ;//x la hoanh do, y la tung do
	public:
		//Ham nhap hoanh, tung do
		void nhap(){
			cout << "Nhap hoanh do:";
			cin >> x;
			cout << "Nhap tung do:";
			cin >> y;
			cout << endl;
		}
		//Ham hien thi
		void hien(){
			cout <<"Diem co toa do la: (" << x << ";" << y << ")" << endl;
		}
		//Ham gan hoanh do
		void ganhoanh(float a){
			x = a;
		}
		//ham gan tung do
		void gantung(float b){
			y = b;
		}
		//ham lay hoanh do
		float layhoanh(){
			return x;
		}
		//ham lay tung do
		float laytung(){
			return y;
		}
		//Ham dong thoi gan ca hoanh va tung
		void ganhai(float a, float b){
			x = a;
			y = b;
		}
		//Ham dong thoi lay ca hoanh va tung
		float layhai(){
			return (x, y);
		}
		//Ham tinh khoang cach
		float kc( const Point&p1,const Point&p2){
			return (sqrt( pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)));
		}
};
int main(){
	Point a;
	int x = 2;
	a.ganhoanh(x);
	a.nhap();
	a.hien();	
	a.layhoanh();
	a.laytung();
	Point b;
	b.nhap();
	b.hien();
	b.layhai();
	
	float uu = a.kc(a, b);
	cout << "Khoang cach giua hai diem la:" << uu << endl;
	return 0;
}


#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Car {

	public:
		int x, y;
	       	string car_number;

	Car(int x, int y, string car_number){
		this->x = x;
		this->y = y;

		this->car_number = car_number;
	}
	int dist() {
		return (this->x*this->x) + (this->y + this->y);
	}
	void print(){
		cout << x << " " << y << ":" << car_number << endl;
	}
};

class CarCompareFunctor{
	public:
		bool operator()(Car a, Car b){
			return a.dist() > b.dist();
		}

};

int main(){
	string car_num;
	int x[] = {1,2,5,66,7,2,7,9};
	int y[] = {2,0,2,7,8,6,8,9};

	priority_queue<Car, vector<Car>, CarCompareFunctor> pq;

	for(int i = 0;i < 8;i++){
		car_num = "MH-OA " + std::to_string(x[i] * y[i] + 100);
		Car c = Car(x[i], y[i], car_num);
		pq.push(c);
	}
		
	while(!pq.empty()){
		Car ref = pq.top();
		ref.print();
		pq.pop();
	}
}

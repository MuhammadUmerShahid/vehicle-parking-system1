#include<iostream>
using namespace std;
class parking_menu{
public:
	int input;
	int _cycle = 0, _bike = 0, _rickshaw = 0, _car = 0, _bus = 0, _truck = 0, amount = 0, count = 0;
	// int cy, b, r , c , buss , t , amount , count ;
public:
	void menu(){
		cout << "press 1 to see the normal parking charges\n";
		cout << "press 2 for add cycle \t    press 11 for remove cycle\n";
		cout << "press 3 for add bike \t    press 33 for remove bike\n";
		cout << "press 4 for add rickshaw    press 44 for remove rickshaw\n";
		cout << "press 5 for add car \t    press 55 for remove car\n";
		cout << "press 6 for add bus \t    press 66 for remove bus\n";
		cout << "press 7 for truck \t    press 77 for remove truck\n";
		cout << "press 8 to show the record\n";
		cout << "press 9 to delete the record\n";
		cout << "press 0 to EXIT the program\n";
		cin >> input;
	}
};
class add_vehicle :public parking_menu{
public:
	void add_logic(){
		if (input == 1){
			cout << "**********************************" << endl;
			cout << " NORMAL PARKING CHARGES\n";
			cout << "    Cycle    = 10 \n";
			cout << "    Bike     = 20 \n";
			cout << "    Richshaw = 30 \n";
			cout << "    Car      = 50 \n";
			cout << "    Bus      = 80 \n";
			cout << "    Truck    = 100\n";
			cout << "**********************************" << endl;
		}
		else if (input == 2){
			if (count <= 100)
			{
				_cycle++;
				amount = amount + 10;
				count = count + 1;
			}
			else
			{
				cout << "Sorry! Parking is full\n";
			}
		}
		else if (input == 3){
			if (count <= 100)
			{
				_bike++;
				amount = amount + 20;
				count = count + 1;
			}
			else
			{
				cout << "Sorry! Parking is full\n";
			}
		}
		else if (input == 4){
			if (count <= 100)
			{
				_rickshaw++;
				amount = amount + 30;
				count = count + 1;
			}
			else{
				cout << "Sorry! Parking is full\n";
			}
		}
		else if (input == 5){
			if (count <= 100)
			{
				_car++;
				amount = amount + 50;
				count = count + 1;
			}
			else
			{
				cout << "Sorry! Parking is full\n";
			}
		}
		else if (input == 6){
			if (count <= 100)
			{
				_bus++;
				amount = amount + 80;
				count = count + 1;
			}
			else
			{
				cout << "Sorry! Parking is full\n";
			}
		}
		else if (input == 7){
			if (count <= 100)
			{
				_truck++;
				amount = amount + 100;
				count = count + 1;
			}
			else
			{
				cout << "Sorry! Parking is full\n";
			}
		}
	}
};
class remove_vehicle :public add_vehicle{
public:
	void remove_logic(){
		if (input == 22){
			if (count <= 100)
			{
				_cycle--;
			//	amount = amount - 10;
				count = count - 1;
			}
			else
			{
				cout << "Sorry! Parking is full\n";
			}
		}
		else if (input == 33){
			if (count <= 100)
			{
				_bike--;
			//	amount = amount - 20;
				count = count - 1;
			}
			else
			{
				cout << "Sorry! Parking is full\n";
			}
		}
		else if (input == 44){
			if (count <= 100)
			{
				_rickshaw--;
			//	amount = amount - 30;
				count = count - 1;
			}
			else{
				cout << "Sorry! Parking is full\n";
			}
		}
		else if (input == 55){
			if (count <= 100)
			{
				_car--;
			//	amount = amount - 50;
				count = count - 1;
			}
			else
			{
				cout << "Sorry! Parking is full\n";
			}
		}
		else if (input == 66){
			if (count <= 100)
			{
				_bus--;
			//	amount = amount - 80;
				count = count - 1;
			}
			else
			{
				cout << "Sorry! Parking is full\n";
			}
		}
		else if (input == 77){
			if (count <= 100)
			{
				_truck--;
			//	amount = amount - 100;
				count = count - 1;
			}
			else
			{
				cout << "Sorry! Parking is full\n";
			}
		}
	}
};
class record :public remove_vehicle{
public:
	void vehicle_record(){
		if (input == 8){
			cout << "         RECORD" << endl;
			cout << "The number of vehicles parked = " << count << endl << endl;
			cout << "The total number of cycle parked    = " << _cycle << "     amount = " << _cycle * 10 << endl;
			cout << "The total number of bike parked     = " << _bike << "     amount = " << _bike * 20 << endl;
			cout << "The total number of rickshaw parked = " << _rickshaw << "     amount = " << _rickshaw * 30 << endl;
			cout << "The total number of car parked      = " << _car << "     amount = " << _car * 50 << endl;
			cout << "The total number of bus parked      = " << _bus << "     amount = " << _bus * 80 << endl;
			cout << "The total number of truck parked    = " << _truck << "     amount = " << _truck * 100 << endl << endl;
			cout << "The total amount = " << amount << endl << endl;

			cout << "**********************************" << endl;
		}
	}
};
class delrecord :public record{
public:
	void record_del(){
		if (input == 9){
			amount = 0;
			count = 0;
			_cycle = 0;
			_bike = 0;
			_rickshaw = 0;
			_car = 0;
			_bus = 0;
			_truck = 0;
			cout << "**********************************" << endl;
			cout << "RECORD DELETED" << endl;
			cout << "**********************************" << endl;
		}
	}
};
class quick :public delrecord{
public:
	void Quick(){
		if (input == 0){
			cout << "    THE END \n    ********\n    GOOD BYE\n";
			exit(0);
		}
	//	else{
	//		cout << "input invalid number\n";
	//	}
	}
};
int main(){
	cout << "\n\tVEHICLE PARKING SYSTEM\n\n";
	quick quick_obj;
	while (true)
	{
		quick_obj.menu();
		quick_obj.add_logic();
		quick_obj.remove_logic();
		quick_obj.vehicle_record();
		quick_obj.record_del();
		quick_obj.Quick();
	}
	system("pause");
}
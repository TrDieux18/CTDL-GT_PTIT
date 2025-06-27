#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    string p1[] = {"Minh","a","sao","doi","ta"};
	string p2[] = {"Lai", "chang", "xuat","phat","di","chung","mot","chuyen","ga","doi"};
	string p3[] = {"Da","viet","lo","cau","chuyen","yeu","khong","vui"};
	string p4[] = {"Thu","loi","cho","toi","khong","the","doi","luc","gap","nguoi"};
	string p5[] = {"Danh","hen","noi","khac","nhe"};
	string p6[] = {"Dung","buon","yeu","thuong", "oi"};
    for (const string& answer : p1) {
        cout << answer <<" ";
        this_thread::sleep_for(chrono::milliseconds(300)); 
    }
	cout << endl;
	for (const string& answer : p2) {
        cout << answer <<" ";
        this_thread::sleep_for(chrono::milliseconds(500)); 
    }
	cout << endl;
	for (const string& answer : p3) {
        cout << answer <<" ";
        this_thread::sleep_for(chrono::milliseconds(300)); 
    }
	cout << endl;
	for (const string& answer : p4) {
        cout << answer <<" ";
        this_thread::sleep_for(chrono::milliseconds(500)); 
    }
	cout << endl;
	for (const string& answer : p5) {
        cout << answer <<" ";
        this_thread::sleep_for(chrono::milliseconds(200)); 
    }
	cout << endl;
	for (const string& answer : p6) {
        cout << answer <<" ";
        this_thread::sleep_for(chrono::milliseconds(500)); 
    }

    return 0;
}

#include <iostream>
#include "blocks.h"
//#include "pieces.h"
using namespace std;

int main(){

	blocks b;

/*

	cout << d2h_bar << hd_bar << d3bh_bar << h_bar << d4h_bar << bh_bar << endl;

	cout << d2v_bar << endl;
	cout << vd_bar << endl;
	cout << d3bv_bar << d3bv_bar << d3bv_bar << d3bv_bar << endl;
	cout << v_bar << endl;
	cout << d4bv_bar << d4bv_bar << d4bv_bar << d4bv_bar << endl;
	cout << bv_bar << endl;

*/

	b.title_box("D34DL1NE - Task Manager");

	b.text_box("Eric");

	b.top_cell("this");
	b.middle_cell("that");
	b.middle_cell("uswe");
	b.middle_cell("yout");
	b.bottom_cell("uswe");

	cout << endl;

	b.list_item("1. Thing One");
	b.list_item("2. Thing Two");
	b.list_item("3. Thing Three");


}

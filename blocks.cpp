#include <iostream>
#include <stdlib.h>
#include <sys/ioctl.h>
#include "blocks.h"
using namespace std;

blocks::blocks(){

}

void blocks::title_box(string str){
	title_top(str.length() + 2);
	box_middle(str, str.length() + 2);
	box_bottom(str.length() + 2);
}

void blocks::text_box(string str){
	box_top(str.length() + 2);
	box_middle(str, str.length() + 2);
	box_bottom(str.length() + 2);
}

void blocks::top_cell(string str){
	box_top(str.length() + 2);
	box_middle(str, str.length() + 2);
	cell_separator(str.length() + 2);
}

void blocks::middle_cell(string str){
	box_middle(str, str.length() + 2);
	cell_separator(str.length() + 2);
}

void blocks::bottom_cell(string str){
	box_middle(str, str.length() + 2);
	box_bottom(str.length() + 2);
}

void blocks::list_item(string str, bool sel){
	list_middle(str, str.length() + 2, sel);
	list_bottom(str.length() + 2);
}

void blocks::title_top(int size){
	resize(size);
	for(int i = 0; i < cols; i++)
		cout << h_bar;
	cout << tms_corner;
	for(int i = 0; i < size; i++)
		cout << h_bar;
	cout << tms_corner;
	for(int i = 0; i < cols; i++)
		cout << h_bar;
	cout << endl;
}

void blocks::box_top(int size){
	resize(size);
	for(int i = 0; i < cols; i++)
		cout << " ";
	cout << tls_corner;
	for(int i = 0; i < size; i++)
		cout << h_bar;
	cout << trs_corner;
	for(int i = 0; i < cols; i++)
		cout << " ";
	cout << endl;
}

void blocks::box_middle(string str, int size){
	resize(size);
	for(int i = 0; i < cols; i++)
		cout << " ";
	cout << v_bar << " " << str << " " << v_bar;
	for(int i = 0; i < cols; i++)
		cout << " ";
	cout << endl;
}

void blocks::box_bottom(int size){
	resize(size);
	for(int i = 0; i < cols; i++)
		cout << " ";
	cout << bls_corner;
	for(int i = 0; i < size; i++)
		cout << h_bar;
	//cout << bms_corner << endl;
	cout << brs_corner;
	for(int i = 0; i < cols; i++)
		cout << " ";
	cout << endl;
}

void blocks::cell_separator(int size){
	resize(size);
	for(int i = 0; i < cols; i++)
		cout << " ";
	cout << mls_corner;
	for(int i = 0; i < size; i++)
		cout << h_bar;
//	cout << mms_corner;
	cout << mrs_corner;
	for(int i = 0; i < cols; i++)
		cout << " ";
	cout << endl;
}

void blocks::list_middle(string str, int size, bool sel){
	resize(size);
	if(sel == true){
		for(int i = 0; i < cols - 1; i++)
			cout << " ";
		cout << l_arrow;
	}else{
		for(int i = 0; i < cols; i++)
			cout << " ";
	}
	cout << " " << str << " ";
	for(int i = 0; i < cols; i++)
		cout << " ";
	cout << endl;
}

void blocks::list_bottom(int size){
	resize(size);
	for(int i = 0; i < cols + 3; i++)
		cout << " ";
	cout << " ";
	for(int i = 0; i < size - 5; i++)
		cout << h_bar;
	//cout << bms_corner << endl;
	cout << " ";
	for(int i = 0; i < cols; i++)
		cout << " ";
	cout << endl;
}

void blocks::resize(int size){
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
	cols = (w.ws_col - size - 2)/2;
}

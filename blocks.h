#include "pieces.h"

class blocks{

	public:

		blocks();
		//top level functions
		void title_box(std::string str);
		void text_box(std::string str);
		void top_cell(std::string str1);
		void middle_cell(std::string str1);
		void bottom_cell(std::string str1);
		void list_item(std::string str, bool sel);
		
		//lower level
		void title_top(int size);
		void title_middle(std::string str, int size);
		void title_bottom(int size);
		
		void box_top(int size);
		void box_middle(std::string str, int size);
		void box_bottom(int size);

		void cell_separator(int size);

		void list_middle(std::string str, int size, bool sel);
		void list_bottom(int size);
		void resize(int size);

	private:

		int cols;

};

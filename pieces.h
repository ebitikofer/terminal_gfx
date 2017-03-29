#include <string>

	//BARS
	//horizontal
	static const std::string h_bar = "\u2500";
	static const std::string lh_bar = "\u2574";
	static const std::string rh_bar = "\u2576";
	//vertical
	static const std::string v_bar = "\u2502";
	static const std::string tv_bar = "\u2575";
	static const std::string bv_bar2 = "\u2577";

	//DASH BARS
	//horizontal
	static const std::string d2h_bar = "\u254C";
	static const std::string d3h_bar = "\u2504";
	static const std::string d4h_bar = "\u2508";
	//vertical
	static const std::string d2v_bar = "\u254E";
	static const std::string d3v_bar = "\u2506";
	static const std::string d4v_bar = "\u250A";

	//CORNERS
	static const std::string tls_corner = "\u250C";
	static const std::string tms_corner = "\u252C";
	static const std::string trs_corner = "\u2510";

	static const std::string mls_corner = "\u251C";
	static const std::string mms_corner = "\u253C";
	static const std::string mrs_corner = "\u2524";

	static const std::string bls_corner = "\u2514";
	static const std::string bms_corner = "\u2534";
	static const std::string brs_corner = "\u2518";


/*

	//BARS
	//horizontal bold
	static const std::string bh_bar = "\u2501";
	static const std::string lbh_bar = "\u2578";
	static const std::string rbh_bar = "\u257A";
	//horizontal bold dash
	static const std::string d2bh_bar = "\u255D";
	static const std::string d3bh_bar = "\u2505";
	static const std::string d4bh_bar = "\u2509";
	//vertical bold
	static const std::string bv_bar = "\u2503";
	static const std::string tbv_bar = "\u2579";
	static const std::string bbv_bar = "\u257B";
	//vertical bold dash
	static const std::string d2bv_bar = "\u255F";
	static const std::string d3bv_bar = "\u2507";
	static const std::string d4bv_bar = "\u250B";

	//CORNERS
	//horizontal bold
	static const std::string tl_hb_corner = "\u250D";
	static const std::string ml_hb_corner = "\u251D";
	static const std::string bl_hb_corner = "\u2515";
	static const std::string tm_hb_corner = "\u251F";
	static const std::string mm_hb_corner = "\u253F";
	static const std::string bm_hb_corner = "\u2537";
	static const std::string tr_hb_corner = "\u2511";
	static const std::string mr_hb_corner = "\u2525";
	static const std::string br_hb_corner = "\u2519";
	//vertical bold
	static const std::string tl_vb_corner = "\u250E";
	static const std::string ml_vb_corner = "\u2520";
	static const std::string bl_vb_corner = "\u2516";
	static const std::string tm_vb_corner = "\u2530";
	static const std::string mm_vb_corner = "\u2542";
	static const std::string bm_vb_corner = "\u2538";
	static const std::string tr_vb_corner = "\u2512";
	static const std::string br_vb_corner = "\u251A";
	static const std::string mr_vb_corner = "\u2528";
	//bold
	static const std::string tl_sb_corner = "\u250F";
	static const std::string ml_sb_corner = "\u2523";
	static const std::string bl_sb_corner = "\u2517";
	static const std::string tm_sb_corner = "\u2533";
	static const std::string mm_sb_corner = "\u254B";
	static const std::string bm_sb_corner = "\u253B";
	static const std::string tr_sb_corner = "\u2513";
	static const std::string mr_sb_corner = "\u252B";
	static const std::string br_sb_corner = "\u251B";

			//left
				//middle
		static const std::string ml_tvb_corner = "\u251E";
		static const std::string ml_bvb_corner = "\u251F";
		static const std::string ml_tvhb_corner = "\u2521";
		static const std::string ml_bvhb_corner = "\u2522";
			//middle
				//top
		static const std::string tm_lhb_corner = "\u251D";
		static const std::string tm_rhb_corner = "\u251E";
		static const std::string tm_lhvb_corner = "\u2531";
		static const std::string tm_rhvb_corner = "\u2532";
				//middle
		static const std::string mm_lhb_corner = "\u253D";
		static const std::string mm_rhb_corner = "\u253E";
		static const std::string mm_tvb_corner = "\u2540";
		static const std::string mm_bvb_corner = "\u2541";
		static const std::string mm_tvlhb_corner = "\u2543";
		static const std::string mm_tvrhb_corner = "\u2544";
		static const std::string mm_bvlhb_corner = "\u2545";
		static const std::string mm_bvrhb_corner = "\u2546";
		static const std::string mm_tvhb_corner = "\u2547";
		static const std::string mm_bvhb_corner = "\u2548";
		static const std::string mm_lhvb_corner = "\u2549";
		static const std::string mm_rhvb_corner = "\u254A";
				//bottom
		static const std::string bm_lhb_corner = "\u2535";
		static const std::string bm_rhb_corner = "\u2536";
		static const std::string bm_lhvb_corner = "\u2539";
		static const std::string bm_rhvb_corner = "\u253A";
			//right
				//middle
		static const std::string mr_tvb_corner = "\u2526";
		static const std::string mr_bvb_corner = "\u2527";
		static const std::string mr_tvhb_corner = "\u2529";
		static const std::string mr_bvhb_corner = "\u252A";
		//double
			//bar
		static const std::string hd_bar = "\u2550";
		static const std::string vd_bar = "\u2551";
			//left
		static const std::string tl_d_corner = "201";
		static const std::string ml_d_corner = "204";
		static const std::string bl_d_corner = "200";
			//middle
		static const std::string tm_d_corner = "203";
		static const std::string mm_d_corner = "206";
		static const std::string bm_d_corner = "202";
			//right
		static const std::string tr_d_corner = "187";
		static const std::string mr_d_corner = "185";
		static const std::string br_d_corner = "188";
		//double vertical
			//right
		static const std::string tr_dv_corner = "183";
		static const std::string mr_dv_corner = "182";
		static const std::string br_dv_corner = "189";
			//middle
		static const std::string tm_dv_corner = "210";
		static const std::string mm_dv_corner = "215";
		static const std::string bm_dv_corner = "208";
			//left
		static const std::string tl_dv_corner = "214";
		static const std::string ml_dv_corner = "199";
		static const std::string bl_dv_corner = "211";
		//double horizontal
			//right
		static const std::string tr_dh_corner = "184";
		static const std::string mr_dh_corner = "181";
		static const std::string br_dh_corner = "190";
			//middle
		static const std::string tm_dh_corner = "209";
		static const std::string mm_dh_corner = "216";
		static const std::string bm_dh_corner = "207";
			//left
		static const std::string tl_dh_corner = "213";
		static const std::string ml_dh_corner = "198";
		static const std::string bl_dh_corner = "212";
	//SLIDERS
		//arrows
		static const std::string ld_arrow = "174";
		static const std::string rd_arrow = "175";
		//sliders
		static const std::string h_slider = "233";
		static const std::string v_slider_1 = "232";
		static const std::string v_slider_2 = "237";
	//MISC
		//blocks
		static const std::string upper_half = "223";
		static const std::string lower_half = "220";
		static const std::string left_side = "221";
		static const std::string right_side = "222";
		static const std::string square = "254";
		//special corners
		static const std::string ls_sh_corner = "169";
		static const std::string rs_sh_corner = "170";
		//misc
		static const std::string degree = "167";
		static const std::string arc = "239";
		static const std::string triple_barrel = "240";
	//ANIMATIONS
		//fade
		static const std::string fade_1 = "176";
		static const std::string fade_2 = "177";
		static const std::string fade_3 = "178";

*/

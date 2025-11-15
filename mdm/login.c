#include "mdm.h"

#include <Mw/Milsko.h>

void make_login_window(void){
	MwWidget w, pic, userlabel, usercombo, passlabel, passentry;

	MwLibraryInit();
	
	w = MwVaCreateWidget(MwWindowClass, "login", NULL, (x_width() - 366) / 2, (x_height() - 183) / 2, 366, 183,
		MwNhasBorder, 1,
		MwNinverted, 0,
	NULL);
	pic = MwVaCreateWidget(MwImageClass, "image", w, 10, 10, 80, 137,
		MwNhasBorder, 1,
	NULL);
	userlabel = MwVaCreateWidget(MwLabelClass, "userlabel", w, 95, 10, MwTextWidth(w, "User:"), 16,
		MwNtext, "User:",
	NULL);
	usercombo = MwCreateWidget(MwComboBoxClass, "usercombo", w, 95, 10+16+5, 265, 18);
	passlabel = MwVaCreateWidget(MwLabelClass, "passlabel", w, 95, 10+16+5+18+5, MwTextWidth(w, "Password:"), 16,
		MwNtext, "Password:",
	NULL);
	passentry = MwVaCreateWidget(MwEntryClass, "passentry", w, 95, 10+16+5+18+5+16+5, 265, 18,
		MwNhideInput, 1,
	NULL);

	MwLoop(w);
}

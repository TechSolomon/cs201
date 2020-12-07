// least-finished.cpp
// Solomon Himelbloom
// 2 December 2020
// Least finished program example for CS 201.

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Pixmap.H>

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

void TruncateText() {
    cout << "FLTK: Truncate Text" << endl;
    exit(1);
}

void QuitWindow() {
    cout << "FLTK: Quit Window" << endl;
    exit(2);
}

int main(int argc, char **argv) {

    Fl_Window *window = new Fl_Window(340,180, "FLTK: cs201 hw8");

    // Create the FLTK application window.
    Fl_Box *box = new Fl_Box(20,40,300,100);
    box->box(FL_UP_BOX);
    box->labelfont(FL_BOLD+FL_ITALIC);
    box->labelsize(36);
    box->labeltype(FL_SHADOW_LABEL);

    // Create two instances of regular buttons.
    Fl_Button *but1 = new Fl_Button(100,60,140,25,"Truncate");
    Fl_Button *but2 = new Fl_Button(100,90,140,25,"Quit");

    window->end();
    window->show(argc, argv);
    return Fl::run();

}

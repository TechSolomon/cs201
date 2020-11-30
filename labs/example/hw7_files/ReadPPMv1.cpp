#include <fstream>
using std::ifstream;
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
  // const string filename = "parrot.ppm";
  ifstream fin("parrot.ppm");
  if (!fin) {
    cout << "Error opening parrot.ppm" << endl;
    exit(1);
  }
  cout << "Opened parrot.ppm" << endl;

  // read and verify the magic number
  string line;
  getline(fin, line);
  if (line[0]=='P' && line[1]=='3') {
    cout << "Found PPM (text)" << endl;
  } else {
    cout << "Unable to read magic number P3" << endl;
    exit(2);
  }

  // quick and dirty - process the comment
  getline(fin, line);
  if (line[0] == '#') {
    cout << "Ignoring comment" << endl;
  }

  int xres, yres, maxval;
  fin >> xres >> yres >> maxval;
  if (!fin) { cout << "Error reading res" << endl; exit(3); }
  cout << "Image Size " << xres << "x" << yres << endl;
  cout << "Maxval = " << maxval << endl;

  int r, g, b;
  int pixels2read = xres * yres;
  for ( int i=0 ; i<pixels2read ; i++ ) {
    fin >> r >> g >> b;
    if (!fin) { cout << "Error reading pixels" << endl; exit(4); }
    cout << "<" << r << "," << g << "," << b << ">" << endl;
  }

  // finish reading - store R,G,B into a vector
  // move read to a function
  // create a class for PPM files
  // HW7 - convert to grayscale (R,G,B) -> Gray
  // HW7 - convert Gray to ASCII char

  cout << "Done" << endl;
}

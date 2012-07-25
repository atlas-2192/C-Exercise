#include <iostream>
using namespace std;

int main() {
  char c;
  bool quit = false;
  while(quit == false) {
    cout << "MAIN MENU:" << endl;
    cout << "l: left, r: right, q: quit -> ";
    cin >> c;
    switch(c)
    {
    case 'l' : cout << "LEFT MENU:" << endl;
               cout << "select a or b:";
               cin >> c;
               switch(c)
               {
               case 'a' : cout << "you chose 'a'" << endl;
                   continue;
               case 'b' : cout << "you chose 'b'" << endl;
                   continue;
               default : cout << "you didn't chose a or b" << endl;
                   continue;
               }
    case 'r' : cout << "RIGHT MENU:" << endl;
               cout << "select c or d:";
               cin >> c;
               switch(c)
               {
               case 'c' : cout << "you chose 'c'" << endl;
                   continue;
               case 'd' : cout << "you chose 'd'" << endl;
                   continue;
               default : cout << "you didn't chose c or d" << endl;
                   continue;
               }
    case 'q' : cout << "quitting menu" << endl;
               quit = true;
               break;
    default : cout << "Please use l,r or q!" << endl;
    }
  }
}
                   

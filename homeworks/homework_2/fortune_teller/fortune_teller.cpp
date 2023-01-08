#include <array>
#include <iostream>
#include <map>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main() {
  std::string user_name;
  std::string time_of_year;

  std::vector<std::string> user_adjective;
  user_adjective.reserve(2);

  const std::map<std::string, std::string> nouns{
      {"spring", "STL guru"},
      {"summer", "C++ expert"},
      {"autumn", "coding beast"},
      {"winter", "software design hero"}};

  const std::array<std::string, 3> endings{
      "eats UB for breakfast",
      "finds errors quicker than the compiler",
      "is not afraid of C++ error messages"};

  cout << "Welcome to the fortune teller program!" << endl;
  cout << "Please enter your name:" << endl;
  cin >> user_name;

  cout << "Please enter the time of year when you were born:" << endl;
  cout << "(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
  cin >> time_of_year;

  cout << "Please enter an adjective:" << endl;
  cin >> user_adjective.emplace_back();
  cout << "Please enter another adjective:" << endl;
  cin >> user_adjective.emplace_back();
  
  cout << "Here is your description:" << endl;
  cout << user_name << ", the " << user_adjective.at(user_name.size() % 2)
       << " " << nouns.at(time_of_year) << " that "
       << endings[user_name.size() % 3] << endl;
}
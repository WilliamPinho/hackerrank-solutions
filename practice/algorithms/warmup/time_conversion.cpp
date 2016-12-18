#include <vector>
#include <iostream>

using namespace std;

string convertFromAMPMtoMilitary(string time)
{
  if(time.substr(0,2) == "12") {
    if(time[8] == 'A') {                                           // First, we solve for two corner cases: 12am and 12pm.
      return "00" + time.substr(2,6);
    } else {
      return time.substr(0,8);
    }
  }
  bool isPM = time[8] == 'P';                                       // We whether the time is PM or not. We do not need to do anything in case it is AM.
  time.pop_back();                                                  // After we have this information, we can remove the last two characters from our final answer.
  time.pop_back();
  if(isPM) {
    time[0] = (time[0] == '1' || time[1] - '0' > 7) ? '2' : '1';    // 8, 9, 10 and 11pm need to be converted to 20, 21, 22 or 23 in military format, so we update the first character accordingly.
    time[1] = ((time[1] - '0' + 2)%10)+'0';                         // The second digit of the hour is mapped in the following way: {1->3, 2->4,..., 7->9, 8->0, 9->1, 0->2}.
  }
  return time;
}

int main() {
  string time;
  cin >> time;
  cout << convertFromAMPMtoMilitary(time);
  return 0;
}


#include <iostream>
using namespace std;
const int num = 37;
const int k = 12;

int main() {
    int count[num];           
    int round_appearance[num]; 
    for (int i = 0; i < num; i++)
        count[i] = round_appearance[i] = 0;
    
    int input;
    int round_now = 0;
    int blacks = 0, reds = 0;
    while (++round_now) {
        cin >> input;
    	if (input < 0)
    	    break;
    	    
        count[input]++;
        round_appearance[input] = round_now;
            
        int highest_number = -1;
    	for (int i = 0; i < num; i++)
    	    if (count[i] > highest_number)
    	        highest_number = count[i];
    	
    	for (int i = 0; i < num; i++)
            if (count[i] == highest_number)
                cout << i << " ";
    	cout << endl;
    
    	for (int i = 0; i < NUMBERS; i++)
    	    if (round_appearance[i] == 0 || (round_now - round_appearance[i] > k))
                cout << i << " ";
    	cout << std::endl;
            
    	if (input != 0) {
            if (input <= 10 ||(input > 18 && input <= 28))
                if (input % 2 == 1) ++reds;
                else                ++blacks;
            else
                if (input % 2 == 0) ++reds;
                else                ++blacks;
    	}
    	
        cout << reds << " " << blacks << endl;
        cout << endl;
    }
}

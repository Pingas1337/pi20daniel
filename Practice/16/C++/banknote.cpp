#include <iostream>
#include <string_view>
using namespace std;
int main() {
    string_view str;
    string input;
    bool found = false;
    long count;
    cin >> count;
    
    for (long long i = 0; i < count; ++i) {
        cin >> input;
        str = input;
        if (str.starts_with('a') && str.ends_with("55661")) {
            found = true;
            std::cout << str << " ";
        }
    }
    if (!found) {
        cout << -1 << endl;
    }
}

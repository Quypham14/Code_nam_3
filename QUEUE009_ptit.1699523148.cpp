#include <iostream>
#include <queue>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Đọc dấu xuống dòng sau t

    while (t--) {
        string s;
        getline(cin, s);
        int k;
        cin >> k;
        cin.ignore(); // Đọc dấu xuống dòng sau k

        stringstream ss(s);
        string token;
        queue<string> myQueue;
        vector<string> reversedElements;

        while (getline(ss, token, ',')) {
            myQueue.push(token);
        }

        for (int i = 0; i < k; i++) {
            reversedElements.push_back(myQueue.front());
            myQueue.pop();
        }

        for (int i = k - 1; i >= 0; i--) {
            cout << reversedElements[i];
            if (i > 0) {
                cout << ",";
            }
        }

        while (!myQueue.empty()) {
            cout << "," << myQueue.front();
            myQueue.pop();
        }

        cout << endl;
    }

    return 0;
}

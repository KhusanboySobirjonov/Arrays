#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ofstream write("file.txt");
    int n, key, K;
    cout << "Massiv elementlar sonini kiriting: ";
    cin >> n;
    int H[n];
    cout << "Massiv elementlar qiymatini  kiriting: " << endl;
    for(int i=0; i<n; i++){
        cout << "H[" << i << "]=";
        cin >> H[i];
    }
    cout << "Kalit elementini kiriting: ";
    cin >> key;
    cout << "Qo'shadigan raqamingizni kiriting: ";
    cin >> K;
    cout << K << " ";
    write << K << " ";
    for(int i=0; i<n; i++){
        if (H[i]==key){
            continue;
        }
    cout << H[i] << "  ";
    write << H[i] << "  ";
    }
    write.close();
    return 0;
}

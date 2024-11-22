#include <iostream>
#include <vector>
using namespace std;
void print_array(int ar[], int size_ar)
{
    cout << "\nstatic array: \n";
    for (int i = 0; i < size_ar; i++) {
        cout << ar[i] << " ";
    }
}
void print_vec(vector<int>& vec) {
    cout << "\nvector: \n";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}
void func(vector<int>& vec, int* ar)
{
    int ar_duble[vec.size()];
    for (int i = 0; i < vec.size(); i++) {
        ar_duble[i] = vec [i];
    }
    for (int i = 0; i < vec.size(); i++) {
        vec[i] = ar [i];
    }
    for (int i = 0; i < vec.size(); i++) {
        ar[i] = ar_duble[i];
    }
}
int main()
{
    cout << "\033[2J\033[1;1H";
    vector <int> vec (5);
    vec = {10, 12, 14, 16, 18};
    int ar[] = {1, 3, 7, 9, 11};
    int size_ar = sizeof(ar) / sizeof(0);
    print_vec (vec);
    print_array(ar, size_ar);
    cout << "\nCHANGIG\n";
    func(vec, ar);
    print_vec(vec);
    print_array(ar, size_ar);
}
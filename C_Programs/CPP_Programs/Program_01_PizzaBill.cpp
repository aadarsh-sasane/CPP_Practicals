#include <iostream>
using namespace std;

int main()
{
    float price, totalBill;
    int quantity;

    cout << "Enter pizza price: ";
    cin >> price;

    cout << "Enter pizza quantity: ";
    cin >> quantity;

    totalBill = price * quantity;

    cout << "Total Pizza Bill = Rs. " << totalBill;

    return 0;
}

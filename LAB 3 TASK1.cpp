#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string name;
    double price;
    int quantity;

public:

    // Setter for name
    void setName(string n)
    {
        if(n != "")
            name = n;
        else
            cout << "Invalid name!" << endl;
    }

    // Setter for price
    void setPrice(double p)
    {
        if(p > 0)
            price = p;
        else
            cout << "Price must be greater than 0" << endl;
    }

    // Setter for quantity
    void setQuantity(int q)
    {
        if(q >= 0)
            quantity = q;
        else
            cout << "Quantity cannot be negative" << endl;
    }

    // Getters
    string getName()
    {
        return name;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantity()
    {
        return quantity;
    }
};

int main()
{
    Product p;

    string name;
    double price;
    int quantity;

    cout << "Enter product name: ";
    cin >> name;

    cout << "Enter product price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    p.setName(name);
    p.setPrice(price);
    p.setQuantity(quantity);

    cout << "\nProduct Details\n";
    cout << "Name: " << p.getName() << endl;
    cout << "Price: " << p.getPrice() << endl;
    cout << "Quantity: " << p.getQuantity() << endl;

    return 0;
}

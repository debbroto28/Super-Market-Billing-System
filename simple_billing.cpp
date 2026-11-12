
#include <iostream>
using namespace std;

int main()
{
    int choice, quantity;
    double price, total = 0;
    char again;

    cout << "=================================\n";
    cout << "     SUPERMARKET BILLING SYSTEM\n";
    cout << "=================================\n";

    while (true)
    {
        cout << "\nAvailable Products:\n";
        cout << "1. Rice       - 60 Taka/kg\n";
        cout << "2. Potato     - 40 Taka/kg\n";
        cout << "3. Onion      - 80 Taka/kg\n";
        cout << "4. Oil        - 180 Taka/liter\n";
        cout << "5. Sugar      - 120 Taka/kg\n";

        cout << "\nEnter product number (1-5): ";
        cin >> choice;

        if (choice == 1)
        {
            price = 60;
            cout << "You selected Rice.\n";
        }
        else if (choice == 2)
        {
            price = 40;
            cout << "You selected Potato.\n";
        }
        else if (choice == 3)
        {
            price = 80;
            cout << "You selected Onion.\n";
        }
        else if (choice == 4)
        {
            price = 180;
            cout << "You selected Oil.\n";
        }
        else if (choice == 5)
        {
            price = 120;
            cout << "You selected Sugar.\n";
        }
        else
        {
            cout << "Invalid product choice!\n";
            continue;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        if (quantity <= 0)
        {
            cout << "Invalid quantity!\n";
            continue;
        }

        double amount = price * quantity;

        cout << "Product Price: " << price << " Taka\n";
        cout << "Quantity: " << quantity << "\n";
        cout << "Amount: " << amount << " Taka\n";

        total = total + amount;

        cout << "\nDo you want to buy another product? (y/n): ";
        cin >> again;

        if (again == 'n' || again == 'N')
        {
            break;
        }
    }

    cout << "\n=================================\n";
    cout << "           FINAL BILL\n";
    cout << "=================================\n";

    cout << "Total Amount: " << total << " Taka\n";

    double discount = 0;

    if (total >= 1000)
    {
        discount = total * 0.10;
    }

    cout << "Discount: " << discount << " Taka\n";

    double finalAmount = total - discount;

    cout << "---------------------------------\n";
    cout << "Final Amount: " << finalAmount << " Taka\n";
    cout << "=================================\n";

    cout << "      THANK YOU FOR SHOPPING!\n";

    return 0;
}

#include <iostream>
using namespace std;

class Laptop {
private:
    string brand;
    string model;
    int serial;
    float price;
    int ram;
    float screensize;

public:
    Laptop(string br, string mod, int ser, float pri, int ra, float scs) {
      
        brand = br;
        model = mod;
        serial = ser;
        price = pri;
        ram = ra;
        screensize = scs;
    }

    void display() {
    
        cout << "The Brand of the laptop is : " << brand << endl;
        cout << "The Model of the laptop is : " << model << endl;
        cout << "The Serial of the laptop is : " << serial << endl;
        cout << "The Price of the laptop is : " << price << endl;
        cout << "The RAM of the laptop is : " << ram << " GB" << endl;
        cout << "The Screen size of the laptop is : " << screensize << " inches" << endl;
    
    }

    void upgrade_ram(int upgradeAmount) {
       
        ram = ram + upgradeAmount;
       
        cout << "The upgraded RAM of the laptop is : " << ram << " GB" << endl;
    }
};

int main() {
    
    Laptop obj("Apple", "MacBook Pro", 12345, 1200.50, 8, 15.6);

    obj.display();  

    
    obj.upgrade_ram(4);

    return 0;
}

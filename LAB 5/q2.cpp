#include <iostream>
using namespace std;
class WiFi { public: void connect() { cout << "WiFi connected\n"; } };
class Zigbee { public: void connect() { cout << "Zigbee connected\n"; } };
class Hub : public WiFi, public Zigbee {
public:
    void connect() { WiFi::connect(); Zigbee::connect(); }
};
int main() { Hub h; h.connect(); }

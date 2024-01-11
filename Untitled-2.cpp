#include <iostream>
#include <string>

using namespace std;

class Truck {
public:
    double Speed;
    double Volume;
    double Length;
    string Model;

    void inputTruckDetails() {
        cout << "������� �������� ���������: ";
        cin >> Speed;
        cout << "������� ����� ���������: ";
        cin >> Volume;
        cout << "������� ������ �����: ";
        cin >> Length;
        cout << "������� ������ ���������: ";
        cin >> Model;
    }
};

class DepartureCity {
public:
    string cityName;

    void inputDepartureCity() {
        cout << "������� ����� �����������: ";
        cin >> cityName;
    }
};

class DestinationCity {
public:
    string cityName;

    void inputDestinationCity() {
        cout << "������� ����� ��������: ";
        cin >> cityName;
    }
};

class DriverLevel {
public:
    int stars;

    void inputDriverLevel() {
        cout << "����� ������� �� �������������? (1-3 �����: �����, �������, ������): ";
        cin >> stars;
    }
};

class Client {
public:
    string clientName;

    void inputClient() {
        cout << "������� ���� ��� � �������: ";
        cin >> clientName;
    }
};

class Number {
public:
    string clientNumber;

    void inputNumber() {
        cout << "��� ����� ��������: ";
        cin >> clientNumber;
    }
};

int main() {
	setlocale(LC_ALL, "Russian");
    Truck myTruck;
    myTruck.inputTruckDetails();

    DepartureCity departure;
    departure.inputDepartureCity();

    DestinationCity destination;
    destination.inputDestinationCity();

    DriverLevel driver;
    driver.inputDriverLevel();
    
    Client client;
    client.inputClient();
    
    Number number;
    number.inputNumber();
    
    cout << "��� ����� ������!" << endl;

    return 0;
}


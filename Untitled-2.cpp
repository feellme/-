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
        cout << "Введите скорость грузовика: ";
        cin >> Speed;
        cout << "Введите объем грузовика: ";
        cin >> Volume;
        cout << "Введите длинну груза: ";
        cin >> Length;
        cout << "Введите модель грузовика: ";
        cin >> Model;
    }
};

class DepartureCity {
public:
    string cityName;

    void inputDepartureCity() {
        cout << "Введите город отправления: ";
        cin >> cityName;
    }
};

class DestinationCity {
public:
    string cityName;

    void inputDestinationCity() {
        cout << "Введите город доставки: ";
        cin >> cityName;
    }
};

class DriverLevel {
public:
    int stars;

    void inputDriverLevel() {
        cout << "Какой уровень вы предпочитаете? (1-3 звезд: Старт, Комфорт, Бизнес): ";
        cin >> stars;
    }
};

class Client {
public:
    string clientName;

    void inputClient() {
        cout << "Введите ваше Имя и Фамилию: ";
        cin >> clientName;
    }
};

class Number {
public:
    string clientNumber;

    void inputNumber() {
        cout << "Ваш номер телефона: ";
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
    
    cout << "Ваш заказ принят!" << endl;

    return 0;
}


#include <iostream>
#include <string>

class Patient {
private:
    std::string name;
    int age;
public:
    Patient(std::string name, int age) : name(name), age(age) {}

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

class MedicalService {
public:
    void provideCheckup(const Patient& patient) {
        std::cout << "Providing checkup for patient: " << patient.getName() << std::endl;
    }

    void prescribeMedication(const Patient& patient, std::string medication) {
        std::cout << "Prescribing medication " << medication << " for patient: " << patient.getName() << std::endl;
    }

    void scheduleSurgery(const Patient& patient, std::string surgeryType) {
        std::cout << "Scheduling surgery of type " << surgeryType << " for patient: " << patient.getName() << std::endl;
    }
};

int main() {
    Patient patient("John Doe", 35);
    MedicalService medicalService;

    medicalService.provideCheckup(patient);
    medicalService.prescribeMedication(patient, "Painkillers");
    medicalService.scheduleSurgery(patient, "Appendectomy");

    return 0;
}

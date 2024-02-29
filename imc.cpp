#include <iostream>
#include <cstdlib> // for atof function

using std::cout;
using std::endl;
using std::atof;

char* imc(float mass, float height); // function that calcules the imc

int main(int argc, char* argv[]) {
    
    if (argc != 3) {
        cout << "Sorry, invalid input! USAGE number number." << endl;
        return 1;
    }

    float mass = atof(argv[1]);
    float height = atof(argv[2]);

    cout << mass << endl;
    cout << height << endl;

    cout << "IMC's result: " << imc(mass, height) << endl;

    return 0;

}

char* imc(float mass, float height) {

    if (mass <= 0) return "Sorry, mass data invalid!";

    if (height <= 0) return "Sorry, height data invalid!";

    float imc = mass / (height * height);

    if (imc < 17) {
        return "Muito abaixo do peso";
    } else if (imc >= 17 & imc < 18.5) {
        return "Abaixo do peso";
    } else if (imc >= 18.5 & imc < 25) {
        return "Peso normal";
    } else if (imc >= 25 & imc < 30) {
        return "Acima do peso";
    } else if (imc >= 30 & imc < 35) {
        return "Obesidade";
    } else if (imc >= 35 & imc < 40) {
        return "Obesidade severa";
    } else if (imc >= 40) {
        return "Obesidade morbida";
    }

}
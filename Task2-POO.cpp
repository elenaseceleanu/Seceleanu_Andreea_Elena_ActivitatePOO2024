//#include <iostream>
//#include <string>
//using namespace std;
//
//class Masina {
//public:
//    string marca;
//    string model;
//    static int numarRoti;
//    const int anFabricatie;
//    float* capacitateMotor;
//
//
//    Masina() : anFabricatie(2020) {
//        marca = "Generic";
//        model = "Standard";
//        capacitateMotor = new float(1.6f);
//    }
//
//    Masina(string marca, string model, int an) : anFabricatie(an) {
//        this->marca = marca;
//        this->model = model;
//        capacitateMotor = new float(2.0f);
//    }
//
//    Masina(string marca, string model, int an, float capacitate) : anFabricatie(an) {
//        this->marca = marca;
//        this->model = model;
//        capacitateMotor = new float(capacitate);
//    }
//
//
//    ~Masina() {
//        delete capacitateMotor;
//    }
//
//    static int getNumarRoti() {
//        return numarRoti;
//    }
//
//    void afisare() const {
//        cout << "Masina " << marca << " " << model
//            << " fabricata in " << anFabricatie
//            << " are un motor de " << *capacitateMotor
//            << " L si " << numarRoti << " roti." << endl;
//    }
//};
//
//int Masina::numarRoti = 4;
//
//class Motocicleta {
//public:
//    string tip;
//    static bool areFranaABS;
//    const int vitezaMaxima;
//    int* numarCilindri;
//
//    Motocicleta() : vitezaMaxima(180) {
//        tip = "Standard";
//        numarCilindri = new int(1);
//    }
//
//    Motocicleta(string tip, int viteza) : vitezaMaxima(viteza) {
//        this->tip = tip;
//        numarCilindri = new int(2);
//    }
//
//    Motocicleta(string tip, int viteza, int cilindri) : vitezaMaxima(viteza) {
//        this->tip = tip;
//        numarCilindri = new int(cilindri);
//    }
//
//    
//    ~Motocicleta() {
//        delete numarCilindri;
//    }
//
//    
//    static bool areABS() {
//        return areFranaABS;
//    }
//
//    
//    void afisare() const {
//        cout << "Motocicleta de tip " << tip
//            << " cu o viteza maxima de " << vitezaMaxima
//            << " km/h are " << *numarCilindri
//            << " cilindri si frana ABS: " << (areFranaABS ? "Da" : "Nu") << "." << endl;
//    }
//};
//
//bool Motocicleta::areFranaABS = true;
//
//class Camion {
//public:
//    string transportMarfa;
//    static double capacitateMaximaTonaj;
//    const int lungimeMetri;
//    int* numarAxe;
//
//   
//    Camion() : lungimeMetri(10) {
//        transportMarfa = "General";
//        numarAxe = new int(2);
//    }
//
//    Camion(string marfa, int lungime) : lungimeMetri(lungime) {
//        transportMarfa = marfa;
//        numarAxe = new int(3);
//    }
//
//    Camion(string marfa, int lungime, int axe) : lungimeMetri(lungime) {
//        transportMarfa = marfa;
//        numarAxe = new int(axe);
//    }
//
//
//    ~Camion() {
//        delete numarAxe;
//    }
//
//    static double getCapacitateMaxima() {
//        return capacitateMaximaTonaj;
//    }
//
//
//    void afisare() const {
//        cout << "Camionul pentru " << transportMarfa
//            << " are o lungime de " << lungimeMetri
//            << " metri, " << *numarAxe
//            << " axe si o capacitate maxima de " << capacitateMaximaTonaj << " tone." << endl;
//    }
//};
//
//double Camion::capacitateMaximaTonaj = 25.0;
//
//int main() {
//  
//    Masina m1;
//    Masina m2("Toyota", "Corolla", 2018);
//    Masina m3("BMW", "X5", 2021, 3.0f);
//
//    m1.afisare();
//    m2.afisare();
//    m3.afisare();
//
//
//    Motocicleta mot1;
//    Motocicleta mot2("Sport", 220);
//    Motocicleta mot3("Touring", 200, 4);
//
//    mot1.afisare();
//    mot2.afisare();
//    mot3.afisare();
//
//
//    Camion c1;
//    Camion c2("Transport frigorific", 12);
//    Camion c3("Transport containere", 15, 4);
//
//    c1.afisare();
//    c2.afisare();
//    c3.afisare();
//
//    return 0;
//}

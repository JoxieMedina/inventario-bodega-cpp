

void agregarGrano(){
    struct Grano nuevo;
    std::cout << "\nIngrese un precio: ";
    nuevo.precio = leerNumero();
    std::cout << "\nIngrese un precio: ";
    nuevo.procedencia = leerNumero();
    inventarioGranos.push_back(nuevo);
    std::cout << "\nValor ingresado: " << inventarioGranos[0].precio << std::endl;
}
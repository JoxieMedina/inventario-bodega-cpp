

void agregarGrano(){
    struct Grano nuevo;
    std::cout << "\nIngrese la informacion necesaria" << std::endl;
    std::cout << "\nPrecio: ";
    nuevo.precio = leerNumero();
    std::cout << "\nPeso en quitales: ";
    nuevo.quintales = leerNumero();
    std::cout << "\nElija una unidad"<<std::endl;
    std::cout << "\n===| 1. "<< GranoUnidadValor[GranoUnidad::Kilo]<<std::endl;
    std::cout << "\n===| 2. "<< GranoUnidadValor[GranoUnidad::Libra]<<std::endl;
    std::cout << "\n===| 3. "<< GranoUnidadValor[GranoUnidad::Medida]<<std::endl;
    std::cout << "\n===> Tu eleccion: ";
    int unidad = leerNumero();
    switch (unidad) {
        case 1:
            nuevo.unidad = GranoUnidad::Kilo;
            break;
        case 2:
            nuevo.unidad = GranoUnidad::Libra;
        case 3:
            nuevo.unidad = GranoUnidad::Medida;
        default:
            break;
    }
    std::cout << "\nProcedencia: ";
    nuevo.procedencia = leerPalabra();
    std::cout << "\n----->Valores Ingresados<-----";
    std::cout << "\n Precio: " << nuevo.precio << std::endl;
    std::cout << "\n Prcedencia: " << nuevo.procedencia << std::endl;
    std::cout << "\n Peso: " << nuevo.quintales << " Quintales" << std::endl;
    std::cout << "\n Unidad: " << GranoUnidadValor[nuevo.unidad] << std::endl;
    std::cout << "\n Desea guardar este registro? [s/n]: ";
    char guardar = leerLetra();
    if (guardar == 's' || guardar == 'S') {
        inventarioGranos.push_back(nuevo);
        std::cout << "\n----->Guardado con exito!<-----";
    } else {
        std::cout << "\n----->No se guardo ningun registro!<-----";
    }
    return;
}

void reporteGranos () {
    if (inventarioGranos.size() == 0) {
        std::cout << "\n---------->Inventario Vacio<-----------";
    } else {
        std::cout << "\n---------->Inventario Granos<-----------";
        std::cout << "\nNro   Precio    Procedencia     Peso    Unidad"<<std::endl;
        for(int i=0; i < inventarioGranos.size(); i++){
            std::cout <<i+1
                      <<"       "<< inventarioGranos[i].precio
                      <<"       "<< inventarioGranos[i].procedencia
                      <<"       "<<inventarioGranos[i].quintales
                      << " Q        "<< GranoUnidadValor[inventarioGranos[i].unidad]<<std::endl;
        }
    }

    return;
}
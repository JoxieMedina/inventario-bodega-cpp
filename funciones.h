#include "utilidades.h"


// Funciones de Agregar producto
void agregarGrano(){
    struct Grano nuevo;
    std::cout << "\nIngrese la informacion necesaria" << std::endl;
    std::cout << "\nPrecio: ";
    nuevo.precio = leerNumero();
    std::cout << "\nPeso en quitales: ";
    nuevo.quintales = leerNumero();
    nuevo.unidad = leerUnidad();
    std::cout << "\nProcedencia: ";
    nuevo.procedencia = leerPalabra(true);
    std::cout << "\n----->Valores Ingresados<-----";
    std::cout << "\n||--> Precio: " << nuevo.precio << std::endl;
    std::cout << "\n||--> Prcedencia: " << nuevo.procedencia << std::endl;
    std::cout << "\n||--> Peso: " << nuevo.quintales << " Quintales" << std::endl;
    std::cout << "\n||--> Unidad: " << GranoUnidadValor[nuevo.unidad] << std::endl;
    if (confirmarGuardar()) {
        inventarioGranos.push_back(nuevo);
    }
    return;
}

void agregarLimpieza() {
    struct Limpieza nuevo;
    std::cout << "\nIngrese la informacion necesaria" << std::endl;
    std::cout << "\nPrecio unidad: ";
    nuevo.precio = leerNumero();
    std::cout << "\nCantidad: ";
    nuevo.cantidadInventario = leerNumero();
    nuevo.codigo = leerValidarCodigoLimpieza();
    std::cout << "\nMarca: ";
    nuevo.marca = leerPalabra(false);
    std::cout << "\nProveedor: ";
    nuevo.proveedor = leerPalabra(false);
    std::cout << "\nNombre: ";
    nuevo.nombre = leerPalabra(false);
    nuevo.tipo = leerTipoLimpieza();
    std::cout << "\n----->Valores Ingresados<-----";
    std::cout << "\n||--> Codigo: " << nuevo.codigo << std::endl;
    std::cout << "\n||--> Precio: " << nuevo.precio << std::endl;
    std::cout << "\n||--> Cantidad: " << nuevo.cantidadInventario << std::endl;
    std::cout << "\n||--> Marca: " << nuevo.marca << std::endl;
    std::cout << "\n||--> Proveedor: " << nuevo.proveedor << std::endl;
    std::cout << "\n||--> Nombre: " << nuevo.nombre << std::endl;
    std::cout << "\n||--> Tipo: " << LimpiezaTipoValor[nuevo.tipo] << std::endl;
    if (confirmarGuardar()) {
        inventarioLimpieza.push_back(nuevo);
    }
    return;
}

void agregarLiquido(){
    struct Liquido nuevo;
    std::cout << "\nIngrese la informacion necesaria" << std::endl;
    std::cout << "\nPrecio: ";
    nuevo.precio = leerNumero();
    std::cout << "\nNombre: ";
    nuevo.nombre = leerPalabra(true);
    std::cout << "\nFecha vencimiento (dia/mes/anio: ";
    nuevo.fechaVencimiento = leerPalabra(false);
    nuevo.categoria = leerLiquidoCategoria();
    nuevo.empaque = leerLiquidoEmpaque();
    nuevo.tamanio = leerLiquidoTamanio();
    std::cout << "\n----->Valores Ingresados<-----";
    std::cout << "\n||--> Nombre: " << nuevo.nombre << std::endl;
    std::cout << "\n||--> Precio: " << nuevo.precio << std::endl;
    std::cout << "\n||--> Vencimiento: " << nuevo.fechaVencimiento << std::endl;
    std::cout << "\n||--> Categoria: " << LiquidoCategoriaValor[nuevo.categoria] << std::endl;
    std::cout << "\n||--> Empaque: " << LiquidoEmpaqueValor[nuevo.empaque] << std::endl;
    std::cout << "\n||--> Tamanio: " << LiquidoTamanioValor[nuevo.tamanio] << std::endl;
    if (confirmarGuardar()) {
        inventarioLiquidos.push_back(nuevo);
    }
    return;
}

void agregarEmbutido(){
    struct Carne nuevo;
    std::cout << "\nIngrese la informacion necesaria" << std::endl;
    std::cout << "\nPrecio: ";
    nuevo.precio = leerNumero();
    std::cout << "\nCantidad: ";
    nuevo.cantidadInventario = leerNumero();
    std::cout << "\nProcedencia: ";
    nuevo.procedencia = leerPalabra(true);
    nuevo.tipo = leerCarneTipo();
    std::cout << "\n----->Valores Ingresados<-----";
    std::cout << "\n||--> Precio: " << nuevo.precio << std::endl;
    std::cout << "\n||--> Procedencia: " << nuevo.procedencia << std::endl;
    std::cout << "\n||--> Cantidad: " << nuevo.cantidadInventario <<std::endl;
    std::cout << "\n||--> Tipo: " << CarneTipoValor[nuevo.tipo] << std::endl;
    if (confirmarGuardar()) {
        inventarioCarnes.push_back(nuevo);
    }
    return;
}

void agregarFrutaVerdura(){
    struct FrutaVerdura nuevo;
    std::cout << "\nIngrese la informacion necesaria" << std::endl;
    std::cout << "\nPrecio: ";
    nuevo.precio = leerNumero();
    std::cout << "\nCantidad: ";
    nuevo.cantidadInvetario = leerNumero();
    std::cout << "\nDefina el tipo:\n Es fruta? [s/n]:";
    char esFruta = leerLetra();
    bool fruta = false;
    if(esFruta == 's' || esFruta == 'S') {
        nuevo.categoriaFruta=leerCategoriaFruta();
        fruta = true;
    }else{
        nuevo.categoriaVerdura=leerCategoriaVerdura();
    }
    std::cout << "\n----->Valores Ingresados<-----";
    std::cout << "\n||--> Precio: " << nuevo.precio << std::endl;
    std::cout << "\n||--> Tipo: ";
        if (fruta) {
            std::cout<<"Fruta "<<CategoriaFrutaValor[nuevo.categoriaFruta];
        } else {
            std::cout<<"Verdura "<<CategoriaVerduraValor[nuevo.categoriaVerdura];
        }
    std::cout << "\n\n||--> Cantidad: " << nuevo.cantidadInvetario <<std::endl;
    if (confirmarGuardar()) {
        inventarioFrutaVerdura.push_back(nuevo);
    }
    return;
}


// Funciones de reportes
void reporteGranos () {
    if (inventarioGranos.size() == 0) {
        std::cout << "\n---------->Inventario Granos Vacio<-----------";
    } else {
        std::cout << "\n---------->Inventario Granos<-----------";
        std::cout << "\nNro     Precio      Procedencia     Peso    Unidad"<<std::endl;
        for(int i=0; i < inventarioGranos.size(); i++){
            std::cout<<i+1
                     <<std::setw(10)<< inventarioGranos[i].precio
                     <<std::setw(10)<< inventarioGranos[i].procedencia
                     <<std::setw(10)<<inventarioGranos[i].quintales<< " Q"
                     <<std::setw(10)<< GranoUnidadValor[inventarioGranos[i].unidad]<<std::endl;
        }
    }

    return;
}

void reporteLimpieza () {
    if (inventarioLimpieza.size() == 0) {
        std::cout << "\n---------->Inventario Limpieza Vacio<-----------";
    } else {
        std::cout << "\n---------->Inventario Limpieza<-----------";
        std::cout << "\nNro     Codigo      Nombre      Cantidad     Marca    Proveedor     Tipo"<<std::endl;
        for(int i=0; i < inventarioLimpieza.size(); i++){
            std::cout<<i+1
                     <<std::setw(10)<<inventarioLimpieza[i].codigo
                     <<std::setw(10)<<inventarioLimpieza[i].nombre
                     <<std::setw(10)<< inventarioLimpieza[i].precio
                     <<std::setw(10)<< inventarioLimpieza[i].cantidadInventario
                     <<std::setw(10)<<inventarioLimpieza[i].marca
                     <<std::setw(10)<<inventarioLimpieza[i].proveedor
                     <<std::setw(10)<< LimpiezaTipoValor[inventarioLimpieza[i].tipo]<<std::endl;
        }
    }

    return;
}

void reporteLiquido () {
    if (inventarioLiquidos.size() == 0) {
        std::cout << "\n---------->Inventario Liquido Vacio<-----------";
    } else {
        std::cout << "\n---------->Inventario Liquido<-----------";
        std::cout << "\nNro     Nombre      precio      Vencimiento     Categoria    Empaque     Tamanio"<<std::endl;
        for(int i=0; i < inventarioLiquidos.size(); i++){
            std::cout<<i+1
                     <<std::setw(13)<<inventarioLiquidos[i].nombre
                     <<std::setw(13)<<inventarioLiquidos[i].precio
                     <<std::setw(13)<< inventarioLiquidos[i].fechaVencimiento
                     <<std::setw(13)<< LiquidoCategoriaValor[inventarioLiquidos[i].categoria]
                     <<std::setw(13)<<LiquidoEmpaqueValor[inventarioLiquidos[i].empaque]
                     <<std::setw(13)<< LiquidoTamanioValor[inventarioLiquidos[i].tamanio]<<std::endl;
        }
    }

    return;
}

void reporteEmbutido () {
    if (inventarioCarnes.size() == 0) {
        std::cout << "\n---------->Inventario Carnes Vacio<-----------";
    } else {
        std::cout << "\n---------->Inventario Carnes<-----------";
        std::cout << "\nNro     Precio      Procedencia     Cantidad    Tipo"<<std::endl;
        for(int i=0; i < inventarioCarnes.size(); i++){
            std::cout<<i+1
                     <<std::setw(13)<<inventarioCarnes[i].precio
                     <<std::setw(13)<< inventarioCarnes[i].procedencia
                     <<std::setw(13)<< inventarioCarnes[i].cantidadInventario
                     <<std::setw(13)<< CarneTipoValor[inventarioCarnes[i].tipo]<<std::endl;
        }
    }

    return;
}

void reporteFrutaVerdura () {
    if (inventarioFrutaVerdura.size() == 0) {
        std::cout << "\n---------->Inventario Frutas Verdura Vacio<-----------";
    } else {
        std::cout << "\n---------->Inventario Frutas Verdura<-----------";
        std::cout << "\nNro     Precio      Cantidad        Tipo"<<std::endl;
        for(int i=0; i < inventarioFrutaVerdura.size(); i++){
            std::cout<<i+1
             <<std::setw(13)<<inventarioFrutaVerdura[i].precio
             <<std::setw(13)<< inventarioFrutaVerdura[i].cantidadInvetario;
             if(inventarioFrutaVerdura[i].categoriaFruta != CategoriaFruta::NoFruta){
                 std::cout<<std::setw(13)<<"Fruta "<<CategoriaFrutaValor[inventarioFrutaVerdura[i].categoriaFruta];
             }else{
                 std::cout<<std::setw(13)<<"Verdura "<<CategoriaVerduraValor[inventarioFrutaVerdura[i].categoriaVerdura];
             }
             std::cout<<std::endl;
        }
    }

    return;
}

void reporteTodos () {
    reporteGranos();
    reporteLimpieza();
    reporteLiquido();
    reporteEmbutido();
    reporteFrutaVerdura();
    return;
}

// Funciones para modificar
void modificarGrano(){
    std::cout << "\nElija uno de la lista" << std::endl;
    reporteGranos();
    std::cout << "\nNro a modificar: ";
    int seleccion = leerNumero();
    if(seleccion > 0 && seleccion <= inventarioGranos.size()){
        seleccion= seleccion - 1;
    } else {
        std::cout << "\nRegistro no encontrado!! ";
        return;
    }
    std::cout << "\n----->Elija una propiedad a modicar<-----";
    std::cout << "\n||--> 1. Precio: " << inventarioGranos[seleccion].precio << std::endl;
    std::cout << "\n||--> 2. Procedencia: " << inventarioGranos[seleccion].procedencia << std::endl;
    std::cout << "\n||--> 3. Peso: " << inventarioGranos[seleccion].quintales << " Quintales" << std::endl;
    std::cout << "\n||--> 4. Unidad: " << GranoUnidadValor[inventarioGranos[seleccion].unidad] << std::endl;
    int propiedad = leerNumero();
    switch (propiedad){
        case 1:
            std::cout << "\nNuevo precio: ";
            inventarioGranos[seleccion].precio = leerNumero();
            break;
        case 2:
            std::cout << "\nNueva procedencia: ";
            inventarioGranos[seleccion].procedencia = leerPalabra(true);
            break;
        case 3:
            std::cout << "\nNuevo peso: ";
            inventarioGranos[seleccion].quintales = leerNumero();
            break;
        case 4:
            std::cout << "\nNueva unidad: ";
            inventarioGranos[seleccion].unidad = leerUnidad();
            break;
        default:
            return;
    }
    std::cout << "\n----->Modificacion exitosa<-----";
    return;
}


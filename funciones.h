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
    std::cout << "\nFecha vencimiento (dia/mes/anio): ";
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
        std::cout << "\nNro     Codigo      Nombre      Precio     Cantidad     Marca    Proveedor     Tipo"<<std::endl;
        for(int i=0; i < inventarioLimpieza.size(); i++){
            std::cout<<i+1
                     <<std::setw(13)<<inventarioLimpieza[i].codigo
                     <<std::setw(13)<<inventarioLimpieza[i].nombre
                     <<std::setw(13)<< inventarioLimpieza[i].precio
                     <<std::setw(13)<< inventarioLimpieza[i].cantidadInventario
                     <<std::setw(13)<<inventarioLimpieza[i].marca
                     <<std::setw(13)<<inventarioLimpieza[i].proveedor
                     <<std::setw(13)<< LimpiezaTipoValor[inventarioLimpieza[i].tipo]<<std::endl;
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
    std::cout << "\n===> Su eleccion: ";
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

void modificarLimpieza(){
    std::cout << "\nElija uno de la lista" << std::endl;
    reporteLimpieza();
    std::cout << "\nNro a modificar: ";
    int seleccion = leerNumero();
    if(seleccion > 0 && seleccion <= inventarioLimpieza.size()){
        seleccion= seleccion - 1;
    } else {
        std::cout << "\nRegistro no encontrado!! ";
        return;
    }
    std::cout << "\n----->Elija una propiedad a modicar<-----";
    std::cout << "\n||--> 1. Precio: " << inventarioLimpieza[seleccion].precio << std::endl;
    std::cout << "\n||--> 2. Cantidad: " << inventarioLimpieza[seleccion].cantidadInventario << std::endl;
    std::cout << "\n||--> 3. Marca: " << inventarioLimpieza[seleccion].marca << std::endl;
    std::cout << "\n||--> 4. Proveedor: " << inventarioLimpieza[seleccion].proveedor << std::endl;
    std::cout << "\n||--> 5. Nombre: " << inventarioLimpieza[seleccion].nombre << std::endl;
    std::cout << "\n||--> 6. Tipo: " << LimpiezaTipoValor[inventarioLimpieza[seleccion].tipo] << std::endl;
    std::cout << "\n===> Su eleccion: ";
    int propiedad = leerNumero();
    switch (propiedad){
        case 1:
            std::cout << "\nNuevo precio: ";
            inventarioLimpieza[seleccion].precio = leerNumero();
            break;
        case 2:
            std::cout << "\nNueva cantidad: ";
            inventarioLimpieza[seleccion].cantidadInventario = leerNumero();
            break;
        case 3:
            std::cout << "\nNuevo marca: ";
            inventarioLimpieza[seleccion].marca = leerPalabra(true);
            break;
        case 4:
            std::cout << "\nNueva proveedor: ";
            inventarioLimpieza[seleccion].proveedor = leerPalabra(true);
            break;
        case 5:
            std::cout << "\nNuevo nombre: ";
            inventarioLimpieza[seleccion].nombre = leerPalabra(true);
            break;
        case 6:
            std::cout << "\nNuevo Tipo: ";
            inventarioLimpieza[seleccion].tipo = leerTipoLimpieza();
            break;
        default:
            return;
    }
    std::cout << "\n----->Modificacion exitosa<-----";
    return;
}

void modificarLiquido(){
    std::cout << "\nElija uno de la lista" << std::endl;
    reporteLiquido();
    std::cout << "\nNro a modificar: ";
    int seleccion = leerNumero();
    if(seleccion > 0 && seleccion <= inventarioLiquidos.size()){
        seleccion= seleccion - 1;
    } else {
        std::cout << "\nRegistro no encontrado!! ";
        return;
    }
    std::cout << "\n----->Elija una propiedad a modicar<-----";
    std::cout << "\n||--> 1. Nombre: " << inventarioLiquidos[seleccion].nombre << std::endl;
    std::cout << "\n||--> 2. Precio: " << inventarioLiquidos[seleccion].precio << std::endl;
    std::cout << "\n||--> 3. Vencimiento: " << inventarioLiquidos[seleccion].fechaVencimiento << std::endl;
    std::cout << "\n||--> 4. Categoria: " << LiquidoCategoriaValor[inventarioLiquidos[seleccion].categoria] << std::endl;
    std::cout << "\n||--> 5. Empaque: " << LiquidoEmpaqueValor[inventarioLiquidos[seleccion].empaque] << std::endl;
    std::cout << "\n||--> 6. Tamanio: " << LiquidoTamanioValor[inventarioLiquidos[seleccion].tamanio] << std::endl;
    std::cout << "\n===> Su eleccion: ";
    int propiedad = leerNumero();
    switch (propiedad){
        case 1:
            std::cout << "\nNuevo nombre: ";
            inventarioLiquidos[seleccion].nombre = leerPalabra(true);
            break;
        case 2:
            std::cout << "\nNuevo precio: ";
            inventarioLiquidos[seleccion].precio = leerNumero();
            break;
        case 3:
            std::cout << "\nNueva fecha vencimiento (dia/mes/anio): ";
            inventarioLiquidos[seleccion].fechaVencimiento = leerPalabra(true);
            break;
        case 4:
            std::cout << "\nNueva categoria: ";
            inventarioLiquidos[seleccion].categoria = leerLiquidoCategoria();
            break;
        case 5:
            std::cout << "\nNuevo empaque: ";
            inventarioLiquidos[seleccion].empaque = leerLiquidoEmpaque();
            break;
        case 6:
            std::cout << "\nNuevo tamanio: ";
            inventarioLiquidos[seleccion].tamanio = leerLiquidoTamanio();
            break;
        default:
            return;
    }
    std::cout << "\n----->Modificacion exitosa<-----";
    return;
}

void modificarEmbutido(){
    std::cout << "\nElija uno de la lista" << std::endl;
    reporteEmbutido();
    std::cout << "\nNro a modificar: ";
    int seleccion = leerNumero();
    if(seleccion > 0 && seleccion <= inventarioCarnes.size()){
        seleccion= seleccion - 1;
    } else {
        std::cout << "\nRegistro no encontrado!! ";
        return;
    }
    std::cout << "\n----->Elija una propiedad a modicar<-----";
    std::cout << "\n||--> 1. Precio: " << inventarioCarnes[seleccion].precio << std::endl;
    std::cout << "\n||--> 2. Procedencia: " << inventarioCarnes[seleccion].procedencia << std::endl;
    std::cout << "\n||--> 3. Cantidad: " << inventarioCarnes[seleccion].cantidadInventario <<std::endl;
    std::cout << "\n||--> 4. Tipo: " << CarneTipoValor[inventarioCarnes[seleccion].tipo] << std::endl;
    std::cout << "\n===> Su eleccion: ";
    int propiedad = leerNumero();
    switch (propiedad){
        case 1:
            std::cout << "\nNuevo precio: ";
            inventarioCarnes[seleccion].precio = leerNumero();
            break;
        case 2:
            std::cout << "\nNuevo procedencia: ";
            inventarioCarnes[seleccion].procedencia = leerPalabra(true);
            break;
        case 3:
            std::cout << "\nNueva cantidad: ";
            inventarioCarnes[seleccion].cantidadInventario = leerNumero();
            break;
        case 4:
            std::cout << "\nNuevo tipo: ";
            inventarioCarnes[seleccion].tipo = leerCarneTipo();
            break;
        default:
            return;
    }
    std::cout << "\n----->Modificacion exitosa<-----";
    return;
}

void modificarFrutaVerdura(){
    std::cout << "\nElija uno de la lista" << std::endl;
    reporteFrutaVerdura();
    std::cout << "\nNro a modificar: ";
    int seleccion = leerNumero();
    if(seleccion > 0 && seleccion <= inventarioFrutaVerdura.size()){
        seleccion= seleccion - 1;
    } else {
        std::cout << "\nRegistro no encontrado!! ";
        return;
    }
    std::cout << "\n||--> 1. Precio: " << inventarioFrutaVerdura[seleccion].precio << std::endl;
    std::cout << "\n||--> 2. Tipo: ";
    if (inventarioFrutaVerdura[seleccion].categoriaFruta != CategoriaFruta::NoFruta) {
        std::cout<<"Fruta "<<CategoriaFrutaValor[inventarioFrutaVerdura[seleccion].categoriaFruta];
    } else {
        std::cout<<"Verdura "<<CategoriaVerduraValor[inventarioFrutaVerdura[seleccion].categoriaVerdura];
    }
    std::cout << "\n\n||--> 3. Cantidad: " << inventarioFrutaVerdura[seleccion].cantidadInvetario <<std::endl;
    std::cout << "\n===> Su eleccion: ";
    int propiedad = leerNumero();
    switch (propiedad){
        case 1:
            std::cout << "\nNuevo precio: ";
            inventarioFrutaVerdura[seleccion].precio = leerNumero();
            break;
        case 2:
            std::cout << "\nNuevo tipo: ";
            if (inventarioFrutaVerdura[seleccion].categoriaFruta != CategoriaFruta::NoFruta) {
                inventarioFrutaVerdura[seleccion].categoriaFruta=leerCategoriaFruta();
            } else {
                inventarioFrutaVerdura[seleccion].categoriaVerdura=leerCategoriaVerdura();
            }
            break;
        case 3:
            std::cout << "\nNueva cantidad: ";
            inventarioFrutaVerdura[seleccion].cantidadInvetario = leerNumero();
            break;
        default:
            return;
    }
    std::cout << "\n----->Modificacion exitosa<-----";
    return;
}


// Funcion para eliminar

void eliminarGrano(){
    if (inventarioGranos.size() == 0){
        std::cout << "\nNo hay registros! ";
        return;
    }
    std::cout << "\nElija uno de la lista" << std::endl;
    reporteGranos();
    std::cout << "\nNro a eliminar: ";
    int seleccion = leerNumero();
    if(seleccion > 0 && seleccion <= inventarioGranos.size()){
        seleccion= seleccion - 1;
    } else {
        std::cout << "\nRegistro no encontrado!! ";
        return;
    }
    if(confirmarBorrar()){
        inventarioGranos.erase( inventarioGranos.begin() + seleccion );
    }
    return;
}

void eliminarLimpieza(){
    if (inventarioLimpieza.size() == 0){
        std::cout << "\nNo hay registros! ";
        return;
    }
    std::cout << "\nElija uno de la lista" << std::endl;
    reporteLimpieza();
    std::cout << "\nNro a eliminar: ";
    int seleccion = leerNumero();
    if(seleccion > 0 && seleccion <= inventarioLimpieza.size()){
        seleccion= seleccion - 1;
    } else {
        std::cout << "\nRegistro no encontrado!! ";
        return;
    }
    if(confirmarBorrar()){
        inventarioLimpieza.erase( inventarioLimpieza.begin() + seleccion );
    }
    return;
}

void eliminarLiquido(){
    if (inventarioLiquidos.size() == 0){
        std::cout << "\nNo hay registros! ";
        return;
    }
    std::cout << "\nElija uno de la lista" << std::endl;
    reporteLiquido();
    std::cout << "\nNro a eliminar: ";
    int seleccion = leerNumero();
    if(seleccion > 0 && seleccion <= inventarioLiquidos.size()){
        seleccion= seleccion - 1;
    } else {
        std::cout << "\nRegistro no encontrado!! ";
        return;
    }
    if(confirmarBorrar()){
        inventarioLiquidos.erase( inventarioLiquidos.begin() + seleccion );
    }
    return;
}

void eliminarEmbutido(){
    if (inventarioCarnes.size() == 0){
        std::cout << "\nNo hay registros! ";
        return;
    }
    std::cout << "\nElija uno de la lista" << std::endl;
    reporteEmbutido();
    std::cout << "\nNro a eliminar: ";
    int seleccion = leerNumero();
    if(seleccion > 0 && seleccion <= inventarioCarnes.size()){
        seleccion= seleccion - 1;
    } else {
        std::cout << "\nRegistro no encontrado!! ";
        return;
    }
    if(confirmarBorrar()){
        inventarioCarnes.erase( inventarioCarnes.begin() + seleccion );
    }
    return;
}

void eliminarFrutaVerdura(){
    if (inventarioFrutaVerdura.size() == 0){
        std::cout << "\nNo hay registros! ";
        return;
    }
    std::cout << "\nElija uno de la lista" << std::endl;
    reporteFrutaVerdura();
    std::cout << "\nNro a eliminar: ";
    int seleccion = leerNumero();
    if(seleccion > 0 && seleccion <= inventarioFrutaVerdura.size()){
        seleccion= seleccion - 1;
    } else {
        std::cout << "\nRegistro no encontrado!! ";
        return;
    }
    if(confirmarBorrar()){
        inventarioFrutaVerdura.erase( inventarioFrutaVerdura.begin() + seleccion );
    }
    return;
}
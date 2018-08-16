// Utilidades para estructuras
void mostrarUnidades () {
    std::cout << "\nElija una unidad"<<std::endl;
    std::cout << "\n===| 1. "<< GranoUnidadValor[GranoUnidad::Kilo]<<std::endl;
    std::cout << "\n===| 2. "<< GranoUnidadValor[GranoUnidad::Libra]<<std::endl;
    std::cout << "\n===| 3. "<< GranoUnidadValor[GranoUnidad::Medida]<<std::endl;
    std::cout << "\n===> Tu eleccion: ";
}

void mostrarTipoLimpeza () {
    std::cout << "\nElija un tipo"<<std::endl;
    std::cout << "\n===| 1. "<< LimpiezaTipoValor[LimpiezaTipo ::Liquido]<<std::endl;
    std::cout << "\n===| 2. "<< LimpiezaTipoValor[LimpiezaTipo::Polvo]<<std::endl;
    std::cout << "\n===> Tu eleccion: ";
}

void mostrarLiquidoCategoria () {
    std::cout << "\nElija una categoria"<<std::endl;
    std::cout << "\n===| 1. "<< LiquidoCategoriaValor[LiquidoCategoria::Agua]<<std::endl;
    std::cout << "\n===| 2. "<< LiquidoCategoriaValor[LiquidoCategoria::Gaseosa]<<std::endl;
    std::cout << "\n===| 3. "<< LiquidoCategoriaValor[LiquidoCategoria::Jugo]<<std::endl;
    std::cout << "\n===| 4. "<< LiquidoCategoriaValor[LiquidoCategoria::Lacteo]<<std::endl;
    std::cout << "\n===> Tu eleccion: ";
}

void mostrarLiquidoEmpaque () {
    std::cout << "\nElija un empaque"<<std::endl;
    std::cout << "\n===| 1. "<< LiquidoEmpaqueValor[LiquidoEmpaque::Botella]<<std::endl;
    std::cout << "\n===| 2. "<< LiquidoEmpaqueValor[LiquidoEmpaque::Caja]<<std::endl;
    std::cout << "\n===| 3. "<< LiquidoEmpaqueValor[LiquidoEmpaque::Lata]<<std::endl;
    std::cout << "\n===> Tu eleccion: ";
}

void mostrarLiquidoTamanio () {
    std::cout << "\nElija un tamanio"<<std::endl;
    std::cout << "\n===| 1. "<< LiquidoTamanioValor[LiquidoTamanio::Grande]<<std::endl;
    std::cout << "\n===| 2. "<< LiquidoTamanioValor[LiquidoTamanio::Mediano]<<std::endl;
    std::cout << "\n===| 3. "<< LiquidoTamanioValor[LiquidoTamanio::Pequenio]<<std::endl;
    std::cout << "\n===> Tu eleccion: ";
}

void mostrarCarneTipo () {
    std::cout << "\nElija un tipo"<<std::endl;
    std::cout << "\n===| 1. "<< CarneTipoValor[CarneTipo::Blanca]<<std::endl;
    std::cout << "\n===| 2. "<< CarneTipoValor[CarneTipo::Cerdo]<<std::endl;
    std::cout << "\n===| 3. "<< CarneTipoValor[CarneTipo::Res]<<std::endl;
    std::cout << "\n===> Tu eleccion: ";
}

void mostrarCategoriaFruta () {
    std::cout << "\nElija una categoria de fruta"<<std::endl;
    std::cout << "\n===| 1. "<< CategoriaFrutaValor[CategoriaFruta::Fibra]<<std::endl;
    std::cout << "\n===| 2. "<< CategoriaFrutaValor[CategoriaFruta::Citrico]<<std::endl;
    std::cout << "\n===| 3. "<< CategoriaFrutaValor[CategoriaFruta::Granos]<<std::endl;
    std::cout << "\n===| 4. "<< CategoriaFrutaValor[CategoriaFruta::Tropical]<<std::endl;
    std::cout << "\n===> Tu eleccion: ";
}

void mostrarCategoriaVerdura () {
    std::cout << "\nElija una categoria de verdura"<<std::endl;
    std::cout << "\n===| 1. "<< CategoriaVerduraValor[CategoriaVerdura::Hoja]<<std::endl;
    std::cout << "\n===| 2. "<< CategoriaVerduraValor[CategoriaVerdura::Legumbre]<<std::endl;
    std::cout << "\n===| 3. "<< CategoriaVerduraValor[CategoriaVerdura::Tuberculo]<<std::endl;
    std::cout << "\n===> Tu eleccion: ";
}

GranoUnidad leerUnidad(){
    int opcion;
    mostrarUnidades();
    opcion = leerNumero();
    if(opcion >= 1 && opcion <= 3){
        switch (opcion) {
            case 1:
                return GranoUnidad::Kilo;
            case 2:
                return GranoUnidad::Libra;
            case 3:
                return GranoUnidad::Medida;
        }
    } else {
        std::cout<<"Opcion incorrecta "<<std::endl;
        return leerUnidad();
    }
}

LimpiezaTipo leerTipoLimpieza(){
    int opcion;
    mostrarTipoLimpeza();
    opcion = leerNumero();
    if(opcion >= 1 && opcion <= 2){
        switch (opcion) {
            case 1:
                return LimpiezaTipo::Liquido;
            case 2:
                return LimpiezaTipo::Polvo;
        }
    } else {
        std::cout<<"Opcion incorrecta "<<std::endl;
        return leerTipoLimpieza();
    }
}

LiquidoCategoria leerLiquidoCategoria(){
    int opcion;
    mostrarLiquidoCategoria();
    opcion = leerNumero();
    if(opcion >= 1 && opcion <= 4){
        switch (opcion) {
            case 1:
                return LiquidoCategoria::Agua;
            case 2:
                return LiquidoCategoria::Gaseosa;
            case 3:
                return LiquidoCategoria::Jugo;
            case 4:
                return LiquidoCategoria::Lacteo;
        }
    } else {
        std::cout<<"Opcion incorrecta "<<std::endl;
        return leerLiquidoCategoria();
    }
}

LiquidoEmpaque leerLiquidoEmpaque(){
    int opcion;
    mostrarLiquidoEmpaque();
    opcion = leerNumero();
    if(opcion >= 1 && opcion <= 3){
        switch (opcion) {
            case 1:
                return LiquidoEmpaque::Botella;
            case 2:
                return LiquidoEmpaque::Caja;
            case 3:
                return LiquidoEmpaque::Lata;
        }
    } else {
        std::cout<<"Opcion incorrecta "<<std::endl;
        return leerLiquidoEmpaque();
    }
}

LiquidoTamanio leerLiquidoTamanio(){
    int opcion;
    mostrarLiquidoTamanio();
    opcion = leerNumero();
    if(opcion >= 1 && opcion <= 3){
        switch (opcion) {
            case 1:
                return LiquidoTamanio::Grande;
            case 2:
                return LiquidoTamanio::Mediano;
            case 3:
                return LiquidoTamanio::Pequenio;
        }
    } else {
        std::cout<<"Opcion incorrecta "<<std::endl;
        return leerLiquidoTamanio();
    }
}

CarneTipo leerCarneTipo(){
    int opcion;
    mostrarCarneTipo();
    opcion = leerNumero();
    if(opcion >= 1 && opcion <= 3){
        switch (opcion) {
            case 1:
                return CarneTipo::Blanca;
            case 2:
                return CarneTipo::Cerdo;
            case 3:
                return CarneTipo::Res;
        }
    } else {
        std::cout<<"Opcion incorrecta "<<std::endl;
        return leerCarneTipo();
    }
}

CategoriaFruta leerCategoriaFruta(){
    int opcion;
    mostrarCategoriaFruta();
    opcion = leerNumero();
    if(opcion >= 1 && opcion <= 4){
        switch (opcion) {
            case 1:
                return CategoriaFruta::Fibra;
            case 2:
                return CategoriaFruta::Citrico;
            case 3:
                return CategoriaFruta::Granos;
            case 4:
                return CategoriaFruta::Tropical;
        }
    } else {
        std::cout<<"Opcion incorrecta "<<std::endl;
        return leerCategoriaFruta();
    }
}

CategoriaVerdura leerCategoriaVerdura(){
    int opcion;
    mostrarCategoriaVerdura();
    opcion = leerNumero();
    if(opcion >= 1 && opcion <= 3){
        switch (opcion) {
            case 1:
                return CategoriaVerdura::Hoja;
            case 2:
                return CategoriaVerdura::Legumbre;
            case 3:
                return CategoriaVerdura::Tuberculo;
        }
    } else {
        std::cout<<"Opcion incorrecta "<<std::endl;
        return leerCategoriaVerdura();
    }
}

bool confirmarGuardar(){
    std::cout << "\n Desea guardar este registro? [s/n]: ";
    char guardar = leerLetra();
    if (guardar == 's' || guardar == 'S') {
        std::cout << "\n----->Guardado con exito!<-----";
        return true;
    } else {
        std::cout << "\n----->No se guardo ningun registro!<-----";
        return false;
    }
}

std::string leerValidarCodigoLimpieza(){
    std::cout << "\nIngrese un codigo no repetido: ";
    std::string codigo = leerPalabra(true);
    for(int i=0; i < inventarioLimpieza.size(); i++){
        if (inventarioLimpieza[i].codigo == codigo){
            std::cout << "\nEse codigo ya existe!!";
            return leerValidarCodigoLimpieza();
        }
    }
    return codigo;
}
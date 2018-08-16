#include "funciones.h"

void mostrarMenuPrincipal(){
    system("clear");
    std::cout<<"	 _________________________________________ "<<std::endl;
    std::cout<<"	||)()()()()()()()()()()()()()()()()||"<<std::endl;
    std::cout<<"	||-->     Inventario Bodega     <--||"<<std::endl;
    std::cout<<"	||-->                           <--||"<<std::endl;
    std::cout<<"	||--> Opciones:                 <--||"<<std::endl;
    std::cout<<"	||-->   [1]. Agregar Producto   <--||"<<std::endl;
    std::cout<<"	||-->   [2]. Modificar Producto <--||"<<std::endl;
    std::cout<<"	||-->   [3]. Eliminar Producto  <--||"<<std::endl;
    std::cout<<"	||-->   [4]. Reportes           <--||"<<std::endl;
    std::cout<<"	||-->   [5]. Salir              <--||"<<std::endl;
    std::cout<<"	||-->                           <--||"<<std::endl;
    std::cout<<"	||--> Seleccione una opcion.    <--||"<<std::endl;
    std::cout<<"	||-->         para continuar... <--||"<<std::endl;
    std::cout<<"	||)()()()()()()()()()()()()()()()()||"<<std::endl;
    std::cout<<"	 ___________________________________________ "<<std::endl;
    std::cout<<"Tu eleccion: ";
}

void mostrarAgregar(){
    system("clear");
    std::cout<<"	 _________________________________________ "<<std::endl;
    std::cout<<"	||)()()()()()()()()()()()()()()()()()||"<<std::endl;
    std::cout<<"	||-->     Agregar Producto        <--||"<<std::endl;
    std::cout<<"	||-->                             <--||"<<std::endl;
    std::cout<<"	||--> Opciones:                   <--||"<<std::endl;
    std::cout<<"	||--> [a].Agregar grano           <--||"<<std::endl;
    std::cout<<"	||--> [b].Agregar Limpieza        <--||"<<std::endl;
    std::cout<<"	||--> [c].Agregar Liquido         <--||"<<std::endl;
    std::cout<<"	||--> [d].Agregar embutido        <--||"<<std::endl;
    std::cout<<"	||--> [e].Agregar fruta/verdura   <--||"<<std::endl;
    std::cout<<"	||--> [r].Regresar                <--||"<<std::endl;
    std::cout<<"	||-->                             <--||"<<std::endl;
    std::cout<<"	||--> Seleccione una opcion.      <--||"<<std::endl;
    std::cout<<"	||-->         para continuar...   <--||"<<std::endl;
    std::cout<<"	||)()()()()()()()()()()()()()()()()||"<<std::endl;
    std::cout<<"	 ___________________________________________ "<<std::endl;
    std::cout<<"Tu eleccion: ";
}

void mostrarModificar(){
    system("clear");
    std::cout<<"	 _________________________________________ "<<std::endl;
    std::cout<<"	||)()()()()()()()()()()()()()()()()()||"<<std::endl;
    std::cout<<"	||-->     Modificar Producto        <--||"<<std::endl;
    std::cout<<"	||-->                               <--||"<<std::endl;
    std::cout<<"	||--> Opciones:                     <--||"<<std::endl;
    std::cout<<"	||--> [a].Modificar grano           <--||"<<std::endl;
    std::cout<<"	||--> [b].Modificar Limpieza        <--||"<<std::endl;
    std::cout<<"	||--> [c].Modificar Liquido         <--||"<<std::endl;
    std::cout<<"	||--> [d].Modificar embutido        <--||"<<std::endl;
    std::cout<<"	||--> [e].Modificar fruta/verdura   <--||"<<std::endl;
    std::cout<<"	||--> [r].Regresar                  <--||"<<std::endl;
    std::cout<<"	||-->                               <--||"<<std::endl;
    std::cout<<"	||--> Seleccione una opcion.        <--||"<<std::endl;
    std::cout<<"	||-->         para continuar...     <--||"<<std::endl;
    std::cout<<"	||)()()()()()()()()()()()()()()()()||"<<std::endl;
    std::cout<<"	 ___________________________________________ "<<std::endl;
    std::cout<<"Tu eleccion: ";

}

void mostrarEliminar(){
    system("clear");
    std::cout<<"	 _________________________________________ "<<std::endl;
    std::cout<<"	||)()()()()()()()()()()()()()()()()()||"<<std::endl;
    std::cout<<"	||-->     Eliminar Producto        <--||"<<std::endl;
    std::cout<<"	||-->                              <--||"<<std::endl;
    std::cout<<"	||--> Opciones:                    <--||"<<std::endl;
    std::cout<<"	||--> [a].Eliminar grano           <--||"<<std::endl;
    std::cout<<"	||--> [b].Eliminar Limpieza        <--||"<<std::endl;
    std::cout<<"	||--> [c].Eliminar Liquido         <--||"<<std::endl;
    std::cout<<"	||--> [d].Eliminar embutido        <--||"<<std::endl;
    std::cout<<"	||--> [e].Eliminar fruta/verdura   <--||"<<std::endl;
    std::cout<<"	||--> [r].Regresar                 <--||"<<std::endl;
    std::cout<<"	||-->                              <--||"<<std::endl;
    std::cout<<"	||--> Seleccione una opcion.       <--||"<<std::endl;
    std::cout<<"	||-->         para continuar...    <--||"<<std::endl;
    std::cout<<"	||)()()()()()()()()()()()()()()()()||"<<std::endl;
    std::cout<<"	 ___________________________________________ "<<std::endl;
    std::cout<<"Tu eleccion: ";
}

void mostrarReportes(){
    system("clear");
    std::cout<<"	 _________________________________________ "<<std::endl;
    std::cout<<"	||)()()()()()()()()()()()()()()()()()(||"<<std::endl;
    std::cout<<"	||-->     Reportes de Productos    <--||"<<std::endl;
    std::cout<<"	||-->                              <--||"<<std::endl;
    std::cout<<"	||--> Opciones:                    <--||"<<std::endl;
    std::cout<<"	||--> [a].Reporte Granos           <--||"<<std::endl;
    std::cout<<"	||--> [b].Reporte Limpieza         <--||"<<std::endl;
    std::cout<<"	||--> [c].Reporte Liquido          <--||"<<std::endl;
    std::cout<<"	||--> [d].Reporte Embutido         <--||"<<std::endl;
    std::cout<<"	||--> [e].Reporte Fruta/verdura    <--||"<<std::endl;
    std::cout<<"	||--> [f].Reporte todos productos  <--||"<<std::endl;
    std::cout<<"	||--> [r].Regresar                 <--||"<<std::endl;
    std::cout<<"	||-->                              <--||"<<std::endl;
    std::cout<<"	||--> Seleccione una opcion.       <--||"<<std::endl;
    std::cout<<"	||-->         para continuar...    <--||"<<std::endl;
    std::cout<<"	||)()()()()()()()()()()()()()()()()()(||"<<std::endl;
    std::cout<<"	 ___________________________________________ "<<std::endl;
    std::cout<<"Tu eleccion: ";
}

void menuAgregar(){
    char opcion = 'z';
    while(opcion != 0){
        mostrarAgregar();
        opcion = leerLetra();
        switch(opcion){
            case 'a':
                agregarGrano();
                break;
            case 'b':
                std::cout<<"Agregar limpieza: ";
                break;
            case 'c':
                std::cout<<"Agregar liquido: ";
                break;
            case 'd':
                std::cout<<"Agregar embutido: ";
            case 'e':
                std::cout<<"Agregar fruta/verdura: ";
                break;
                break;
            case 'r':
                system("clear");
                return;
            default:
                std::cout<<"Opcion incorrecta "<<std::endl;
                break;

        }

    }
}
void menuModificar(){
    char opcion = 'z';
    while(opcion != 0){
        mostrarModificar();
        opcion = leerLetra();
        switch(opcion){
            case 'a':
                std::cout<<"Modificar grano: ";
                break;
            case 'b':
                std::cout<<"Modificar limpieza: ";
                break;
            case 'c':
                std::cout<<"Modificar liquido: ";
                break;
            case 'd':
                std::cout<<"Modificar embutido: ";
            case 'e':
                std::cout<<"Modificar fruta/verdura: ";
                break;
                break;
            case 'r':
                system("clear");
                return;
            default:
                std::cout<<"Opcion incorrecta "<<std::endl;
                break;

        }

    }
}
void menuEliminar(){
    char opcion = 'z';
    while(opcion != 0){
        mostrarEliminar();
        opcion = leerLetra();
        switch(opcion){
            case 'a':
                std::cout<<"Eliminar grano: ";
                break;
            case 'b':
                std::cout<<"Eliminar limpieza: ";
                break;
            case 'c':
                std::cout<<"Eliminar liquido: ";
                break;
            case 'd':
                std::cout<<"Eliminar embutido: ";
            case 'e':
                std::cout<<"Eliminar fruta/verdura: ";
                break;
            case 'r':
                system("clear");
                return;
            default:
                std::cout<<"Opcion incorrecta "<<std::endl;
                break;

        }

    }
}

void menuReportes(){
    char opcion = 'z';
    while(opcion != 0){
        mostrarReportes();
        opcion = leerLetra();
        switch(opcion){
            case 'a':
                std::cout<<"Reporte grano: ";
                break;
            case 'b':
                std::cout<<"Reporte limpieza: ";
                break;
            case 'c':
                std::cout<<"Reporte liquido: ";
                break;
            case 'd':
                std::cout<<"Reporte embutido: ";
            case 'e':
                std::cout<<"Reporte fruta/verdura: ";
                break;
            case 'f':
                std::cout<<"Reporte todos ";
                break;
            case 'r':
                system("clear");
                return;
            default:
                std::cout<<"Opcion incorrecta "<<std::endl;
                break;

        }

    }
}

void MenuPrincipal(){
    int opcion = -1;
    while(opcion != 5){
        mostrarMenuPrincipal();
        std::cout<<"Tu eleccion: ";
        opcion = leerNumero();
        switch(opcion){
            case 1:
                menuAgregar();
                break;
            case 2:
                menuModificar();
                break;
            case 3:
                menuEliminar();
                break;
            case 4:
                menuReportes();
                break;
            default:
                std::cout<<"Opcion incorrecta "<<std::endl;
                break;
        }

    }
}
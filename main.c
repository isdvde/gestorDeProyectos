#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "lib_user.c"


int main() {	

	int op, v;	

	char aux_username[15];	//MUESTRA EL NOMBRE DE USUARIO AL INGRESAR
	int ID;	//GUARDA EL ID DEL ADMIN PARA ADMINISTRAR USUARIOS 

	USER user;


	
	do {


		scr();



		do {

			puts("BIENVENIDO");

			puts("1. Ingresar\n0. Salir\n");

			printf("Opcion => ");

			v = scanf("%d", &op);	buf();



			if ( !v || !( op >= 0 && op <= 1 ) ) {

				puts("Error, opcion incorrecta");

			} else if ( op == 1 ) {

				switch ( f_login(&user) ) {

					case 1: 

						f_admin_menu(user);

						break;

					case 2:

						f_standar_menu(user);

						break;

				}

			}

		} while ( !v || !( op >= 0 && op <= 1 ) );

	} while (op != 0);

return 0;

}
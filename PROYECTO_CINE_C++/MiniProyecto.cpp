#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#include<iostream>

int main(){

time_t today;

time(&today);
struct tm *mytime = localtime(&today);
int opcmenu,opcpeliculas,precio,cant,golosinas,combo,opcciclo,opcpromociones,cantasientos,instancia=0,opcdimension=0,preciodimension,j,sala;
char pelicula1[]="TITANIC",pelicula2[]="ANABELLE",pelicula3[]="AVENGERS",pelicula4[]="TOY STORY",pelicula5[]="TED 2", pelicula[30],peliculanull[]="NO HA SELECCIONADO NINGUNA";
char pelicula6[]="GIGLI",pelicula7[]="COCO",pelicula8[]="EXODO",pelicula9[]="ZAAT",pelicula10[]="TROLL 2",pelipromociones[30],dim1[]="2D",dim2[]="3D",dim3[]="PREMIER",dimension[8],dimensionnull[]="NO HA SELECCIONADO NINGUNA";
char asiento[50][3],hora[20],hora1[]="3:40PM",hora2[]="2:50PM",hora3[]="1:30PM",inicio[3];


double desc,isv,total,st,acumst=0,acumisv=0,acumtotal=0,descuento,acumdesc=0;
	strcpy(pelicula,peliculanull);
	strcpy(dimension,peliculanull);
combo=0;

	printf ("SISTEMA LISTO PARA ENTRAR,DESEA INICIAR?\n");
	printf("\n");
	printf ("---------------- S (SI) ------------- N (NO) ---------------------\n" );	
	scanf ("%s",&inicio);
while(strcmp(inicio, "S"  ) == 0 || strcmp(inicio, "s"  ) == 0){
	

do{

	printf("\n");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< BIENVENIDO AL CINE UTH >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("\n");
	printf("********************* 1. MOSTRAR PELICULAS EN TAQUILLA *******************************\n");
	printf("********************* 2. COMBOS DE GOLOSINAS           *******************************\n");
	printf("********************* 3. PROMOCIONES                   *******************************\n");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>><>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("\n");
	printf("******************************** ELIJA UNA OPCION ************************************\n");
	scanf("%d",&opcmenu);
	system("cls");
	switch(opcmenu){
		case 1:
			
			if(instancia==0){
				instancia++;
			printf("\n");
			printf("\t\t\t*************************** MENU PELICULAS EN TAQUILLA ***************************\n");
			printf("\n");
			printf("______________________________________________________________________________________\n");
			printf("        NOMBRE           GENERO           DURACION   	SALA       BOLETO	INICIO    \n");
			printf("______________________________________________________________________________________\n");
			printf("1-      TITANIC          ROMANCE          2:30h          2 	   L.80 	3:40PM\n");
			printf("2-      ANABELLE         TERROR           1:30h          3 	   L.110	2:50PM \n");
			printf("3-      AVENGERS         ACCION           2:50h          4 	   L.90 	2:50PM\n");
			printf("4-      TOY STORY        ANIMADA          1:50h          5 	   L.70 	2:50PM\n");
			printf("5-      TED 2            COMEDIA          2:30h          2	   L.90 	1:30PM\n");
			printf("\n");
			printf("____________________________________ ELIJA UNA OPCION________________________________________\n");
			scanf("%d",&opcpeliculas);
			
			
			system("cls");
		printf("\n");
			printf("\t\t\t*************************** SELECIONE LA DIMENSION  ***************************\n");
			printf("\n");
			printf("__________________________________________________________________________________\n");
			printf("       DIMENSION                                   PRECIO \n");
			printf("__________________________________________________________________________________\n");
			printf("1         2D                    	     VALOR NORMAL DE PELCULA \n");
			printf("2-        3D                                 	  BOLETO + L.30 \n");
			printf("3-      PREMIER                                	  BOLETO + L.50 \n");
			scanf("%d",&opcdimension);
				switch(opcdimension){
					
					case 1:
						strcpy(dimension,dim1);
						preciodimension=0;
					break;
					case 2:
						strcpy(dimension,dim2);
						preciodimension=30*cant;
					
					break;
					case 3:
						strcpy(dimension,dim3);
						preciodimension=50*cant;
					break;
				}
			printf("INGRESE LA CANTIDAD DE BOLETOS\n ");
			printf("AVISO: SI USTED COMPRA 2 O MAS BOLETOS TENDRA UN DESCUENTO !\n ");
			scanf("%d",&cant);
			cantasientos=cant;

				switch(opcpeliculas){
					
					case 1:
						strcpy(hora,hora1);
						strcpy(pelicula,pelicula1);
						sala=2;
						printf("************************* USTED HA SELECCIONADO: %s *************************  \n",pelicula);
						precio=80;			
					break;
					case 2:
						sala=3;
						strcpy(hora,hora2);
						strcpy(pelicula,pelicula2);
						printf("************************* USTED HA SELECCIONADO: %s *************************  \n",pelicula);
						precio=110;		
					break;
					case 3:
						sala=4;
						strcpy(hora,hora2);
						strcpy(pelicula,pelicula3);
						printf("************************* USTED HA SELECCIONADO: %s *************************  \n",pelicula);
						precio=90;			
					break;
					case 4:
						sala=5;
						strcpy(hora,hora2);
						strcpy(pelicula,pelicula4);
						printf("************************* USTED HA SELECCIONADO: %s *************************  \n",pelicula);
						precio=70;			
					break;
					case 5:
						sala=2;
						strcpy(hora,hora3);
						strcpy(pelicula,pelicula5);
						printf("************************* USTED HA SELECCIONADO: %s *************************  \n",pelicula);
						precio=90;		
					break;
					default:	
						printf("LO SENTIMOS, LA PELICULA NO EXISTE :(  \n");
									
				}
				
	for(int i = 1; i <= cant; i = i + 1){
				
			printf("********************* ASIENTOS EN SALA DISPONIBLES  *********************\n");
			printf("\n");
			printf("_____________________________________________________________________\n");
			printf(" \tCOLUMNA                       ASIENTO  \n");
			printf("_____________________________________________________________________\n");
			printf("|___________________________________________________________________|\n");
			printf("|     	 A        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("|___________________________________________________________________|\n");
			printf("|    	 B        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("|___________________________________________________________________|\n");
			printf("|    	 C        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("|___________________________________________________________________|\n");
			printf("|    	 D        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("|___________________________________________________________________|\n");
			printf("|    	 F        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("|___________________________________________________________________|\n");
			printf("|    	 G        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("\n");
			printf("/////////////////  SELECIONE SU COLUMNA Y NUMERO DE ASIENTO: %d /////////////////////////\n",i);
		
			//3 asientos
			//A1 = a3  si
			//A2 = a5
			//A3 = a5
			if(i==1){
				scanf("%s",&asiento[i]);
			}else{
				scanf("%s",&asiento[i]);// i=3
				for(j=1; j<i; j++){ // segunda entrada
				  //j=1;
					while(strcmp(asiento[j], asiento[i]  ) == 0 ){
							//estado = true;	
							printf("ESTE ASIENTO YA HA SIDO RESERVADO, POR FAVOR  SELECCIONE UN ASIENTO DIFERENTE A: %s \n",asiento[i]);
							scanf("%s",&asiento[i]);
							j=0;
			  	 	}
			  	  //j++;	
			   }
			
			}
			
	} 
			if(cant>=2){
				desc=0.05;
			}else{
				desc=0;
			}
	 }else{
	 	printf("YA HA SELECIONADO UNA PELICULA \n");
	 }	
	break;
		case 2:
			printf("****************************** MENU GOLOSINAS CINE UTH ****************************\n");
			printf("____________________________________________________________________________________________\n");
			printf(" \t COMBO                       DESCRIPCION                               PRECIO    \n");
			printf("____________________________________________________________________________________________\n");
			printf("1-      COMBO 1         1 PALOMITA GRANDE, 2 REFRESCOS MEDIANOS                L.120 \n");
			printf("2-      COMBO 2         2 PALOMITA MEDIANAS, 2 REFRESCOS GRANDES               L.150 \n");
			printf("3-      COMBO 3         1 NACHOS, 2 REFRESCOS PEQUENOS                         L.140 \n");
			printf("4-      COMBO 4        	1 HOT DOGS, 1 REGRESCO GRANDE                          L.110 \n");
			printf("5-      COMBO 5         2 PALOMITAS GRANDES, 3 REFRESCOS                       L.170 \n");
			printf("\n");
			printf("____________________________________ ELIJA UNA OPCION________________________________________\n");
			scanf("%d",&golosinas);
			switch(golosinas){
					
					case 1:
						combo=1;
						printf("************************* USTED HA SELECCIONADO: COMBO %d *************************  \n",combo);
						precio=120;			
					break;
					case 2:
						combo=2;
						printf("************************* USTED HA SELECCIONADO: COMBO %d *************************  \n",combo);
						precio=150;		
					break;
					case 3:
						combo=3;
						printf("************************* USTED HA SELECCIONADO: COMBO %d *************************  \n",combo);
						precio=140;				
					break;
					case 4:
						combo=4;
						printf("************************* USTED HA SELECCIONADO: COMBO %d *************************  \n",combo);
						precio=110;			
					break;
					case 5:
						combo=5;
						printf("************************* USTED HA SELECCIONADO: COMBO %d *************************  \n",combo);
						precio=170;		
					break;
					default:	
						printf("LO SENTIMOS, LA PELICULA NO EXISTE :(  \n");
									
				}
		
					printf("INGRESE LA CANTIDAD DEl COMBO NUMERO: | %d |  \n ",combo);
					scanf("%d",&cant);
				
	break;
	
		case 3:
			if(instancia==0){
			instancia++;
			strcpy(dimension,dim1);
			printf("********************* PROPOCIONES DE DIA : %d/%d/%d ********************\n",mytime->tm_mday,mytime->tm_mon,mytime->tm_year+1900);
			printf("|_____________________________________________________________________________________________________\n");
			printf(" \tPELICULA                GENERO             DURACION       SALA      PRECIO       INICIO  \n");
			printf("|_____________________________________________________________________________________________________\n");
			printf("1-      GIGLI                   COMEDIA        	  1:40h       	    2      L.30      	 3:40PM \n");
			printf("2-      COCO                    ANIMADA       	  1:20h       	    3      L.40       	 2:50PM \n");
			printf("3-      EXODO                   ACCION         	  1:56h       	    3      L.60		 2:50PM \n");
			printf("4-      ZAAT                    ACCION         	  1:35h       	    5      L.50 	 2:50PM \n");
			printf("5-      TROLL 2               DOCUMENTALISTA      2:50h       	    4      L.30   	 1:30PM \n");
			printf("\n");
			printf("___________________________ ELIJA UNA OPCION ________________________\n");
			scanf("%d",&opcpromociones);
			
			system("cls");
			printf("INGRESE LA CANTIDAD DE BOLETOS\n ");
			scanf("%d",&cant);
			cantasientos=cant;
			
				switch(opcpromociones){
					
					case 1:
						strcpy(hora,hora1);
						strcpy(pelicula,pelicula6);
						printf("************************* USTED HA SELECCIONADO: %s *************************  \n",pelicula);
						precio=30;			
					break;
					case 2:
						strcpy(hora,hora2);
						strcpy(pelicula,pelicula7);
						printf("************************* USTED HA SELECCIONADO: %s *************************  \n",pelicula);
						precio=40;		
					break;
					case 3:
						strcpy(hora,hora2);
						strcpy(pelicula,pelicula8);
						printf("************************* USTED HA SELECCIONADO: %s *************************  \n",pelicula);
						precio=60;			
					break;
					case 4:
						strcpy(hora,hora2);
						strcpy(pelicula,pelicula9);
						printf("************************* USTED HA SELECCIONADO: %s *************************  \n",pelicula);
						precio=50;			
					break;
					case 5:
						strcpy(hora,hora3);
						strcpy(pelicula,pelicula10);
						printf("************************* USTED HA SELECCIONADO: %s *************************  \n",pelicula);
						precio=30;		
					break;
					default:	
						printf("LO SENTIMOS, LA PELICULA NO EXISTE :(  \n");
									
				}
				
				for(int i = 1; i <= cantasientos; i = i + 1){
				
			printf("********************* ASIENTOS EN SALA DISPONIBLES  *********************\n");
			printf("\n");
			printf("|____________________________________________________________________\n");
			printf(" \t  COLUMNA                       ASIENTO  \n");
			printf("|___________________________________________________________________|\n");
			printf("|     	 A        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("|___________________________________________________________________|\n");
			printf("|    	 B        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("|___________________________________________________________________|\n");
			printf("|    	 C        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("|___________________________________________________________________|\n");
			printf("|    	 D        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("|___________________________________________________________________|\n");
			printf("|    	 F        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("|___________________________________________________________________|\n");
			printf("|    	 G        | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |        |\n");
			printf("|___________________________________________________________________|\n");
			printf("\n");
			printf("/////////////////  SELECIONE SU COLUMNA Y NUMERO DE ASIENTO: %d /////////////////////////\n",i);
			
			if(i==1){
				scanf("%s",&asiento[i]);
			}else{
				scanf("%s",&asiento[i]);
				for(j=1; j<i; j++){
					while(strcmp(asiento[j], asiento[i]  ) == 0 ){
							
							printf("ESTE ASIENTO YA HA SIDO RESERVADO, POR FAVOR  SELECCIONE UN ASIENTO DIFERENTE A: %s \n",asiento[i]);
							scanf("%s",&asiento[i]);
							j=0;
			  	 	}	  	
			   }
			}		
		}
	
	}else{
		printf("YA HA SELECONADO UNA PELICULA \n");
	}
	break;
		
	default:

	printf("LO SENTIMOS, LA OPCION NO ES VALIDA :(  \n");
		
		
	}
	st=cant*precio;
	acumst=acumst+st;
	descuento=st*desc;
	acumdesc=acumdesc+descuento;
	isv=st*0.15;
	acumisv=acumisv+isv;
	total=st+isv-descuento+preciodimension;
	acumtotal=acumtotal+total;
	
	printf(" DESEA REALIZAR NUEVA COMPRA ? \n");
	printf(" 1. SI  \n");
	printf(" 2. NO  \n");
	scanf("%d",&opcciclo);
	
}while(opcciclo!=2);
printf("                                             CINE UTH                                               \n");
printf("                                         RFJ- 09937715562                                               \n");
printf("                 Bo. La Cruz, Frente a Cerveceria Hondurefia S.A. Bulevar Enrique Weddle                   \n");
printf("                 	        Telefonos: 2508-2618 | 2508-2619                                              \n");

printf("   \n");
printf("                                         FACTURA DEL %d/%d/%d                                              \n",mytime->tm_mday,mytime->tm_mon,mytime->tm_year+1900 );
printf("______________________________________________________________________________________________________\n");
printf("\t\t\ PELICULA:                                            %s \n",pelicula);
printf("\t\t\ DIMENSION:                                           %s \n",dimension);
printf("\t\t\ SALA:                                                %d \n",sala);
printf("\t\t\ HORA:                                                %s \n",hora);
printf("----------------------------------------------------------------------------------------------------- \n");
printf("\t\t\    COMBO:                                            %d  \n",combo);
printf("----------------------------------------------------------------------------------------------------- \n");
for(int i = 1; i <= cantasientos; i = i + 1){
printf("\t\t\ ASIENTOS:                                            %s \n",asiento[i]);
}

printf("----------------------------------------------------------------------------------------------------- \n");
printf("\t\t\ SUBTOTAL:                                            %.2lf \n",acumst);
printf("\t\t\      ISV:                                            %.2lf \n",acumisv);
printf("\t\t\DESCUENTO:                                            %.2lf \n",acumdesc);
printf("\t\t\    TOTAL:                                            %.2lf \n",acumtotal);	 
printf("______________________________________________________________________________________________________\n");

	system("pause");
	system("cls");
	printf ("SISTEMA LISTO PARA ENTRAR,�DESEA INICIAR?\n");
	printf("\n");
	printf ("---------------- S (SI) ------------- N (NO) ---------------------\n" );	
	scanf ("%s",&inicio);
	
acumisv=0;
acumtotal=0;
acumdesc=0;
acumst=0;
instancia=0;
combo=0;
}



	getch();
	return 0;	
	
	
}	

#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	//bd bd = createBD();
	char * comando = new (char[MAX_COMANDO]);
	char * pch, * pch1, * pch2, *pch3, *pch4;
	bool ejecutado = false;

	bool salir = false;
	
	do{
		cout << "\tcreateTable(nombreTabla)\n";
		cout << "\tsalir()\n\n";
		cout << "> ";
		fflush( stdin );
		ejecutado = false;
		
		fgets (comando, MAX_COMANDO, stdin);

		pch = strtok (comando,"( ,)");

		if (strcasecmp (pch, "createTable") == 0){
			pch = strtok (NULL, "( ,)");
			if (pch != NULL){
				cout << "Acá va la primera opción" << endl;
				// ret = createTable (bd, pch);
				// ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		else if (strcasecmp (pch, "dropTable") == 0){
			pch = strtok (NULL, "( ,)");
			if (pch != NULL){
				cout << "Acá va la segunda opción" << endl;
				// ret = dropTable (bd, pch);
				// ejecutado = true;
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		else if (strcasecmp (pch, "addCol") == 0){
			pch = strtok (NULL, "( ,)");
			if (pch != NULL){
				pch1 = strtok (NULL, "( ,)");
				if (pch1 != NULL){
					pch2 = strtok (NULL, "( ,)");
					if (pch2 != NULL){
						pch3 = strtok (NULL, "( ,)");
						if (pch3 != NULL){
							cout << "Acá va la tercera opción" << endl;
							//ret = addCol (bd, pch, pch1, pch2, pch3);
							//ejecutado = true;
						}
						else
							cout << " - ERROR: Faltan Parametros.\n";
					}
					else
						cout << " - ERROR: Faltan Parametros.\n";
				}
				else
					cout << " - ERROR: Faltan Parametros.\n";
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		else if (strcasecmp (pch, "alterCol") == 0){
			pch = strtok (NULL, "( ,)");
			if (pch != NULL){
				pch1 = strtok (NULL, "( ,)");
				if (pch1 != NULL){
					pch2 = strtok (NULL, "( ,)");
					if (pch2 != NULL){
						pch3 = strtok (NULL, "( ,)");
						if (pch3 != NULL){
							pch4 = strtok (NULL, "( ,)");
							if (pch4 != NULL){
								cout << "Acá va la cuarta opción" << endl;
								//ret = alterCol (bd, pch, pch1, pch2, pch3, pch4);
								//ejecutado = true;
							}
							else
								cout << " - ERROR: Faltan Parametros.\n";
						}
						else
							cout << " - ERROR: Faltan Parametros.\n";
					}
					else
						cout << " - ERROR: Faltan Parametros.\n";
				}
				else
					cout << " - ERROR: Faltan Parametros.\n";
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}

		else if (strcasecmp (pch, "dropCol") == 0){
			pch = strtok (NULL, "( ,)");
			if (pch != NULL)
			{
				pch1 = strtok (NULL, "( ,)");
				if (pch1 != NULL){
					cout << "Acá va la quinta opción" << endl;
					//ret = dropCol (bd, pch, pch1);
					//ejecutado = true;
				}
				else
					cout << " - ERROR: Faltan Parametros.\n";
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		else if (strcasecmp (pch, "insertInto") == 0){
			pch = strtok (NULL, "( ,)");
			if (pch != NULL){
				pch1 = strtok (NULL, "( ,)");
				if (pch1 != NULL){
					pch2 = strtok (NULL, "( ,)");
					if (pch2 != NULL){
						cout << "Acá va la sexto opción" << endl;
						//ret = insertInto (bd, pch, pch1, pch2);
						//ejecutado = true;
					}
					else
						cout << " - ERROR: Faltan Parametros.\n";
				}
				else
					cout << " - ERROR: Faltan Parametros.\n";
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		else if (strcasecmp (pch, "deleteFrom") == 0){
			pch = strtok (NULL, "( ,)");
			if (pch != NULL){
				pch1 = strtok (NULL, "( ,)");
				if (pch1 != NULL){
					cout << "Acá va la septima opción" << endl;
					//ret = deleteFrom (bd, pch, pch1);
					//ejecutado = true;
				}
				else
					cout << " - ERROR: Faltan Parametros.\n";
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}
		else if (strcasecmp (pch, "update") == 0){
			pch = strtok (NULL, "( ,)");
			if (pch != NULL){
				pch1 = strtok (NULL, "( ,)");
				if (pch1 != NULL){
					pch2 = strtok (NULL, "( ,)");
					if (pch2 != NULL){
						pch3 = strtok (NULL, "( ,)");
						if (pch3 != NULL){
							cout << "Acá va la octava opción" << endl;
							//ret = update (bd, pch, pch1, pch2, pch3);
							//ejecutado = true;
						}
						else
							cout << " - ERROR: Faltan Parametros.\n";
					}
					else
						cout << " - ERROR: Faltan Parametros.\n";
				}
				else
					cout << " - ERROR: Faltan Parametros.\n";
			}
			else
				cout << " - ERROR: Faltan Parametros.\n";
		}

	}while (!salir);
	cout << "\n\n - CHAUU!!!!\n";

	//bd = destroyBD(bd);
	delete [] comando;
}

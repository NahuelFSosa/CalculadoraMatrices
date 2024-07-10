#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;
void mainMenu_First();
void mainMenu_Second();
void mainMenu_Third();
void mainMenu_Fourth();
float num1, num2, num3, divided1;
int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	int option;
	while (option!=5){
		cout<<"Elegir una ecuación a resolver."<<endl<<endl<<"1-\t_x+_=_"<<endl<<"2-\t_x+_=_x-_"<<endl<<"3-\t(_x+_)/_ = (_x+_)/_"<<endl<<"4-\t(_x+_)/_ + _ = (_x+_)/_ + _"<<endl<<"5-\tSalir del sistema."<<endl<<endl<<"Su elección: ";
		cin>>option;
		switch(option){
			case 1:
				mainMenu_First();
				break;
			case 2:
				mainMenu_Second();
				break;
			case 3:
				mainMenu_Third();
				break;
			case 4:
				mainMenu_Fourth();
				break;
			case 5:
				system("cls");
				cout<<endl<<"\tSaliendo del sistema.";
				sleep(1);
				system("cls");
				cout<<endl<<"\tSaliendo del sistema..";
				sleep(1);
				system("cls");
				cout<<endl<<"\tSaliendo del sistema...";
				sleep(1);
				system("cls");
				cout<<endl<<"\tSaliendo del sistema.";
				sleep(1);
				system("cls");
				cout<<endl<<"\tSaliendo del sistema..";
				sleep(1);
				system("cls");
				cout<<endl<<"\tSaliendo del sistema...";
				sleep(1);
				system("cls");
				break;
			default:
				system("cls");
				cout<<"Opción invalida. Por favor, ingrese una opción válida."<<endl<<endl;
				system("pause");
				break;
		}
	return 0;
	}
}
//Primera ecuación.
void mainMenu_First(){
	system("cls");
	setlocale(LC_ALL,"");
	cout<<endl<<"\t_x+_=_"<<endl<<endl<<"\tEscriba el primer número: ";
	cin>>num1;
	system("cls");
	cout<<endl<<"\t"<<num1<<"x+_=_"<<endl<<endl<<"\tEscriba el segundo número: ";
	cin>>num2;
	system("cls");
	if(num2<0){
		cout<<endl<<"\t"<<num1<<"x+("<<num2<<")=_"<<endl<<endl<<"\tEscriba el tercer número: ";
		cin>>num3;
		system("cls");
		cout<<endl<<"\t"<<num1<<"x+("<<num2<<")="<<num3<<endl<<endl<<"\t";
	}
	else{
		cout<<endl<<"\t"<<num1<<"x+"<<num2<<"=_"<<endl<<endl<<"\tEscriba el tercer número: ";
		cin>>num3;
		system("cls");
		cout<<endl<<"\t"<<num1<<"x+"<<num2<<"="<<num3<<endl<<endl<<"\t";
	}
	system("pause");
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación.";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación..";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación...";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación.";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación..";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación..."<<endl<<endl<<"\t\t";
	sleep(1);
	float minus1;
	minus1=num3-num2;
	divided1=minus1/num1;
	system("cls");
	if(num2<0){
		cout<<endl<<endl<<"\t"<<num1<<"x="<<num3<<"-("<<num2<<")"<<endl;
		sleep(1);
		cout<<endl<<"\t"<<num1<<"x="<<minus1<<endl;
		sleep(1);
		if(num1<0){
			cout<<endl<<"\tx="<<minus1<<"÷("<<num1<<")"<<endl;
		}
		else{
			cout<<endl<<"\tx="<<minus1<<"÷"<<num1<<endl;
		}
		sleep(1);
		cout<<endl<<"\tx="<<divided1<<endl<<endl<<"\t";
	}
	else{
		cout<<endl<<endl<<"\t"<<num1<<"x="<<num3<<"-"<<num2<<endl;
		sleep(1);
		cout<<endl<<"\t"<<num1<<"x="<<minus1<<endl;
		sleep(1);
		if(num1<0){
			cout<<endl<<"\tx="<<minus1<<"÷("<<num1<<")"<<endl;
		}
		else{
			cout<<endl<<"\tx="<<minus1<<"÷"<<num1<<endl;
		}
		sleep(1);
		cout<<endl<<"\tx="<<divided1<<endl<<endl<<"\t";
	}	
	sleep(1);
	system("pause");
	system("cls");
	float times1, plus1;
	times1=num1*divided1;
	plus1=times1+num2;
	cout<<endl<<"\tVerificicando.";
	sleep(1);
	system("cls");
	cout<<endl<<"\tVerificicando..";
	sleep(1);
	system("cls");
	cout<<endl<<"\tVerificicando...";
	sleep(1);
	system("cls");
	if(divided1<0){
		if(num2<0){
			cout<<endl<<"\t"<<num1<<"*("<<divided1<<")+("<<num2<<")"<<endl;
			sleep(1);
			cout<<endl<<"\t"<<times1<<"+"<<num2<<endl;
			sleep(1);
			cout<<endl<<"\t"<<plus1<<endl<<endl<<"\t";	
		}
		else{
			cout<<endl<<"\t"<<num1<<"*("<<divided1<<")+"<<num2<<endl;
			sleep(1);
			cout<<endl<<"\t"<<times1<<"+"<<num2<<endl;
			sleep(1);
			cout<<endl<<"\t"<<plus1<<endl<<endl<<"\t";	
		}	
	}
	else{
		if(num2<0){
			cout<<endl<<"\t"<<num1<<"*"<<divided1<<"+("<<num2<<")"<<endl;
			sleep(1);
			cout<<endl<<"\t"<<times1<<"+"<<num2<<endl;
			sleep(1);
			cout<<endl<<"\t"<<plus1<<endl<<endl<<"\t";	
		}
		else{
			cout<<endl<<"\t"<<num1<<"*"<<divided1<<"+"<<num2<<endl;
			sleep(1);
			cout<<endl<<"\t"<<times1<<"+"<<num2<<endl;
			sleep(1);
			cout<<endl<<"\t"<<plus1<<endl<<endl<<"\t";	
		}
	}
	sleep(1);	
	system("pause");
	system("cls");
	if(divided1<0){
		if(num2<0){
			cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*("<<divided1<<")+("<<num2<<")="<<num3<<endl<<endl;	
		}
		else{
			cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*("<<divided1<<")+"<<num2<<"="<<num3<<endl<<endl;	
		}
	}
	else{
		if(num2<0){
			cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*"<<divided1<<"+("<<num2<<")="<<num3<<endl<<endl;	
		}
		else{
			cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*"<<divided1<<"+"<<num2<<"="<<num3<<endl<<endl;	
		}	
	}
	return;
}
//Segunda ecuación.
void mainMenu_Second(){
	system("cls");
	setlocale(LC_ALL,"");
	float num4;
	cout<<endl<<"\t_x+_=_x+_"<<endl<<endl<<"\tEscriba el primer número: ";
	cin>>num1;
	system("cls");
	cout<<endl<<"\t"<<num1<<"x+_=_x+_"<<endl<<endl<<"\tEscriba el segundo número: ";
	cin>>num2;
	system("cls");
	if(num2<0){
		cout<<endl<<"\t"<<num1<<"x+("<<num2<<")=_x+_"<<endl<<endl<<"\tEscriba el tercer número: ";
		cin>>num3;
		system("cls");
		cout<<endl<<"\t"<<num1<<"x+("<<num2<<")="<<num3<<"x+_"<<endl<<endl<<"\tEscriba el cuarto número: ";
		cin>>num4;
		system("cls");
		if(num4<0){
			cout<<endl<<"\t"<<num1<<"x+("<<num2<<")="<<num3<<"x+("<<num4<<")"<<endl<<endl;
		}
		else{
			cout<<endl<<"\t"<<num1<<"x+("<<num2<<")="<<num3<<"x+"<<num4<<endl<<endl;
		}	
	}	
	else{
		cout<<endl<<"\t"<<num1<<"x+("<<num2<<")=_x+_"<<endl<<endl<<"\tEscriba el tercer número: ";
		cin>>num3;
		system("cls");
		cout<<endl<<"\t"<<num1<<"x+"<<num2<<"="<<num3<<"x+_"<<endl<<endl<<"\tEscriba el cuarto número: ";
		cin>>num4;
		system("cls");
		if(num4<0){	
			cout<<endl<<"\t"<<num1<<"x+"<<num2<<"="<<num3<<"x+("<<num4<<")"<<endl<<endl;
		}
		else{
			cout<<endl<<"\t"<<num1<<"x+"<<num2<<"="<<num3<<"x+"<<num4<<endl<<endl;
		}	
	}
	system("pause");
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación.";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación..";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación...";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación.";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación..";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación...";
	sleep(1);
	system("cls");
	float minus1,minus2,conversion1,conversion2;
	conversion1=num2*-1;
	conversion2=num3*-1;
	minus1=num4-num2;
	minus2=num1-num3;
	divided1=minus1/minus2;
	if(num3<0){
		if(num2<0){
			cout<<endl<<"\t"<<num1<<"x+"<<conversion2<<"x="<<num4<<"+"<<conversion1<<endl;
		}
		else{
			cout<<endl<<"\t"<<num1<<"x+"<<conversion2<<"x="<<num4<<"-"<<num2<<""<<endl;
		}
	}
	else{
		if(num2<0){
			cout<<endl<<"\t"<<num1<<"x-"<<num3<<"x="<<num4<<"+"<<conversion1<<endl;
		}
		else{
			cout<<endl<<"\t"<<num1<<"x-"<<num3<<"x="<<num4<<"-"<<num2<<""<<endl;
		}
	}
	sleep(1);
	cout<<endl<<"\t"<<minus2<<"x="<<minus1<<endl;
	sleep(1);
	if(minus2<0){
		cout<<endl<<"\tx="<<minus1<<"÷("<<minus2<<")"<<endl;
	}
	else{
		cout<<endl<<"\tx="<<minus1<<"÷"<<minus2<<endl;
	}
	sleep(1);
	cout<<endl<<"\tx="<<divided1<<endl<<endl<<"\t";
	sleep(1);
	system("pause");
	system("cls");
	cout<<endl<<"\tVerificicando.";
	sleep(1);
	system("cls");
	cout<<endl<<"\tVerificicando..";
	sleep(1);
	system("cls");
	cout<<endl<<"\tVerificicando...";
	sleep(1);
	system("cls");
	float times1, times2, member1, member2;
	times1=num1*divided1;
	times2=num3*divided1;
	member1=times1+num2;
	member2=times2-num4;
	if(divided1<0){
		if(num2<0){
			if(num4<0){
				cout<<endl<<"\t"<<num1<<"*("<<divided1<<")+("<<num2<<")="<<num3<<"*("<<divided1<<")-("<<num4<<")"<<endl;
			}
			else{
				cout<<endl<<"\t"<<num1<<"*("<<divided1<<")+("<<num2<<")="<<num3<<"*("<<divided1<<")-"<<num4<<endl;
			}
		}
		else{
			if(num4<0){
				cout<<endl<<"\t"<<num1<<"*("<<divided1<<")+"<<num2<<"="<<num3<<"*("<<divided1<<")-("<<num4<<")"<<endl;	
			}
			else{
				cout<<endl<<"\t"<<num1<<"*("<<divided1<<")+"<<num2<<"="<<num3<<"*("<<divided1<<")-"<<num4<<endl;	
			}	
		}
	}
	else{
		if(num2<0){
			if(num4<0){
				cout<<endl<<"\t"<<num1<<"*"<<divided1<<"+("<<num2<<")="<<num3<<"*"<<divided1<<"-("<<num4<<")"<<endl;
			}
			else{
				cout<<endl<<"\t"<<num1<<"*"<<divided1<<"+("<<num2<<")="<<num3<<"*"<<divided1<<"-"<<num4<<endl;
			}
		}
		else{
			if(num4<0){
				cout<<endl<<"\t"<<num1<<"*"<<divided1<<"+"<<num2<<"="<<num3<<"*"<<divided1<<"-("<<num4<<")"<<endl;	
			}
			else{
				cout<<endl<<"\t"<<num1<<"*"<<divided1<<"+"<<num2<<"="<<num3<<"*"<<divided1<<"-"<<num4<<endl;	
			}	
		}
	}
	sleep(1);
	if(num2<0){
		if(num4<0){
			cout<<endl<<"\t"<<times1<<"+("<<num2<<")="<<times2<<"-("<<num4<<")"<<endl;
		}
		else{
			cout<<endl<<"\t"<<times1<<"+("<<num2<<")="<<times2<<"-"<<num4<<endl;
		}
	}
	else{
		if(num4<0){
			cout<<endl<<"\t"<<times1<<"+"<<num2<<"="<<times2<<"-("<<num4<<")"<<endl;
		}
		else{
			cout<<endl<<"\t"<<times1<<"+"<<num2<<"="<<times2<<"-"<<num4<<endl;
		}
	}
	sleep(1);
	cout<<endl<<"\t"<<member1<<"="<<member2<<endl<<endl<<"\t";
	sleep(1);
	system("pause");
	system("cls");
	if(divided1<0){
		if(num2<0){
			if(num4<0){
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*("<<divided1<<")+("<<num2<<")="<<num3<<"*("<<divided1<<")-("<<num4<<")"<<endl;
			}
			else{
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*("<<divided1<<")+("<<num2<<")="<<num3<<"*("<<divided1<<")-"<<num4<<endl;
			}		
		}
		else{
			if(num4<0){
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*("<<divided1<<")+"<<num2<<"="<<num3<<"*("<<divided1<<")-("<<num4<<")"<<endl;
			}
			else{
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*("<<divided1<<")+"<<num2<<"="<<num3<<"*("<<divided1<<")-"<<num4<<endl;
			}
		}
	}
	else{
		if(num2<0){
			if(num4<0){
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*"<<divided1<<"+("<<num2<<")="<<num3<<"*"<<divided1<<"-("<<num4<<")"<<endl;
			}
			else{
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*"<<divided1<<"+("<<num2<<")="<<num3<<"*"<<divided1<<"-"<<num4<<endl;
			}		
		}
		else{
			if(num4<0){
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*"<<divided1<<"+"<<num2<<"="<<num3<<"*"<<divided1<<"-("<<num4<<")"<<endl;
			}
			else{
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t"<<num1<<"*"<<divided1<<"+"<<num2<<"="<<num3<<"*"<<divided1<<"-"<<num4<<endl;
			}
		}
	}
	return;
}
//Tercer ecuación.
void mainMenu_Third(){
	system("cls");
	setlocale(LC_ALL,"");
	float num4, num5, num6;
	cout<<endl<<"\t(_x+_)/_ = (_x+_)/_"<<endl<<endl<<"\tEscriba el primer número: ";
	cin>>num1;
	system("cls");
	cout<<endl<<"\t("<<num1<<"x+_)/_ = (_x+_)/_"<<endl<<endl<<"\tEscriba el segundo número: ";
	cin>>num2;
	system("cls");
	if(num2<0){
		cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/_ = (_x+_)/_"<<endl<<endl<<"\tEscriba el tercer número: ";
		cin>>num3;
		system("cls");
		cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = (_x+_)/_"<<endl<<endl<<"\tEscriba el cuarto número: ";
		cin>>num4;
		system("cls");
		cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num4<<"x+_)/_"<<endl<<endl<<"\tEscriba el quinto número: ";
		cin>>num5;
		system("cls");
		if(num5<0){
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num4<<"x+("<<num5<<"))/_"<<endl<<endl<<"\tEscriba el sexto número: ";
			cin>>num6;
			system("cls");
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num4<<"x+("<<num5<<"))/"<<num6<<endl<<endl<<"\t";
		}
		else{
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num4<<"x+"<<num5<<")/_"<<endl<<endl<<"\tEscriba el sexto número: ";
			cin>>num6;
			system("cls");
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num4<<"x+"<<num5<<")/"<<num6<<endl<<endl<<"\t";
		}
	}
	else{
		cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/_ = (_x+_)/_"<<endl<<endl<<"\tEscriba el tercer número: ";
		cin>>num3;
		system("cls");
		cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = (_x+_)/_"<<endl<<endl<<"\tEscriba el cuarto número: ";
		cin>>num4;
		system("cls");
		cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num4<<"x+_)/_"<<endl<<endl<<"\tEscriba el quinto número: ";
		cin>>num5;
		system("cls");
		if(num5<0){
			cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num4<<"x+("<<num5<<"))/_"<<endl<<endl<<"\tEscriba el sexto número: ";
			cin>>num6;
			system("cls");
			cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num4<<"x+("<<num5<<"))/"<<num6<<endl<<endl<<"\t";
		}
		else{
			cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num4<<"x+"<<num5<<")/_"<<endl<<endl<<"\tEscriba el sexto número: ";
			cin>>num6;
			system("cls");
			cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num4<<"x+"<<num5<<")/"<<num6<<endl<<endl<<"\t";
		}
	}			
	system("pause");
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación.";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación..";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación...";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación.";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación..";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación...";
	sleep(1);
	system("cls");
	float times1,times2,times3,times4,convertion1,minus1,minus2,division1;
	times1=num1*num6;
	times2=num2*num6;
	times3=num4*num3;
	times4=num5*num3;
	minus1=times1-times3;
	minus2=times4-times2;
	division1=minus2/minus1;
	if(num2<0){
		if(num6<0){
			if(num5<0){
				if(num3<0){
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*("<<num6<<") = ("<<num4<<"x+("<<num5<<"))*("<<num3<<")"<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*("<<num6<<") = ("<<num4<<"x+("<<num5<<"))*"<<num3<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
			}
			else{
				if(num3<0){
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*("<<num6<<") = ("<<num4<<"x+"<<num5<<")*("<<num3<<")"<<endl;
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*("<<num6<<") = ("<<num4<<"x+"<<num5<<")*"<<num3<<endl;
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
			}
		}
		else{
			if(num5<0){
				if(num3<0){
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*"<<num6<<" = ("<<num4<<"x+("<<num5<<"))*("<<num3<<")"<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*"<<num6<<" = ("<<num4<<"x+("<<num5<<"))*"<<num3<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
			}
			else{
				if(num3<0){
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*"<<num6<<" = ("<<num4<<"x+"<<num5<<")*("<<num3<<")"<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*"<<num6<<" = ("<<num4<<"x+"<<num5<<")*"<<num3<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
			}
		}
	}
	else{
		if(num6<0){
			if(num5<0){
				if(num3<0){
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*("<<num6<<") = ("<<num4<<"x+("<<num5<<"))*("<<num3<<")"<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*("<<num6<<") = ("<<num4<<"x+("<<num5<<"))*("<<num3<<")"<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
			}
			else{
				if(num3<0){
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*"<<num6<<" = ("<<num4<<"x+"<<num5<<")*"<<num3<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*"<<num6<<" = ("<<num4<<"x+"<<num5<<")*"<<num3<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
			}
		}
		else{
			if(num5<0){
				if(num3<0){
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*"<<num6<<" = ("<<num4<<"x+("<<num5<<"))*("<<num3<<")"<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*"<<num6<<" = ("<<num4<<"x+("<<num5<<"))*"<<num3<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
			}
			else{
				if(num3<0){
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*"<<num6<<" = ("<<num4<<"x+"<<num5<<")*("<<num3<<")"<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*"<<num6<<" = ("<<num4<<"x+"<<num5<<")*"<<num3<<endl;
					sleep(2);
					if(times2<0){
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+("<<times2<<") = "<<times3<<"x+"<<times4<<endl;
						}
					}
					else{
						if(times4<0){
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+("<<times4<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x+"<<times2<<" = "<<times3<<"x+"<<times4<<endl;
						}
					}
					sleep(2);
					if(times3<0){
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-("<<times3<<")x = "<<times4<<"-"<<times2<<endl;
						}
					}
					else{
						if(times2<0){
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-("<<times2<<")"<<endl;
						}
						else{
							cout<<endl<<"\t"<<times1<<"x-"<<times3<<"x = "<<times4<<"-"<<times2<<endl;
						}
					}
					sleep(2);
					cout<<endl<<"\t"<<minus1<<"x = "<<minus2<<endl;
					sleep(2);
					if(minus1<0){
						cout<<endl<<"\tx = "<<minus2<<"÷("<<minus1<<")"<<endl;
					}
					else{
						cout<<endl<<"\tx = "<<minus2<<"÷"<<minus1<<endl;
					}
					sleep(2);
					cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";
				}
			}
		}
	}
	sleep(1);
	system("pause");
	system("cls");
	cout<<endl<<"\tVerificicando.";
	sleep(1);
	system("cls");
	cout<<endl<<"\tVerificicando..";
	sleep(1);
	system("cls");
	cout<<endl<<"\tVerificicando...";
	float plus1,plus2,member1,member2;
	times1=num1*division1;
	times2=num4*division1;
	plus1=times1+num2;
	plus2=times2+num5;
	member1=plus1/num3;
	member2=plus2/num6;
	sleep(1);
	system("cls");
	if(division1<0){
		if(num2<0){
			if(num5<0){
				cout<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" = ("<<num4<<"*"<<division1<<"+("<<num5<<"))/"<<num6<<endl;
				sleep(1);
				cout<<endl<<"\t("<<times1<<"+("<<num2<<"))/"<<num3<<" = ("<<times2<<"+("<<num5<<"))/"<<num6<<endl;		
			}
			else{
				cout<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" = ("<<num4<<"*"<<division1<<"+"<<num5<<")/"<<num6<<endl;
				sleep(1);
				cout<<endl<<"\t("<<times1<<"+("<<num2<<"))/"<<num3<<" = ("<<times2<<"+"<<num5<<")/"<<num6<<endl;
			}
		}
		else{
			if(num5<0){
				cout<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" = ("<<num4<<"*"<<division1<<"+("<<num5<<"))/"<<num6<<endl;
				sleep(1);
				cout<<endl<<"\t("<<times1<<"+"<<num2<<")/"<<num3<<" = ("<<times2<<"+("<<num5<<"))/"<<num6<<endl;
			}
			else{
				cout<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" = ("<<num4<<"*"<<division1<<"+"<<num5<<")/"<<num6<<endl;
				sleep(1);
				cout<<endl<<"\t("<<times1<<"+"<<num2<<")/"<<num3<<" = ("<<times2<<"+"<<num5<<")/"<<num6<<endl;
			}
		}
	}
	else{
		if(num2<0){
			if(num5<0){
				cout<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" = ("<<num4<<"*"<<division1<<"+("<<num5<<"))/"<<num6<<endl;
				sleep(1);
				cout<<endl<<"\t("<<times1<<"+("<<num2<<")/"<<num3<<" = ("<<times2<<"+("<<num5<<"))/"<<num6<<endl;
			}
			else{
				cout<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" = ("<<num4<<"*"<<division1<<"+"<<num5<<")/"<<num6<<endl;
				sleep(1);
				cout<<endl<<"\t("<<times1<<"+("<<num2<<"))/"<<num3<<" = ("<<times2<<"+"<<num5<<")/"<<num6<<endl;
			}
		}
		else{
			if(num5<0){
				cout<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" = ("<<num4<<"*"<<division1<<"+("<<num5<<"))/"<<num6<<endl;
				sleep(1);
				cout<<endl<<"\t("<<times1<<"+"<<num2<<")/"<<num3<<" = ("<<times2<<"+("<<num5<<"))/"<<num6<<endl;
			}
			else{
				cout<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" = ("<<num4<<"*"<<division1<<"+"<<num5<<")/"<<num6<<endl;
				sleep(1);
				cout<<endl<<"\t("<<times1<<"+"<<num2<<")/"<<num3<<" = ("<<times2<<"+"<<num5<<")/"<<num6<<endl;
			}
		}
	}	
	sleep(1);
	cout<<endl<<"\t"<<plus1<<"/"<<num3<<" = "<<plus2<<"/"<<num6<<endl;
	sleep(1);
	if(num3<0){
		if(num6<0){
			cout<<endl<<"\t"<<plus1<<"÷("<<num3<<")"<<" = "<<plus2<<"÷("<<num6<<")"<<endl;
		}
		else{
			cout<<endl<<"\t"<<plus1<<"÷("<<num3<<")"<<" = "<<plus2<<"÷"<<num6<<endl;
		}
	}
	else{
		if(num6<0){
			cout<<endl<<"\t"<<plus1<<"÷"<<num3<<" = "<<plus2<<"÷("<<num6<<")"<<endl;
		}
		else{
			cout<<endl<<"\t"<<plus1<<"÷"<<num3<<" = "<<plus2<<"÷"<<num6<<endl;
		}
	}
	sleep(1);
	cout<<endl<<"\t"<<member1<<" = "<<member2<<endl<<endl<<"\t";
	system("pause");
	system("cls");
	if(division1<0){
		if(num2<0){
			if(num5<0){
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" = ("<<num4<<"*("<<division1<<")+("<<num5<<"))/"<<num6<<endl;
			}
			else{
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" = ("<<num4<<"*("<<division1<<")+"<<num5<<")/"<<num6<<endl;
			}
		}
		else{
			if(num5<0){
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" = ("<<num4<<"*("<<division1<<")+("<<num5<<"))/"<<num6<<endl;
			}
			else{
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" = ("<<num4<<"*("<<division1<<")+"<<num5<<")/"<<num6<<endl;
			}
		}
	}
	else{
		if(num2<0){
			if(num5<0){
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" = ("<<num4<<"*"<<division1<<"+("<<num5<<"))/"<<num6<<endl;
			}
			else{
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" = ("<<num4<<"*"<<division1<<"+"<<num5<<")/"<<num6<<endl;
			}
		}
		else{
			if(num5<0){
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" = ("<<num4<<"*"<<division1<<"+("<<num5<<"))/"<<num6<<endl;
			}
			else{
				cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" = ("<<num4<<"*"<<division1<<"+"<<num5<<")/"<<num6<<endl;
			}
		}
	}
	return;
}
//Cuarta ecuación.
void mainMenu_Fourth(){
	system("cls");
	setlocale(LC_ALL,"");
	float num4, num5, num6, num7, num8;
	cout<<endl<<"\t(_x+_)/_ + _ = (_x+_)/_ + _"<<endl<<endl<<"\tEscriba el primer número: ";
	cin>>num1;
	system("cls");
	cout<<endl<<"\t("<<num1<<"x+_)/_ + _ = (_x+_)/_ + _"<<endl<<endl<<"\tEscriba el segundo número: ";
	cin>>num2;
	system("cls");
	if(num2<0){
		cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/_ + _ = (_x+_)/_ + _"<<endl<<endl<<"\tEscriba el tercer número: ";
		cin>>num3;
		system("cls");
		cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + _ = (_x+_)/_ + _"<<endl<<endl<<"\tEscriba el cuarto número: ";
		cin>>num4;
		system("cls");
		if(num4<0){
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = (_x+_)/_ + _"<<endl<<endl<<"\tEscriba el quinto número: ";
			cin>>num5;
			system("cls");
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+_)/_ + _"<<endl<<endl<<"\tEscriba el sexto número: ";
			cin>>num6;
			system("cls");
			if(num6<0){
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+("<<num6<<"))/_ + _"<<endl<<endl<<"\tEscriba el séptimo número: ";
				cin>>num7;
				system("cls");
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + _"<<endl<<endl<<"\tEscriba el octavo número: ";
				cin>>num8;
				system("cls");
				if(num8<0){
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<num8<<endl<<endl<<"\t";
				}
			}
			else{
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+"<<num6<<")/_ + _"<<endl<<endl<<"\tEscriba el séptimo número: ";
				cin>>num7;
				system("cls");
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + _"<<endl<<endl<<"\tEscriba el octavo número: ";
				cin>>num8;
				system("cls");
				if(num8<0){
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<endl<<endl<<"\t";
				}
			}		
		}
		else{
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = (_x+_)/_ + _"<<endl<<endl<<"\tEscriba el quinto número: ";
			cin>>num5;
			system("cls");
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+_)/_ + _"<<endl<<endl<<"\tEscriba el sexto número: ";
			cin>>num6;
			system("cls");
			if(num6<0){
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/_ + _"<<endl<<endl<<"\tEscriba el séptimo número: ";
				cin>>num7;
				system("cls");
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + _"<<endl<<endl<<"\tEscriba el octavo número: ";
				cin>>num8;
				system("cls");
				if(num8<0){
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<num8<<endl<<endl<<"\t";
				}
			}
			else{
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/_ + _"<<endl<<endl<<"\tEscriba el séptimo número: ";
				cin>>num7;
				system("cls");
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + _"<<endl<<endl<<"\tEscriba el octavo número: ";
				cin>>num8;
				system("cls");
				if(num8<0){
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<endl<<endl<<"\t";
				}
			}				
		}		
	}
	else{
		cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/_ + _ = (_x+_)/_ + _"<<endl<<endl<<"\tEscriba el tercer número: ";
		cin>>num3;
		system("cls");
		cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + _ = (_x+_)/_ + _"<<endl<<endl<<"\tEscriba el cuarto número: ";
		cin>>num4;
		system("cls");
		if(num4<0){
			
		}
		else{
			cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = (_x+_)/_ + _"<<endl<<endl<<"\tEscriba el quinto número: ";
			cin>>num5;
			system("cls");
			cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+_)/_ + _"<<endl<<endl<<"\tEscriba el sexto número: ";
			cin>>num6;
			system("cls");
			if(num6<0){
				cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/_ + _"<<endl<<endl<<"\tEscriba el séptimo número: ";
				cin>>num7;
				system("cls");
				cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + _"<<endl<<endl<<"\tEscriba el octavo número: ";
				cin>>num8;
				system("cls");
				if(num8<0){
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl<<endl<<"\t";
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<num8<<endl<<endl<<"\t";
				}	
			}
			else{
				cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/_ + _"<<endl<<endl<<"\tEscriba el séptimo número: ";
				cin>>num7;
				system("cls");
				cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + _"<<endl<<endl<<"\tEscriba el octavo número: ";
				cin>>num8;
				system("cls");
				if(num8<0){
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl<<endl<<"\t";	
				}
				else{
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<endl<<endl<<"\t";	
				}
			}	
		}	
	}
	system("pause");
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación.";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación..";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación...";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación.";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación..";
	sleep(1);
	system("cls");
	cout<<endl<<endl<<"\t\tResolviendo la ecuación...";
	sleep(1);
	system("cls");
	float minus1,minus2,minus3,times1,times2,times3,times4,times5,plus1,division1;
	minus1=num8-num4;
	times1=num7*minus1;
	plus1=num6+times1;
	times2=num1*num7;
	times3=num2*num7;
	times4=num5*num3;
	times5=plus1*num3;
	minus2=times2-times4;
	minus3=times5-times3;
	division1=minus3/minus2;
	if(num2<0){	//NUM 2 NEGATIVO
		if(num4<0){	//NUM 2 NEGATIVO, NUM 4 NEGATIVO
			if(num6<0){	//NUM 2 NEGATIVO, NUM 4 NEGATIVO, NUM 6 NEGATIVO
				if(num8<0){	//NUM 2 NEGATIVO, NUM 4 NEGATIVO, NUM 6 NEGATIVO, NUM 8 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<num8<<") - ("<<num4<<")"<<endl;
				}
				else{	//NUM 2 NEGATIVO, NUM 4 NEGATIVO, NUM 6 NEGATIVO, NUM 8 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<num8<<" - ("<<num4<<")"<<endl;
				}
			}	
			else{	//NUM 2 NEGATIVO, NUM 4 NEGATIVO, NUM 6 POSITIVO
				if(num8<0){	//NUM 2 NEGATIVO, NUM 4 NEGATIVO, NUM 6 POSITIVO, NUM 8 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<") - ("<<num4<<")"<<endl;
				}
				else{	//NUM 2 NEGATIVO, NUM 4 NEGATIVO, NUM 6 POSITIVO, NUM 8 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<" - ("<<num4<<")"<<endl;
				}
			}
		}
		else{	//NUM 2 NEGATIVO, NUM 4 POSITIVO
			if(num6<0){	//NUM 2 NEGATIVO, NUM 4 POSITIVO, NUM 6 NEGATIVO
				if(num8<0){	//NUM 2 NEGATIVO, NUM 4 POSITIVO, NUM 6 NEGATIVO, NUM 8 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<num8<<") - "<<num4<<endl;
				}
				else{	//NUM 2 NEGATIVO, NUM 4 POSITIVO, NUM 6 NEGATIVO, NUM 8 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<num8<<" - "<<num4<<endl;
				}
			}	
			else{	//NUM 2 NEGATIVO, NUM 4 POSITIVO, NUM 6 POSITIVO
				if(num8<0){	//NUM 2 NEGATIVO, NUM 4 POSITIVO, NUM 6 POSITIVO, NUM 8 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<") - "<<num4<<endl;
				}
				else{	//NUM 2 NEGATIVO, NUM 4 POSITIVO, NUM 6 POSITIVO, NUM 8 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<" - "<<num4<<endl;
				}
			}
		}
		sleep(2);
		if(num6<0){	//NUM 2 NEGATIVO, NUM 6 NEGATIVO
			if(minus1<0){	//NUM 2 NEGATIVO, NUM 6 NEGATIVO, MINUS 1 NEGATIVO
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<minus1<<")"<<endl;
				sleep(2);
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+("<<num6<<")+"<<times1<<")/"<<num7<<endl;
			}
			else{	//NUM 2 NEGATIVO, NUM 6 NEGATIVO, MINUS 1 POSITIVO
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<minus1<<endl;
				sleep(2);
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+("<<num6<<")+"<<times1<<")/"<<num7<<endl;
			}
		}
		else{	//NUM 2 NEGATIVO, NUM 6 POSITIVO
			if(minus1<0){	//NUM 2 NEGATIVO, NUM 6 POSITIVO, MINUS 1 NEGATIVO
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<minus1<<")"<<endl;
				sleep(2);
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+"<<num6<<"+("<<times1<<"))/"<<num7<<endl;
			}
			else{	//NUM 2 NEGATIVO, NUM 6 POSIIVO, MINUS 1 POSITIVO
				cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<minus1<<endl;				
			}
		}
		sleep(2);
		if(times1<0){	//NUM 2 NEGATIVO, TIMES 1 NEGATIVO
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+"<<num6<<"+("<<times1<<"))/"<<num7<<endl;
		}
		else{	//NUM 2 NEGATIVO, TIMES 1 POSITIVO
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+"<<num6<<"+"<<times1<<")/"<<num7<<endl;
		}
		sleep(2);
		if(plus1<0){	//NUM 2 NEGATIVO, PLUS 1 NEGATIVO
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+("<<plus1<<"))/"<<num7<<endl;
			sleep(2);
			if(num7<0){	//NUM 2 NEGATIVO, PLUS 1 NEGATIVO, NUM 7 NEGATIVO
				if(num3<0){	//NUM 2 NEGATIVO, PLUS 1 NEGATIVO, NUM 7 NEGATIVO, NUM 3 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*("<<num7<<") = ("<<num5<<"x+("<<plus1<<"))*("<<num3<<")"<<endl;
				}
				else{	//NUM 2 NEGATIVO, PLUS 1 NEGATIVO, NUM 7 NEGATIVO, NUM 3 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*("<<num7<<") = ("<<num5<<"x+("<<plus1<<"))*"<<num3<<endl;
				}
			}
			else{	//NUM 2 NEGATIVO, PLUS 1 NEGATIVO, NUM 7 POSITIVO
				if(num3<0){	//NUM 2 NEGATIVO, PLUS 1 NEGATIVO, NUM 7 POSITIVO, NUM 3 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*"<<num7<<" = ("<<num5<<"x+("<<plus1<<"))*("<<num3<<")"<<endl;
				}
				else{	//NUM 2 NEGATIVO, PLUS 1 NEGATIVO, NUM 7 POSITIVO, NUM 3 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*"<<num7<<" = ("<<num5<<"x+("<<plus1<<"))*"<<num3<<endl;
				}
			}
		}
		else{	//NUM 2 NEGATIVO, PLUS 1 POSITIVO
			cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))/"<<num3<<" = ("<<num5<<"x+"<<plus1<<")/"<<num7<<endl;
			sleep(2);
			if(num7<0){	//NUM 2 NEGATIVO, PLUS 1 POSITIVO, NUM 7 NEGATIVO
				if(num3<0){	//NUM 2 NEGATIVO, PLUS 1 POSITIVO, NUM 7 NEGATIVO, NUM 3 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*("<<num7<<") = ("<<num5<<"x+"<<plus1<<")*("<<num3<<")"<<endl;
				}
				else{	//NUM 2 NEGATIVO, PLUS 1 POSITIVO, NUM 7 NEGATIVO, NUM 3 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*("<<num7<<") = ("<<num5<<"x+"<<plus1<<")*"<<num3<<endl;
				}
			}
			else{	//NUM 2 NEGATIVO, PLUS 1 POSITIVO, NUM 7 POSITIVO
				if(num3<0){	//NUM 2 NEGATIVO, PLUS 1 POSITIVO, NUM 7 POSITIVO, NUM 3 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*"<<num7<<" = ("<<num5<<"x+"<<plus1<<")*("<<num3<<")"<<endl;
				}
				else{	//NUM 2 NEGATIVO, PLUS 1 POSITIVO, NUM 7 POSITIVO, NUM 3 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+("<<num2<<"))*"<<num7<<" = ("<<num5<<"x+"<<plus1<<")*"<<num3<<endl;
				}
			}
		}
	}
	else{	//NUM 2 POSITIVO
		if(num4<0){	//NUM 2 POSITIVO, NUM 4 NEGATIVO	
			if(num6<0){	//NUM 2 POSITIVO, NUM 4 NEGATIVO, NUM 6 NEGATIVO
				if(num8<0){	//NUM 2 POSITIVO, NUM 4 NEGATIVO, NUM 6 NEGATIVO, NUM 8 NEGATIVO
						cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
						sleep(2);
						cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<") - ("<<num4<<")"<<endl;
					}
					else{	//NUM 2 POSITIVO, NUM 4 NEGATIVO, NUM 6 NEGATIVO, NUM 8 POSITIVO
						cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
						sleep(2);
						cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<" - ("<<num4<<")"<<endl;
					}
				}	
			else{	//NUM 2 POSITIVO, NUM 4 NEGATIVO, NUM 6 POSITIVO
				if(num8<0){	//NUM 2 POSITIVO, NUM 4 NEGATIVO, NUM 6 POSITIVO, NUM 8 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<") - ("<<num4<<")"<<endl;
				}
				else{	//NUM 2 POSITIVO, NUM 4 NEGATIVO, NUM 6 POSITIVO, NUM 8 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<" - ("<<num4<<")"<<endl;
				}
			}
		}
		else{	//NUM 2 POSITIVO, NUM 4 POSITIVO
			if(num6<0){	//NUM 2 POSITIVO, NUM 4 POSITIVO, NUM 6 NEGATIVO
				if(num8<0){	//NUM 2 POSITIVO, NUM 4 POSITIVO, NUM 6 NEGATIVO, NUM 8 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<num8<<") - "<<num4<<endl;
				}
				else{	//NUM 2 POSITIVO, NUM 4 POSITIVO, NUM 6 NEGATIVO, NUM 8 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<num8<<" - "<<num4<<endl;
				}
			}	
			else{	//NUM 2 POSITIVO, NUM 4 POSITIVO, NUM 6 POSITIVO
				if(num8<0){	//NUM 2 POSITIVO, NUM 4 POSITIVO, NUM 6 POSITIVO, NUM 8 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<num8<<") - "<<num4<<endl;
				}
				else{	//NUM 2 POSITIVO, NUM 4 POSITIVO, NUM 6 POSITIVO, NUM 8 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					sleep(2);
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<num8<<" - "<<num4<<endl;
				}
			}
		}
		sleep(2);
		if(num6<0){	//NUM 2 POSITIVO, NUM 6 NEGATIVO
			if(minus1<0){	//NUM 2 POSITIVO, NUM 6 NEGATIVO, MINUS 1 NEGATIVO
				cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + ("<<minus1<<")"<<endl;
			}
			else{	//NUM 2 POSITIVO, NUM 6 NEGATIVO, MINUS 1 POSITIVO
				cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+("<<num6<<"))/"<<num7<<" + "<<minus1<<endl;
			}
		}
		else{	//NUM 2 POSITIVO, NUM 6 POSITIVO
			if(minus1<0){	//NUM 2 POSITIVO, NUM 6 POSITIVO, MINUS 1 NEGATIVO
				cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + ("<<minus1<<")"<<endl;
			}
			else{	//NUM 2 POSITIVO, NUM 6 POSIIVO, MINUS 1 POSITIVO
				cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+"<<num6<<")/"<<num7<<" + "<<minus1<<endl;				
			}
		}
		sleep(2);
		if(times1<0){	//NUM 2 POSITIVO, TIMES 1 NEGATIVO
			cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+"<<num6<<"+("<<times1<<"))/"<<num7<<endl;
		}
		else{	//NUM 2 POSITIVO, TIMES 1 POSITIVO
			cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+"<<num6<<"+"<<times1<<")/"<<num7<<endl;
		}
		sleep(2);
		if(plus1<0){	//NUM 2 POSITIVO, PLUS 1 NEGATIVO
			cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+("<<plus1<<"))/"<<num7<<endl;
			sleep(2);
			if(num7<0){	//NUM 2 POSITIVO, PLUS 1 NEGATIVO, NUM 7 NEGATIVO
				if(num3<0){	//NUM 2 POSITIVO, PLUS 1 NEGATIVO, NUM 7 NEGATIVO, NUM 3 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*("<<num7<<") = ("<<num5<<"x+("<<plus1<<"))*("<<num3<<")"<<endl;
				}
				else{	//NUM 2 POSITIVO, PLUS 1 NEGATIVO, NUM 7 NEGATIVO, NUM 3 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*("<<num7<<") = ("<<num5<<"x+("<<plus1<<"))*"<<num3<<endl;
				}
			}
			else{	//NUM 2 POSITIVO, PLUS 1 NEGATIVO, NUM 7 POSITIVO
				if(num3<0){	//NUM 2 POSITIVO, PLUS 1 NEGATIVO, NUM 7 POSITIVO, NUM 3 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*"<<num7<<" = ("<<num5<<"x+("<<plus1<<"))*("<<num3<<")"<<endl;
				}
				else{	//NUM 2 POSITIVO, PLUS 1 NEGATIVO, NUM 7 POSITIVO, NUM 3 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*"<<num7<<" = ("<<num5<<"x+("<<plus1<<"))*"<<num3<<endl;
				}
			}
		}
		else{	//NUM 2 POSITIVO, PLUS 1 POSITIVO
			cout<<endl<<"\t("<<num1<<"x+"<<num2<<")/"<<num3<<" = ("<<num5<<"x+"<<plus1<<")/"<<num7<<endl;
			sleep(2);
			if(num7<0){	//NUM 2 POSITIVO, PLUS 1 POSITIVO, NUM 7 NEGATIVO
				if(num3<0){	//NUM 2 POSITIVO, PLUS 1 POSITIVO, NUM 7 NEGATIVO, NUM 3 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*("<<num7<<") = ("<<num5<<"x+"<<plus1<<")*("<<num3<<")"<<endl;
				}
				else{	//NUM 2 POSITIVO, PLUS 1 POSITIVO, NUM 7 NEGATIVO, NUM 3 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*("<<num7<<") = ("<<num5<<"x+"<<plus1<<")*"<<num3<<endl;
				}
			}
			else{	//NUM 2 POSITIVO, PLUS 1 POSITIVO, NUM 7 POSITIVO
				if(num3<0){	//NUM 2 POSITIVO, PLUS 1 POSITIVO, NUM 7 POSITIVO, NUM 3 NEGATIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*"<<num7<<" = ("<<num5<<"x+"<<plus1<<")*("<<num3<<")"<<endl;
				}
				else{	//NUM 2 POSITIVO, PLUS 1 POSITIVO, NUM 7 POSITIVO, NUM 3 POSITIVO
					cout<<endl<<"\t("<<num1<<"x+"<<num2<<")*"<<num7<<" = ("<<num5<<"x+"<<plus1<<")*"<<num3<<endl;
				}
			}
		}
	}
	sleep(2);
	if(times3<0){	//TIMES 3 NEGATIVO
		if(times5<0){	//TIMES 3 NEGATIVO, TIMES 5 NEGATIVO
			cout<<endl<<"\t"<<times2<<"x+("<<times3<<") = "<<times4<<"x+("<<times5<<")"<<endl;
		}
		else{	//TIMES 3 NEGATIVO, TIMES 5 POSITIVO
			cout<<endl<<"\t"<<times2<<"x+("<<times3<<") = "<<times4<<"x+"<<times5<<endl;
		}
		sleep(2);
		if(times4<0){	//TIMES 3 NEGATIVO, TIMES 4 NEGATIVO
			cout<<endl<<"\t"<<times2<<"x-("<<times4<<")x = "<<times5<<"-("<<times3<<")"<<endl;
		}
		else{	//TIMES 3 NEGATIVO, TIMES 4 POSITIVO
			cout<<endl<<"\t"<<times2<<"x-"<<times4<<"x = "<<times5<<"-("<<times3<<")"<<endl;
		}
	}
	else{	//TIMES 3 POSITIVO
		if(times5<0){	//TIMES 3 POSITIVO, TIMES 5 NEGATIVO
			cout<<endl<<"\t"<<times2<<"x+"<<times3<<" = "<<times4<<"x+("<<times5<<")"<<endl;
		}
		else{	//TIMES 3 POSITIVO, TIMES 5 POSITIVO
			cout<<endl<<"\t"<<times2<<"x+"<<times3<<" = "<<times4<<"x+"<<times5<<endl;
		}
		sleep(2);
		if(times4<0){	//TIMES 3 POSITIVO, TIMES 4 NEGATIVO
			cout<<endl<<"\t"<<times2<<"x-("<<times4<<")x = "<<times5<<"-"<<times3<<endl;
		}
		else{	//TIMES 3 POSITIVO, TIMES 4 POSITIVO
			cout<<endl<<"\t"<<times2<<"x-"<<times4<<"x = "<<times5<<"-"<<times3<<endl;
		}
	}
	sleep(2);
	cout<<endl<<"\t"<<minus2<<"x = "<<minus3<<endl;
	sleep(2);
	if(minus2<0){	//MINUS 2 NEGATIVO
		cout<<endl<<"\tx = "<<minus3<<"÷("<<minus2<<")"<<endl;
	}
	else{	//MINUS 2 POSITIVO
		cout<<endl<<"\tx = "<<minus3<<"÷"<<minus2<<endl;
	}	
	sleep(2);
	cout<<endl<<"\tx = "<<division1<<endl<<endl<<"\t";	
	sleep(1);
	system("pause");
	system("cls");
	cout<<endl<<"\tVerificicando.";
	sleep(1);
	system("cls");
	cout<<endl<<"\tVerificicando..";
	sleep(1);
	system("cls");
	cout<<endl<<"\tVerificicando...";
	float times6,times7,plus2,plus3,division2,division3,member1,member2;
	times6=num1*division1;
	times7=num5*division1;
	plus2=times6+num2;
	plus3=times7+num6;
	division2=plus2/num3;
	division3=plus3/num7;
	member1=division2+num4;
	member2=division3+num8;
	sleep(1);
	system("cls");
	if(division1<0){
		if(num2<0){
			if(num4<0){
				if(num6<0){
					if(num8){
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
			else{
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
		}
		else{
			if(num4<0){
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
			else{
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}	
			}
		}
	}
	else{
		if(num2<0){
			if(num4<0){
				if(num6<0){
					if(num8){
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
			else{
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
		}
		else{
			if(num4<0){
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
			else{
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
			
			
		}		
	}
	sleep(1);
	if(num2<0){
		if(num4<0){
			if(num6<0){
				if(num8<0){
					cout<<endl<<"\t("<<times6<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<times7<<"+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
				}
				else{
					cout<<endl<<"\t("<<times6<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<times7<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
				}
			}
			else{
				if(num8<0){
					cout<<endl<<"\t("<<times6<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<times7<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
				}
				else{
					cout<<endl<<"\t("<<times6<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<times7<<"+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
				}
			}
			
			
			
		}
		else{
			if(num6<0){
				if(num8<0){
					cout<<endl<<"\t("<<times6<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<times7<<"+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
				}
				else{
					cout<<endl<<"\t("<<times6<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<times7<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
				}
			}
			else{
				if(num8<0){
					cout<<endl<<"\t("<<times6<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<times7<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
				}
				else{
					cout<<endl<<"\t("<<times6<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<times7<<"+"<<num6<<"/"<<num7<<" + "<<num8<<endl;
				}
			}
			
			
			
		}
	}	
	else{
		if(num4<0){
			if(num6<0){
				if(num8<0){
					cout<<endl<<"\t("<<times6<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<times7<<"+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
				}
				else{
					cout<<endl<<"\t("<<times6<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<times7<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
				}
			}
			else{
				if(num8<0){
					cout<<endl<<"\t("<<times6<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<times7<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
				}
				else{
					cout<<endl<<"\t("<<times6<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<times7<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<endl;
				}
			}
		}
		else{
			if(num6<0){
				if(num8<0){
					cout<<endl<<"\t("<<times6<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<times7<<"+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
				}
				else{
					cout<<endl<<"\t("<<times6<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<times7<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
				}
			}
			else{
				if(num8<0){
					cout<<endl<<"\t("<<times6<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<times7<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
				}
				else{
					cout<<endl<<"\t("<<times6<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<times7<<"+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
				}
			}		
		}
	}
	sleep(1);
	if(num4<0){
		if(num8<0){
			cout<<endl<<"\t"<<plus2<<"/"<<num3<<" + ("<<num4<<") = "<<plus3<<"/"<<num7<<" + ("<<num8<<")"<<endl;
			sleep(1);
			cout<<endl<<"\t"<<division2<<" + ("<<num4<<") = "<<division3<<" + ("<<num8<<")"<<endl;
		}
		else{
			cout<<endl<<"\t"<<plus2<<"/"<<num3<<" + ("<<num4<<") = "<<plus3<<"/"<<num7<<" + "<<num8<<endl;
			sleep(1);
			cout<<endl<<"\t"<<division2<<" + ("<<num4<<") = "<<division3<<" + "<<num8<<endl;
		}
	}
	else{
		if(num8<0){
			cout<<endl<<"\t"<<plus2<<"/"<<num3<<" + "<<num4<<" = "<<plus3<<"/"<<num7<<" + ("<<num8<<")"<<endl;
			sleep(1);
			cout<<endl<<"\t"<<division2<<" + "<<num4<<" = "<<division3<<" + ("<<num8<<")"<<endl;	
		}
		else{
			cout<<endl<<"\t"<<plus2<<"/"<<num3<<" + "<<num4<<" = "<<plus3<<"/"<<num7<<" + "<<num8<<endl;
			sleep(1);
			cout<<endl<<"\t"<<division2<<" + "<<num4<<" = "<<division3<<" + "<<num8<<endl;
		}
	}
	sleep(1);
	cout<<endl<<"\t"<<member1<<" = "<<member2<<endl<<endl<<"\t";
	system("pause");
	system("cls");
	if(division1<0){
		if(num2<0){
			if(num4<0){
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
			else{
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
		}
		else{
			if(num4<0){
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
			else{
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*("<<division1<<")+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*("<<division1<<")+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
		}
	}
	else{
		if(num2<0){
			if(num4<0){
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
			else{
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+("<<num2<<"))/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
		}
		else{
			if(num4<0){
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+("<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + ("<<num4<<") = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
			else{
				if(num6<0){
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+("<<num6<<"))/"<<num7<<" + "<<num8<<endl;	
					}
				}
				else{
					if(num8<0){
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + ("<<num8<<")"<<endl;
					}
					else{
						cout<<endl<<"\tSu resultado es:"<<endl<<endl<<"\t("<<num1<<"*"<<division1<<"+"<<num2<<")/"<<num3<<" + "<<num4<<" = ("<<num5<<"*"<<division1<<"+"<<num6<<")/"<<num7<<" + "<<num8<<endl;
					}
				}
			}
		}
	}
	return;
}

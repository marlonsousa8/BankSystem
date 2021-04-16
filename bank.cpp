#include <iostream>
using namespace std;

string login(){
	string username;
	string password;
	std::cout << "Let's Go!" << endl;
	std::cout << "Username: ";
	//getline(cin, username);
	std::cin >> username;
	std::cout << "Password: ";
	std::cin >> password;

	if(username == "admin" && password == "msfadmin"){
		std::cout << "Logged!" << endl;
		return username;
		//BankApp();
		
	}else{
		std::cout << "Not Logged" << endl;
		return "False";
	}

}

string regist(){
	string username;
	string password;
	string password2;
	string phone;
	string cpf;

	std::cout << "Digite suas Credenciais" << endl;
	std::cout << "Username: ";
	std::cin >> username;

	std::cout << "Password: ";
	std::cin >> password;

	std::cout << "Digite Novamente o Password: ";
	std::cin >> password2;

	if(password == password2){
		std::cout << "Telefone: ";
		std::cin >> phone;

		std::cout << "CPF: ";
		std::cin >> cpf;

		std::cout << "Registro feito com Sucesso!" << endl;
		return username, password;
		
	}else{
		std::cout << "Passwords Diferentes" << endl;
		return 0;
		
	}

	


	return 0;

}

bool BankApp(){
	float conta = 1000;
	std::cout << "Seu saldo é de R$" << conta << endl;
	string resp;
	for(int i = 1; i<10; i++){
		std::cout << "[1] Transferir" << endl << "[2] Depositar" << endl << "[3] Extrair" << endl << "[4] Sair" <<  endl;
		std::cin >> resp;
		if(resp == "1"){
			float trans;
			std::cout << "Quanto deseja transferir?" << endl;
			std::cin >> trans;
			if(trans > conta){
				std::cout << endl << "Você não tem esse dinheiro..." << endl;
				return false;
			}else{
				string transname;
				
				std::cout << "Para quem deseja transferir? " << endl;
				std::cin >> transname;
				if(transname == "marlon"){
					conta = conta - trans;
					std::cout << endl << "Seu saldo agora é R$" << conta << endl;
				}else{
					std::cout << "Esse usuário não existe" << endl;
				}
				
			}
			


		}else{
			if(resp == "2"){
				float deposito;
				std::cout << "Quanto deseja Depositar?" << endl;
				std::cin >> deposito;
				conta = conta + deposito;
				std::cout << endl << "Seu saldo agora é R$" << conta << endl;


			}else{
				if(resp == "3"){
					float extrair;
					std::cout << "Quanto deseja Extrair?" << endl;
					std::cin >> extrair;
					if(extrair > conta){
						std::cout << endl << "Você não tem esse dinheiro..." << endl;
					}else{
						conta = conta - extrair;
						std::cout << endl << "Seu saldo agora é R$" << conta << endl;
					}
					

				}else{
					if(resp == "4"){
						std::cout << "Saindo..." << endl;
						return false;
					}
				}
			}
		}
		

		}

	return true;
}

int main(){

	int resp;
	std::cout << "Hello" << std::endl;
	std::cout << "[1]Login" << endl << "[2]Register" << endl << ":";
	std::cin >> resp;

	if(resp == 1){
		std::cout << "Login" << endl;
		string retorno = login();
		std::cout << endl;
		if(retorno=="admin"){
			std::cout << "Hello " << retorno << endl;
			BankApp();
		}
		 
		
	}else{
		if(resp==2){
			std::cout << "Register" << endl;
			string retorno = regist();
			std::cout << "Bem vindo " << retorno << endl;

			
		}else{
			std::cout << "Select a Option..." << endl;
			return 0;
		}
	}

	return 0;
}
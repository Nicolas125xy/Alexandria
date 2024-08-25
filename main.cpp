#include <iostream>
#include <cstdlib> 
using namespace std;

void Yaap() {
    string Text = R"(

▓██   ██▓ ▒█████   █    ██     ▄▄▄       ██▀███  ▓█████     ▄▄▄          ██▓███   ██▓ ██▀███   ▄▄▄      ▄▄▄█████▓▓█████ 
 ▒██  ██▒▒██▒  ██▒ ██  ▓██▒   ▒████▄    ▓██ ▒ ██▒▓█   ▀    ▒████▄       ▓██░  ██▒▓██▒▓██ ▒ ██▒▒████▄    ▓  ██▒ ▓▒▓█   ▀ 
  ▒██ ██░▒██░  ██▒▓██  ▒██░   ▒██  ▀█▄  ▓██ ░▄█ ▒▒███      ▒██  ▀█▄     ▓██░ ██▓▒▒██▒▓██ ░▄█ ▒▒██  ▀█▄  ▒ ▓██░ ▒░▒███   
  ░ ▐██▓░▒██   ██░▓▓█  ░██░   ░██▄▄▄▄██ ▒██▀▀█▄  ▒▓█  ▄    ░██▄▄▄▄██    ▒██▄█▓▒ ▒░██░▒██▀▀█▄  ░██▄▄▄▄██ ░ ▓██▓ ░ ▒▓█  ▄ 
  ░ ██▒▓░░ ████▓▒░▒▒█████▓     ▓█   ▓██▒░██▓ ▒██▒░▒████▒    ▓█   ▓██▒   ▒██▒ ░  ░░██░░██▓ ▒██▒ ▓█   ▓██▒  ▒██▒ ░ ░▒████▒
   ██▒▒▒ ░ ▒░▒░▒░ ░▒▓▒ ▒ ▒     ▒▒   ▓▒█░░ ▒▓ ░▒▓░░░ ▒░ ░    ▒▒   ▓▒█░   ▒▓▒░ ░  ░░▓  ░ ▒▓ ░▒▓░ ▒▒   ▓▒█░  ▒ ░░   ░░ ▒░ ░
 ▓██ ░▒░   ░ ▒ ▒░ ░░▒░ ░ ░      ▒   ▒▒ ░  ░▒ ░ ▒░ ░ ░  ░     ▒   ▒▒ ░   ░▒ ░      ▒ ░  ░▒ ░ ▒░  ▒   ▒▒ ░    ░     ░ ░  ░
 ▒ ▒ ░░  ░ ░ ░ ▒   ░░░ ░ ░      ░   ▒     ░░   ░    ░        ░   ▒      ░░        ▒ ░  ░░   ░   ░   ▒     ░         ░   
 ░ ░         ░ ░     ░              ░  ░   ░        ░  ░         ░  ░             ░     ░           ░  ░            ░  ░
 ░ ░                                                                                                                    
)";
    cout << "\033[38;5;196m" << Text << "\033[0m" << endl;
    cout << "Knowledge is not a crime, a crime is what you do with it." << endl;
}

void Pirate(const string& url) {
    #ifdef _WIN32
        std::string command = "start " + url;
    #elif __linux__
        std::string command = "xdg-open " + url;
    #elif __APPLE__
        std::string command = "open " + url;
    #else
        std::cerr << "Sistema operacional não suportado." << std::endl;
        return;
    #endif
    system(command.c_str());

}

void Navigation(){
    cout << "Escolha uma opção:" << endl;
    cout << "[1]. Pirataria em Geral" << endl;
    cout << "[2]. Ativar o Windows (Free)" << endl;
    cout << "[3]. Inteligência Artificial" << endl;
    cout << "[4]. Testar Distros Linux" << endl;
    cout << "[5]. Sair" << endl;
    cout << "Digite o número da opção: ";

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            Pirate("https://pirataria.digital/main-page");
            break;
        case 2:
            Pirate("https://massgrave.dev/");
            break;
        case 3:
            Pirate("https://theresanaiforthat.com/");
            break;
        case 4:
            Pirate("https://distrosea.com/pt/");
            break;
        case 5:
            break;
        default:
            cout << "Opção inválida!" << endl;
    }
    
}

int main() { 
    Yaap();
    Navigation();
    
    return 0;
}
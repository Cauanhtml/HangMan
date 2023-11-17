#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <unistd.h>

int English(); // ENGLISH FUNCTION

int main() { // BRAZILIAN LANGUAGE

    /* VARIABLES */
    bool NaoJogarDenovo = false;

    do { // Start of the loop

    srand(time(NULL));



    char palavra[30], letra[1], secreta[30];
    int tamanho, acerto, lifes;

    // Gera um Numero Random de 4 a 11
    lifes = rand() % 8 + 4;

    tamanho = 0;
    acerto = 0;




    /*---------------------------*/

    std::cout << "To play in English, type: English" << std::endl;

    char Choice[10];
    std::cin >> Choice;

    /* ENGLISH FUNCTION ACTIVATE */
    if (strcmp(Choice, "English") == 0 || strcmp(Choice, "english") == 0 || strcmp(Choice, "USA") == 0 || strcmp(Choice, "US") == 0 || strcmp(Choice, "ingles") == 0 || strcmp(Choice, "inglês") == 0) {
        sleep(2);
        system("cls");
        std::cout << std::endl;
        English();
        return 0;
    }
    /*--------------------------*/





        system("cls");
        sleep(1);

        std::cout << std::endl;
        std::cout << "Digite a palavra: ";
        std::cin >> palavra;

        while (palavra[tamanho] != '\0') {
            tamanho++;
        }

        for (int i = 0; i < 30; i++) {
            secreta[i] = '-';
        }

        system("cls");

        while (acerto < tamanho && lifes != 0) {
            std::cout << "Vidas Restantes: " << lifes << std::endl;
            std::cout << "Palavra Secreta: ";

            for (int i = 0; i < tamanho; i++) {
                std::cout << secreta[i];
            }

            std::cout << std::endl;
            std::cout << "Digite uma Letra: ";
            std::cin >> letra[0];

            bool letraCorreta = false;

            for (int i = 0; i < tamanho; i++) {
                if (palavra[i] == letra[0] && secreta[i] != letra[0]) {
                    secreta[i] = palavra[i];
                    letraCorreta = true;
                    acerto++;
                }
            }

            if (!letraCorreta) {
                lifes--;
            }

            if (acerto == tamanho) {
                break; // End the loop if the user guesses the whole word
            }

            system("cls");
        }

        if (acerto == tamanho) {
            std::cout << "\n\nParabens, voce acertou a palavra!\n\n";
            NaoJogarDenovo = true; // Break the loop
        } else {
            std::cout << "\n\nVoce perdeu! A palavra era: " << palavra << "\n\n";
            std::cout << "Quer Jogar Denovo? (sim ou nao) ";

            char Play[5];
            std::cin >>  Play;

            if (strcmp(Play, "sim") == 0 || strcmp(Play, "SIM") == 0 || strcmp(Play, "S") == 0 || strcmp(Play, "claro") == 0 || strcmp(Play, "Sim") == 0) {
                NaoJogarDenovo = false; // Break the loop
            } else if (strcmp(Play, "não") == 0 || strcmp(Play, "NAO") == 0 || strcmp(Play, "n") == 0 || strcmp(Play, "nao") == 0 || strcmp(Play, "Nao") == 0) {
                NaoJogarDenovo = true; // Break the loop
            }
            else
            {
                NaoJogarDenovo = true;
            }
        }
    } while (!NaoJogarDenovo); // End of the loop

    std::cout << std::endl;
    system("pause");
    return 0;
}

/*-------------------------------------------------------------------*/

int English() // ENGLISH LANGUAGE
{
    /* VARIABLES */

    bool NotPlayAgain = false;


    do { // Beginning of the loop

        srand(time(NULL));




        char word[30], letter[1], secret[30];
        int size, hit, lifes;


        // Generate a random number of lives between 4 and 11
        lifes = rand() % 8 + 4;

        size = 0;
        hit = 0;




        std::cout << "Enter the word: ";
        std::cin >> word;

        while (word[size] != '\0') {
            size++;
        }

        for (int i = 0; i < 30; i++) {
            secret[i] = '-';
        }

        system("cls");

        while (hit < size && lifes != 0) {
            std::cout << "Lifes Remaining: " << lifes << std::endl;
            std::cout << "Secret Word: ";

            for (int i = 0; i < size; i++) {
                std::cout << secret[i];
            }

            std::cout << std::endl;
            std::cout << "Enter a Letter: ";
            std::cin >> letter[0];

            bool CorrectLetter = false;

            for (int i = 0; i < size; i++) {
                if (word[i] == letter[0] && secret[i] != letter[0]) {
                    secret[i] = word[i];
                    CorrectLetter = true;
                    hit++;
                }
            }

            if (!CorrectLetter) {
                lifes--;
            }

            if (hit == size) {
                break; // Ends the loop if the user gets the whole word right
            }

            system("cls");
        }

        if (hit == size) {
            std::cout << "\n\nCongratulations, you got the word right!\n\n";
            NotPlayAgain = true; // Break the loop
        } else {
            std::cout << "\n\nYou lost! The word was: " << word << "\n\n";
            std::cout << "Play Again? (yes or not) ";

            char Play[5];
            std::cin >>  Play;

            if (strcmp(Play, "yes") == 0 || strcmp(Play, "YES") == 0 || strcmp(Play, "Y") == 0 || strcmp(Play, "yup") == 0 || strcmp(Play, "Yes") == 0) {

                main();
                return 0;
            } else if (strcmp(Play, "no") == 0 || strcmp(Play, "NO") == 0 || strcmp(Play, "n") == 0 || strcmp(Play, "No") == 0 || strcmp(Play, "No") == 0) {
                NotPlayAgain = true; // Break the loop
            }
            else
            {
                NotPlayAgain = true;

            }
        }

    } while (!NotPlayAgain); // End of the loop

    std::cout << std::endl;
    system("pause");


    return 0;
}





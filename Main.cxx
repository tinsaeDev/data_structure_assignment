






/*




Group Members


    - Helina Buzuneh
    - Mikiyas Wondmneh
    - Tamru Agalneh
    - Tesfa Shibesh
    - Tinsae Belay
    - Zwditu Tilahun

    Department - Software Engineering


*/




void insertion();
void deletion();
void searching();
void displaying();
void sorting();
void other_functions();
void occurence();
void main_menu();


#include <iostream>

using namespace std;


#include <cstdlib>
#include <fstream>
#include <cstring>
#include <conio.h>




#include "include\numberFormatCkecker.h"
#include "include\struct.h"
#include "include\idChecker.h"


#include "include/sort_two.h"
#include "include\insertion.h"
#include "include\sorting.h"
#include "include\misc.h"
#include "include\deleting.h"
#include "include\searching.h"
#include "include\occurence.h"




    void display_all_information(){




    if(START==NULL){

        system("cls");
        cout<<"No Data unable to display\n";
        cout<<"Press any key to continue\n";
        getch();
        displaying();

    }

    else{

        for(Player *I=START; I!=NULL; I=I->next){


        cout<<": Name   ------------------- "<<I->name <<endl;
        cout<<": Age    ------------------- "<<I->age <<endl;
        cout<<": Height ------------------- "<<I->height <<endl;
        cout<<": Weight ------------------- "<<I->weight <<endl;
        cout<<": Position------------------ "<<I->position <<endl;
        cout<<": T shirt number------------ "<<I->t_shirt_number <<endl;
        cout<<": Nationality--------------- "<<I->nationality <<endl;
        cout<<": Salary ------------------- "<<I->salaty <<endl;
        cout<<": ID ----------------------- "<<I->ID <<endl;

        cout<<"__________________________________________________\n\n";

        }


        cout<<"\n\n Press any key to go back\n";
        getch();
        displaying();

    }


}



    void write_all_information_to_file(){



    if(START==NULL){

        system("cls");
        cout<<"No Data unable to create file \n";
        cout<<"\n\nPress any key to continue\n";
        getch();
        other_functions();

    }


            system("md output");

            ofstream out_all;
            out_all.open("output\\All_players_info.txt");

        for(Player *I=START; I!=NULL; I=I->next){


            ofstream out;


            char filename[100] = "output\\";
            strcat(filename,I->ID);
            strcat(filename,".txt");




            out.open(filename);

            cout<<"Writing "<<I->name<<"to file\n";
            getch();

            out<<I->name<<endl;
            out_all<<" Player name: ---------------"<<I->name<<endl;

            out<<I->age<<endl;
            out_all<<" Player Age: ----------------"<<I->age<<endl;

            out<<I->weight<<endl;
            out_all<<" Player weight: -------------"<<I->weight<<endl;

            out<<I->height<<endl;
            out_all<<" Player Height: -------------"<<I->height<<endl;

            out<<I->position<<endl;
            out_all<<" Player Position: -----------"<<I->position<<endl;

            out<<I->t_shirt_number<<endl;
            out_all<<" Player T shirt number: -----"<<I->t_shirt_number<<endl;

            out<<I->nationality<<endl;
            out_all<<"Nationality : --------------"<<I->nationality<<endl;

            out<<I->salaty<<endl;
            out_all<<" Salary : -------------------"<<I->salaty<<endl;


            out.close();

            out_all<<"________________________________________________________\n";

        }

        out_all.close();


        system("cls");
        cout<<"Data is written under \"output\" folder\n";
        cout<<"\n\nPress any key to continue\n";
        getch();
        other_functions();


}


    void occurence(){


    system("cls");

    cout<<"Which type of attribute do you check?\n";


        cout<<"(N)ame\n";
        cout<<"2. Age\n";
        cout<<"3. Weight\n";
        cout<<"4. Height\n";
        cout<<"5. Position\n";
        cout<<"6. T Shirt number\n";
        cout<<"7. Nationality\n";
        cout<<"8. Salary\n";
        cout<<"\n\n9. Go Back\n";

            char choice[10];
            cin>>choice;

            switch(choice[0]){





            case 'N':{

            count_name_occurence();
            break;

            }



            case '2':{

            count_age_occurence();
            break;

            }



            case '3':{



            count_weight_occurence();
            break;

            }



            case '4':{



            count_height_occurence();
            break;

            }



            case '5':{


            count_position_occurence();
            break;

            }



            case '6':{



            count_tshirt_nu_occurence();
            break;

            }



            case '7':{



            count_nationality_occurence();
            break;
            }

            case '8':{

            count_salary_occurance();
            break;

            }

            case '9':{

            other_functions();
            break;

            }

            default: {


            system("cls");
            cout<<"Not valid input\n";
            cout<<"press any key to continue\n";
            getch();
            occurence();

            }


            }



            return;
    }


    void other_functions(){


    system("cls");

    choice_error:
    cout<<"1. Check number of occurrences\n";
    cout<<"2. Calculate average age of all players\n";
    cout<<"3. Calculate average salary of all players\n";
    cout<<"4. Get how many players are registered \n";
    cout<<"5. Get Top players\n";
    cout<<"6. Update \n";
    cout<<"7. Write all info to a file\n";
    cout<<"8. Display top players \n";
    cout<<"\n\n 9. Go Back\n";



        char choice[10];

        cin>>choice;

        switch( choice[0] ){


        case '1':{


        occurence();
        break;
        }

        case '2':{

        find_average_age_of_players();

        break;
        }

        case '3':{

        find_average_salary_of_players();
        break;
        }


        case '4':
            {


        system("cls");
        cout<<"Total number of registered players is: "<<get_number_of_registerd_palyers();
        cout<<"\n\nPress any key to go back\n";
        getch();
        other_functions();

        break;

        }

        case '5':{


       // topPLayers();
        break;

        }

        case '6':{


        update();
        break;
        }


        case '7':{


        write_all_information_to_file();
        break;

        }

        case '8':{

        display_top_players();
        break;
        }

        case '9':{


        main_menu();
        break;
        }


        default:{



        system("cls");
        cout<<"Invalid selection\n";
        cout<<"press any key to continue\n";
        getch();
        other_functions();


        }

        }




    }


    void insertion(){

        system("cls");

        char choice[10];
        cout<<"1. Insert at beginning From file\n";
        cout<<"2. Insert at end from keyboard\n";
        cout<<"3. Insert at middle from keyboard\n";
        cout<<"4. Go back\n";
        cin>>choice;

            switch(choice[0]){

            case '1':{

            system("cls");
            insert_at_beggining_from_file();
            break;

            }

            case '2':{

            system("cls");
            insert_at_end_from_keyboard();
            break;

            }

            case '3':{

            insert_at_middle_from_keyboard();
            break;
            }

            case '4':{


            main_menu();
            break;


            }


            default: {
            system("cls");
            cout<<"Invalid selection \n";
            getch();
            insertion();


            }
            }


}


    void deletion(){

    system("cls");

    input_error:

    cout<<"1.  Delete first element\n";
    cout<<"2.  Delete last element\n";
    cout<<"3.  Delete by Name\n";
    cout<<"4.  Delete by Age\n";
    cout<<"5.  Delete by Weight\n";
    cout<<"6.  Delete by Height\n";
    cout<<"7.  Delete by Position\n";
    cout<<"8.  Delete by T shirt number\n";
    cout<<"9.  Delete by Nationality\n";
    cout<<"A.  Delete by Salary\n";
    cout<<"B.  Delete by ID \n";
    cout<<"C.  Delete player with highest age \n";
    cout<<"D.  Delete player with smallest age \n";
    cout<<"E.  Delete player with row number\n";
    cout<<"F.  Go back\n";



    char choice[10];
    cin>>choice;

    switch( choice[0] ){



    case '1': {


    delete_the_firt_element();

    break;
    }


    case '2': {

    delete_the_last_element();

    break;
    }


    case '3': {

    delete_by_name();

    break;
    }


    case '4': {


    delete_by_age();

    break;
    }


    case '5': {


    delete_by_weight();

    break;
    }



    case '6': {


    delete_by_height();

    break;
    }


    case '7': {

    delete_by_position();

    break;
    }


    case '8': {


    delete_by_tshirt();

    break;
    }


    case '9': {


    delete_by_nationality();

    break;
    }



    case 'A': {

    delete_by_salary();

    break;
    }



    case 'B': {


    delete_by_ID();
    break;

    }



    case 'C': {

        delete_player_with_highest_age();

    break;
    }


    case 'D': {


        delete_player_with_small_age();

    break;
    }


    case 'E': {

    system("cls");

    if(START==NULL){

            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();
        }



    int rowNumb;
    char tempRowNumber[10];
    cout<<"Enter a row number \n";

    cin>>tempRowNumber;

    if( isInt(tempRowNumber) ){

        rowNumb = atof( tempRowNumber );

    }


    else{

        system("cls");
        cout<<"Invalid row number\n";
        cout<<"\n\npress any key to go back\n";
        getch();
        deletion();

    }


    delete_n(rowNumb);

    break;

    }



    case 'F':{

    main_menu();

    break;

    }



    default:{

        system("cls");
        cout<<"Invalid selection\n";
        getch();
        deletion();

    }


    }





}


    void searching(){

    system("cls");

    cout<<"1. Search by name \n";
    cout<<"2. Search by age \n";
    cout<<"3. Search weight \n";
    cout<<"4. Search height \n";
    cout<<"5. Search by position \n";
    cout<<"6. Search by nationality \n";
    cout<<"7. search by salary\n";
    cout<<"8. search by T Shirt number\n";
    cout<<"9. search by ID \n";

    cout<<"A. Find player with smallest salary \n";
    cout<<"B. Find player with highest salary \n";
    cout<<"\nC. go back\n";



            char choice[10];
            cin>>choice;

            switch(choice[0]){


            case '1': {

                search_by_name();

                break;}

            case '2': {

                search_by_age();
                break;}

            case '3': {

                search_by_weight();
                break;}

            case '4': {

                search_by_height();
                break;}

            case '5': {

                search_by_position();
                break;}

            case '6': {

                search_by_nationality();
                break;}

            case '7': {

                search_by_salary();
                break;}

            case '8': {


                search_by_t_shirt_number();
                break;}

            case '9': {

                //search_by_ID();
                break;}

            case 'A':{

            find_player_with_small_salary();

            break;
            }


            case 'B':{

            find_player_with_high_salary();

            break;
            }

            case 'C':{

            main_menu();


            break;
            }


            default: {

            system("cls");
            cout<<"Invalid selection\n";
            cout<<"press any key to continue\n";
            getch();
            searching();

            }

            }



}


    void sorting(){



    choice_error:
    system("cls");
    cout<<"Choose a sorting method\n\n";

    cout<<"1. Name\n";
    cout<<"2. Age \n";
    cout<<"3. Height\n";
    cout<<"4. Weight \n";
    cout<<"5. Salary\n";
    cout<<"6. T-Shirt number\n";
    cout<<"7. Position\n";
    cout<<"8. Nationality\n";
    cout<<"9. ID\n";
    cout<<"\n\nA Go Back\n";

    char choice[10];
    cin>>choice;

    switch( choice[0] ){


    case '1':{

    sort_by_name();
    break;
    }


    case '2':{

    sort_by_age();
    break;
    }


    case '3':{


    sort_by_height();
    break;
    }


    case '4':{


    sort_by_weight();
    break;
    }


    case '5':{

    sort_by_salary();
    break;
    }


    case '6':{

    sort_by_t_shirt_number();
    break;
    }


    case '7':{

    sort_by_position();
    break;
    }


    case '8':{

    sort_by_nationality();
    break;
    }


    case '9':{

    sort_by_ID();
    break;
    }


    case 'A':{


    main_menu();
    break;

    }


    default :{

    system("cls");
    cout<<"Invalid Selection\n";
    cout<<"Press any key to continue\n";
    getch();

    goto choice_error;

    }




    }



}


    void displaying(){


    system("cls");

    cout<<"1. Display all info\n";
    cout<<"4. to go back\n";




        char choice[10];
        cin>>choice;


            switch(  choice[0] ){


            case '1':{

            display_all_information();

            break;
            }


            case '4':{


            main_menu();

            break;
            }



            default:{

            system("cls");
            cout<<"Invalid selection\n";
            cout<<"Press any key to continue\n";
            getch();
            displaying();


            }


            }













    }

    void main_menu(){

        system("cls");

        char choice[10];
        cout<<"1. Insert \n";
        cout<<"2. Delete\n";
        cout<<"3. Search\n";
        cout<<"4. Sort\n";
        cout<<"5. Display\n";
        cout<<"6. Other\n";
        cout<<"7. Exit\n";

        cin>>choice;


                switch( choice[0] ){



                case '1':{

                system("cls");
                insertion();
                break;

                }

                case '2' :{

                system("cls");
                deletion();
                break;

                }

                case '3':{

               system("cls");
               searching();
               break;

                }

                case '4':{

                system("cls");
                sorting();
                break;

                }

                case '5':{

                system("cls");
                displaying();
                break;

                }

                case '6':{


                other_functions();
                break;

                }

                case '7':{


                exit(0);
                break;

                }


                default : {

                system("cls");
                cout<<"Invalid Input\n";
                main_menu();

                }

        }




    }



 int main(){


main_menu();

}

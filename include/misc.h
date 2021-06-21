

 // Misc Functions



     void find_average_age_of_players(){


        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";
                    getch();

                    other_functions();

        }


int number_of_players = 0;
float average_age = 0.0;
float total_age = 0.0;
                        for(Player *I=START; I!=NULL; I=I->next){

                            number_of_players++;
                            total_age = total_age + I->age;

                        }

       average_age = total_age /(float) number_of_players;


    system("cls");
    cout<<"Average age of players is: "<<average_age<<endl;
    cout<<"\n\n Press any key to go back\n";
    getch();
    other_functions();




}

     void find_average_salary_of_players(){



        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";
                    getch();

                    other_functions();

        }




int number_of_players = 0;
float average_salary = 0.0;
float total_salary = 0.0;


                        for(Player *I=START; I!=NULL; I=I->next){

                            number_of_players++;
                            total_salary = total_salary + I->salaty;

                        }


        system("cls");
        average_salary = total_salary /(float) number_of_players;
        cout<<"The average salary of players is: "<<average_salary<<endl;
        cout<<"\n\n Press any key to go back\n";
        getch();
        other_functions();




}

     int get_number_of_registerd_palyers(){


       if(START==NULL){


                    system("cls");
                    cout<<" No players are registered \n";
                    cout<<"press any key to continue\n";
                    getch();

                    other_functions();

        }




        int counter=0;


        for(Player *I=START; I!=NULL; I=I->next){



            counter++;


        }


        return counter;

}

     void update() {



    system("cls");


         if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make changes\n";
                    cout<<"press any key to continue\n";
                    getch();

                    other_functions();
     }




char tempData[50];
Player *player_to_update = NULL;
bool found = false;
char player_ID[20];

cout<<"ID of a player you want to update \n";
cin>>player_ID;

        for(Player *I=START; I!=NULL; I=I->next){


            if( strcmp(I->ID,player_ID ) == 0 ){

                    player_to_update = I;
                    found = true;

            }

            else{



                continue;

            }

        }


        if(found){


        system("cls");
        cout<<"You are now updating "<<player_to_update->name<<endl<<endl<<endl;

                    cout<<"Player name\n";
                    cin>>player_to_update->name;


                    PlayerAgeError:
                    cout<<"Player age\n";
                    cin>>tempData;

                    if(isInt(tempData)){

                        player_to_update->age = (int) atof(tempData);

                    }



                     else{

                            cout<<"Invalid Input \n";
                            goto PlayerAgeError;

                        }




                    PlayerHeightError:
                    cout<<"Player height\n";
                    cin>>tempData;

                    if(isFloat( tempData) ){

                        player_to_update->height = atof( tempData );

                    }

                    else{

                            cout<<"Invalid Input\n";
                            goto PlayerHeightError;

                        }






                    PlayerWeightError:
                    cout<<"Player weight\n";
                    cin>>tempData;


                    if( isFloat(tempData) ){

                    player_to_update->weight = atof( tempData );


                    }

                     else{
                            cout<<"Invalid Input\n";
                            goto PlayerWeightError;

                            }






                    cout<<"Player position\n";
                    cin>>player_to_update->position;




                    t_shirt_Error:
                    cout<<"Player T-shirt number\n";
                    cin>>tempData;

                    if( isInt(tempData) ){

                    player_to_update->t_shirt_number = (int) atof( tempData );


                    }




                    else {

                        cout<<"Invalid Input\n";
                        goto t_shirt_Error;

                                }








                    cout<<"Player nationality\n";
                    cin>>player_to_update->nationality;


                    PlayerSalaryError:
                    cout<<"Player Salary\n";
                    cin>>tempData;



                    if( isFloat(tempData) ){

                        player_to_update->salaty = atof(tempData);


                    }

                     else{

                           cout<<"Invalid Input\n";
                           goto PlayerSalaryError;

                            }

                    id_error:
                    cout<<"Player ID\n";
                    cin>>tempData;

                            if( isIDrepeated(tempData) && strcmp(player_to_update->ID,tempData)!=0 ){


                                cout<<"error! ID already used. \n";
                                goto id_error;

                            }

                            else{


                             strcpy(player_to_update->ID,tempData);


                            }





        system("cls");
        cout<<"Update finished\n";
        cout<<"press any key to continue\n";
        getch();
        other_functions();


        }



        else{ //if  player not found with given ID


            choice_error:
            cout<<"No player with that ID!\n\n";
            cout<<"Enter 1 to retry \n";
            cout<<"Enter 2 to exit updater\n";

            char choice[10];
            cin>>choice;

            switch( choice[0]  ){

            case '1': {

                update();


                break; }


            case '2': {

                other_functions();
                break; }


            default :{


            system("cls");
            cout<<"Invalid selection\n";
            cout<<"Press any key to continue\n";
            getch();
            goto choice_error;


            }






            }


        }


    }










 void display_top_players(){

 system("cls");



         if(START==NULL){


            system("cls");
            cout<<"No Data, cannot make analysis\n";
            cout<<"press any key to continue\n";
            getch();
            other_functions();

     }





 int topSize;
 char tempTopSize[10];



  cout<<"1. Display top players by name\n";
  cout<<"2. Display top players by age\n";
  cout<<"3. Display top players by ID\n";
  cout<<"4. Display top players by height\n";
  cout<<"5. Display top players by weight\n";
  cout<<"6. Display top players by position\n";
  cout<<"7. Display top players by t shirt number\n";
  cout<<"8. Display top players by salary\n";
  cout<<"9. Display top players by nationality\n";

    char choice[10];
    cin>>choice;

            switch( choice[0] ){




            case '1' :{

            sort_2_by_name();
            break;
            }

            case '2' :{

            sort_2_by_age();
            break;

            }

            case '3' :{
            sort_2_by_ID();
            break;
            }



            case '4' :{
            sort_2_by_height();
            break;

            }

            case '5' :{

            sort_2_by_weight();
            break;

            }

            case '6' :{

            sort_2_by_position();
            break;

            }

            case '7' :{

            sort_2_by_t_shirt_number();
            break;
            }

            case '8' :{

            sort_2_by_salary();
            break;
            }


            case '9' :{

            sort_2_by_nationality();

            break;
            }

            case 'A' :{

            other_functions();
            break;
            }

            default :{

            cout<<"Invalid selection \n";
            cout<<"\n\nPress any key to go back\n";
            getch();
            other_functions();


            }


            }






system("cls");
 cout<<"How many players to display Top\n";
 cin>>tempTopSize;



    if( isInt(tempTopSize) ){

        topSize = atof( tempTopSize );


        if( get_number_of_registerd_palyers() < topSize ){

                            system("cls");
                            cout<<"Out of range !\n";
                            cout<<"\n\npress any key to go back\n";
                            getch();
                            display_top_players();

        }



    }

    else{

       system("cls");
       cout<<"Invalid input\n";
       cout<<"\n\npress any key to go back\n";
       getch();

       display_top_players();


    }



            int limit = 0;



            for(Player *I=START; I!=NULL; I=I->next){

            limit++;

            cout<<"Name ------------- :"<<I->name<<endl;
            cout<<"ID --------------- :"<<I->ID<<endl;
            cout<<"Age --------------- :"<<I->age<<endl;
            cout<<"Height --------------- :"<<I->height<<endl;
            cout<<"Weight --------------- :"<<I->weight<<endl;
            cout<<"Salary --------------- :"<<I->salaty<<endl;
            cout<<"Nationality --------------- :"<<I->nationality<<endl;
            cout<<"T shirt --------------- :"<<I->t_shirt_number<<endl;
            cout<<"T position --------------- :"<<I->position<<endl;



            cout<<"\n_________________________________\n";

            if(limit==topSize){

                break;

            }



            }


        cout<<"Press any key to go back\n";
        getch();
        other_functions();



 }




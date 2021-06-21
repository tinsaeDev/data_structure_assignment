

  // a header file for functions that count number of occurrence



    void count_name_occurence(){



        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";
                    getch();

                    occurence();


        }



        system("cls");

            int counter=0;
            char name_input[50];
            cout<<"What name do you want to check?\n\n\n";
            cin>>name_input;

                    for(Player *I = START; I!=NULL ; I=I->next){

                        if( strcmp( name_input,I->name ) == 0 ){


                            counter++;

                        }


                    }


                    if(counter <=0 ){


                        cout<<name_input<<" Never used \n";


                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();
                    }

                    else{


                        cout<<name_input<<" repeated "<<counter<<" times\n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }

    }


    void count_age_occurence(){



                   if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";
                    getch();

                    occurence();


                }




       if(START==NULL){


           system("cls");
           cout<<"No Data, cannot make analysis\n";
           cout<<"press any key to continue\n";
           getch();

           occurence();


              }


    system("cls");


            int counter=0;
            int age_input;

            char tempAge[10];


            age_input_error:
            cout<<"which age do you want to check?\n\n\n";
            cin>>tempAge;

            if( isInt(tempAge) ){

                age_input = atof( tempAge );


            }

            else{

             system("cls");
             cout<<"Invalid input\n";
             cout<<"press any key to continue\n";
             getch();
             goto age_input_error;


            }

                    for(Player *I = START; I!=NULL ; I=I->next){

                        if( age_input == I->age ){


                            counter++;

                        }


                    }


                    if(counter <=0 ){


                        cout<<age_input<<" Never used \n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }

                    else{


                        cout<<age_input<<" repeated "<<counter<<" times\n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }


    }


    void count_height_occurence(){


                    if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";
                    getch();

                    occurence();


                }





    system("cls");


            int counter=0;
            float height_input;
            char tempHeight[10];

            height_input_error:
            cout<<"which Height do you want to check?\n\n\n";
            cin>>tempHeight;


        if( isFloat(tempHeight) ){

            height_input = atof( tempHeight );

        }


            else{

             system("cls");
             cout<<"Invalid input\n";
             cout<<"press any key to continue\n";
             getch();
             goto height_input_error;


            }


                    for(Player *I = START; I!=NULL ; I=I->next){

                        if( height_input== I->height ){


                            counter++;

                        }


                    }


                    if(counter <=0 ){


                        cout<<height_input<<" Never used \n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }

                    else{


                        cout<<height_input<<" repeated "<<counter<<" times\n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }


    }


    void count_weight_occurence(){


                    if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";
                    getch();

                    occurence();


                }


    system("cls");

            int counter=0;
            float weight_input;
            char tempWeight[10];

            weight_input_error:
            cout<<"which weight do you want to check?\n\n\n";
            cin>>tempWeight;



    if( isFloat(tempWeight) ){

        weight_input = atof(tempWeight);

    }

    else{

    system("cls");
    cout<<"Invalid input\n";
    cout<<"press any key to continue\n";
    getch();
    goto weight_input_error;

            }


                    for(Player *I = START; I!=NULL ; I=I->next){

                        if( weight_input == I->weight){


                            counter++;

                        }


                    }


                    if(counter <=0 ){


                        cout<<weight_input<<" Never used \n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }

                    else{


                        cout<<weight_input<<" repeated "<<counter<<" times\n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }



    }


    void count_position_occurence(){




                    if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";
                    getch();

                    occurence();


                }



        system("cls");

            int counter=0;

            char position_input[50];
            cout<<"What position do you want to check?\n\n\n";
            cin>>position_input;

                    for(Player *I = START; I!=NULL ; I=I->next){

                        if( strcmp( position_input,I->position ) == 0 ){


                            counter++;

                        }


                    }


                    if(counter <=0 ){


                        cout<<position_input<<" Never used \n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }

                    else{


                        cout<<position_input<<" repeated "<<counter<<" times\n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }





    }


    void count_tshirt_nu_occurence(){




                  if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";
                    getch();

                    occurence();


                }


    system("cls");

            int counter=0;
            int t_shirt_input;
            char tempTshirt[10];

            t_shirt_input_error:
            cout<<"which t shirt number do you want to check?\n\n\n";
            cin>>tempTshirt;



            if( isInt(tempTshirt) ){

                t_shirt_input = atof(tempTshirt);


            }


            else{

             system("cls");
             cout<<"Invalid input\n";
             cout<<"press any key to continue\n";
             getch();
             goto t_shirt_input_error;

            }



                    for(Player *I = START; I!=NULL ; I=I->next){

                        if( t_shirt_input == I->t_shirt_number){


                            counter++;

                        }


                    }


                    if(counter <=0 ){


                        cout<<t_shirt_input<<" Never used \n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }

                    else{


                        cout<<t_shirt_input<<" repeated "<<counter<<" times\n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }



    }


    void count_nationality_occurence(){





                   if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";
                    getch();

                    occurence();


                }






    system("cls");

            int counter=0;
            char nationality_input[50];
            cout<<"What nationality do you want to check?\n\n\n";
            cin>>nationality_input;

                    for(Player *I = START; I!=NULL ; I=I->next){

                        if( strcmp( nationality_input,I->nationality) == 0 ){


                            counter++;

                        }


                    }


                    if(counter <=0 ){


                        cout<<nationality_input<<" Never used \n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }

                    else{


                        cout<<nationality_input<<" repeated "<<counter<<" times\n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }


    }


    void count_salary_occurance(){




                  if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";
                    getch();

                    occurence();


                }





        system("cls");

            int counter=0;
            float salary_input;
            char tempSalary[10];

            salary_input_error:
            cout<<"which salary do you want to check?\n\n\n";
            cin>>tempSalary;



    if(isFloat(tempSalary)){


        salary_input = atof(tempSalary);
    }

      else{

        system("cls");
        cout<<"Invalid input\n";
        cout<<"press any key to continue\n";
        getch();
        goto salary_input_error;


         }





                    for(Player *I = START; I!=NULL ; I=I->next){

                        if( salary_input == I->salaty){


                            counter++;

                        }


                    }


                    if(counter <=0 ){


                        cout<<salary_input<<" Never used \n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }

                    else{


                        cout<<salary_input<<" repeated "<<counter<<" times\n";
                        cout<<"\n\nPress any key to go back";
                        getch();
                        occurence();

                    }





    }

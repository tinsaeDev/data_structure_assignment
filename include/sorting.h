


    void data_sorted_notification(){

                system("cls");
                cout<<"Data Sorted\n";
                cout<<"Press any key to go back\n";
                getch();
                sorting();


           }

    void swap_players(Player *I,Player *J){

            Player *C = new Player();

                    strcpy( C->name,  I->name );
                    strcpy( C->ID,  I->ID );
                    strcpy( C->nationality,  I->nationality );
                    strcpy( C->position,  I->position );
                   C->age    = I->age;
                   C->weight = I->weight;
                   C->height = I->height;
                   C->salaty = I->salaty;
                   C->t_shirt_number = I->t_shirt_number;

// Replacing
                    strcpy( I->name,  J->name );
                    strcpy( I->ID,  J->ID );
                    strcpy( I->nationality,  J->nationality );
                    strcpy( I->position,  J->position );
                   I->age    = J->age;
                   I->weight = J->weight;
                   I->height = J->height;
                   I->salaty = J->salaty;
                   I->t_shirt_number = J->t_shirt_number;

//Replacing
                    strcpy( J->name,  C->name );
                    strcpy( J->ID,  C->ID );
                    strcpy( J->nationality,  C->nationality );
                    strcpy( J->position,  C->position );
                   J->age    = C->age;
                   J->weight = C->weight;
                   J->height = C->height;
                   J->salaty = C->salaty;
                   J->t_shirt_number = C->t_shirt_number;



        }



  void sort_by_name(){


        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";


                    occurence();


        }



            Player *temp = new Player();

                for( Player *I=START; I!=NULL ; I=I->next ){

                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  strcmp( I->name,J->name ) == 1  ){


                            swap_players(I,J);


                        }


                    }


                }

            data_sorted_notification();


            }


            void sort_by_age(){

        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";


                    occurence();


        }



                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  I->age > J->age ){


                            swap_players(I,J);


                        }


                    }


                }

                data_sorted_notification();

            }


            void sort_by_height(){


        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";


                    occurence();


        }



                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  I->height > J->height ){


                            swap_players(I,J);


                        }


                    }


                }

                data_sorted_notification();

            }


            void sort_by_weight(){

        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";


                    occurence();


        }



                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){



                        if(  I->weight > J->weight ){


                           swap_players(I,J);


                        }


                    }


                }

                data_sorted_notification();

            }


            void sort_by_salary(){

        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";


                    occurence();


        }



                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  I->salaty > J->salaty ){


                            swap_players(I,J);


                        }


                    }


                }

                data_sorted_notification();


            }


            void sort_by_t_shirt_number(){


        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";


                    occurence();


        }


                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  I->t_shirt_number > J->t_shirt_number ){


                            swap_players(I,J);


                        }


                    }


                }

                data_sorted_notification();


            }


            void sort_by_ID(){



        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";


                    occurence();


        }



                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){



                        if(  strcmp( I->ID, J->ID ) == 1  ){


                            swap_players(I,J);


                        }


                    }


                }

                data_sorted_notification();


            }


            void sort_by_position(){



        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";


                    occurence();


        }


                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){




                        if(  strcmp( I->position, J->position ) == 1  ){


                            swap_players(I,J);


                        }


                    }


                }

            data_sorted_notification();


            }


           void sort_by_nationality(){


        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot make analysis\n";
                    cout<<"press any key to continue\n";


                    occurence();


        }


                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  strcmp( I->nationality, J->nationality ) == 1  ){


                            swap_players(I,J);


                        }


                    }


                }


                data_sorted_notification();

            }

  
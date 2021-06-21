

    void swap_2_players(Player *I,Player *J){

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



            void sort_2_by_name(){



                Player *temp = new Player();
                int c=0;

                for( Player *I=START; I!=NULL ; I=I->next ){

                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  strcmp( I->name,J->name ) == 1  ){


                            swap_2_players(I,J);


                        }


                    }


                }




            }


            void sort_2_by_age(){



                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  I->age > J->age ){


                            swap_2_players(I,J);


                        }


                    }


                }



            }


            void sort_2_by_height(){



                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  I->height > J->height ){


                            swap_2_players(I,J);


                        }


                    }


                }



            }


            void sort_2_by_weight(){



                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){



                        if(  I->weight > J->weight ){


                           swap_2_players(I,J);


                        }


                    }


                }



            }


            void sort_2_by_salary(){

                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  I->salaty > J->salaty ){


                            swap_2_players(I,J);


                        }


                    }


                }




            }


            void sort_2_by_t_shirt_number(){


                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  I->t_shirt_number > J->t_shirt_number ){


                            swap_2_players(I,J);


                        }


                    }


                }




            }


            void sort_2_by_ID(){


                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){



                        if(  strcmp( I->ID, J->ID ) == 1  ){


                            swap_2_players(I,J);


                        }


                    }


                }




            }


            void sort_2_by_position(){

                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){




                        if(  strcmp( I->position, J->position ) == 1  ){


                            swap_2_players(I,J);


                        }


                    }


                }




            }


           void sort_2_by_nationality(){

                for( Player *I=START; I!=NULL; I=I->next ){


                    for(Player *J=I->next; J!=NULL; J=J->next){


                        if(  strcmp( I->nationality, J->nationality ) == 1  ){


                            swap_2_players(I,J);


                        }


                    }


                }




            }


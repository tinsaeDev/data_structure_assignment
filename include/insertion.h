// insertion functions header file


// InsNode == READER



void insert_at_beggining_from_file(){ // insert a node to a beginning of linked list from plain text file

READER = new Player();


            char fileName[50];
            cout<<"Enter a name of a file (including extension ) containing the data of a player\n";
            cin>>fileName;

            ifstream in; // used to open file for reading purpose only


            in.open(fileName); // try to open the specified file

                    if( in.fail()  ){ // if file could not be opened.

                        char Choice[10];  // user may enter many characters at once

                        cout<<"Error! no File found with that name in this folder\n\n";
                        cout<<"1. Retry\n";
                        cout<<"2. Go back\n";
                        cin>>Choice;

                                if( Choice[0]=='1' ){

                                    system("cls");
                                    insert_at_beggining_from_file();
// '1' 1
                                }

                                else if( Choice[0]=='2' ){

                                    system("cls");
                                    insertion();

                                }

                                else {

                                    cout<<"Invalid selection\n";
                                    insertion();
                                }

                    }




                    else{ // file opening successful


                        char tmpData[9][50];

                        for(int i=0;i<9;i++){ // reading from file


                            in>>tmpData[i]; // reading file line by line

                        }

                        in.close(); // close the opened file








                    ///////////////////////////////

                        strcpy (READER->name , tmpData[0] ); // reading name




                    /////////////////////////////

                       if( isInt( tmpData[1] ) ){ // reading age by verifying the input does not contain any illegal character

                        READER->age  = atof( tmpData[1] );


                       } else {


                        cout<<"Failure while reading data. error at line 2\n";
                        cout<<"Press any key to go back\n";
                        getch();

                        system("cls");
                        insertion();

                         }



                    ////////////////////////////////////////


                       if( isFloat( tmpData[2] ) ){ // reading Height


                       READER->height = atof( tmpData[2] );

                       }else {

                        cout<<"Failure while reading data. error at line 3\n";
                        cout<<"Press any key to go back\n";
                        getch();
                        system("cls");


                       }



                    ////////////////////////////////////////////


                       if( isFloat(tmpData[3]) ){ // reading weight

                            READER->weight = atof( tmpData[3] );


                       }else {


                        cout<<"Failure while reading data. error at line 4\n";
                        cout<<"Press any key to go back\n";

                        getch();
                        system("cls");
                        insertion();

                       }


                    ///////////////////////////////////

                        strcpy( READER->position , tmpData[4] ); // reading position


                    //////////////////////////////////////

                        if( isInt(tmpData[5]) ){ // reading T shirt number


                        READER->t_shirt_number = (int) atof( tmpData[5] );

                               }else {

                        cout<<"Failure while reading data. error at line 6\n";
                        cout<<"Press any key to go back\n";

                        getch();

                        system("cls");
                        insertion();



                                    }


                    ////////////////////////////////

                        strcpy( READER->nationality ,tmpData[6] ); // reading nationality


                        if(  isFloat(tmpData[7]) ){


                        READER->salaty = atof( tmpData[7] );


                        }else {

                        cout<<"Failure while reading data. error at line 8\n";
                        cout<<"Press any key to go back\n";

                        getch();

                        system("cls");
                        insertion();

                       }


                    ////////////////////////////


                        if( isIDrepeated(tmpData[8])  ){

                            cout<<"Error while reading file. ID repeated\n";
                            cout<<"Press any key to continue\n";
                            getch();
                            insertion();



                        }else{


                        strcpy(READER->ID,tmpData[8]); // reading ID

                        }




/// ************************** fILE READI




                                        // The following code adds the node to start of linked list

                                                    if( START ==  NULL ){ // if no nodes are there in the linked list


                                                        START = READER; // set the new node as start
                                                        END =START; // also set the new node as end


                                                    }


                                                    else if( START !=NULL ){ // if linked list at least already has start node || if there is start node there must be an end node

                                                        READER->next = START; // the new node points to the last START node
                                                        START = READER; // node START starts to point to the new node rather the old

                                                    }


                                                    else{ // Unexpected error occurred

                                                        cout<<"INTERNAL ERROR (Logic Error )\n";

                                                    }



                    }

            system("cls");
            cout<<"All data inserted from file without error.\n";
            cout<<"Press any key to continue\n";
            getch();
            insertion();
}



void insert_at_end_from_keyboard(){ // insert a new Player to the end of linked list

READER =  new Player();
char tempData[100];

                    cout<<"Player name\n";
                    cin>>READER->name;


                    PlayerAgeError:
                    cout<<"Player age\n";
                    cin>>tempData;

                    if(isInt(tempData)){

                        READER->age = (int) atof(tempData);

                    }



                     else{

                            cout<<"Invalid Input \n";
                            goto PlayerAgeError;

                        }




                    PlayerHeightError:
                    cout<<"Player height\n";
                    cin>>tempData;

                    if(isFloat( tempData) ){

                        READER->height = atof( tempData );

                    }

                    else{

                            cout<<"Invalid Input\n";
                            goto PlayerHeightError;

                        }






                    PlayerWeightError:
                    cout<<"Player weight\n";
                    cin>>tempData;


                    if( isFloat(tempData) ){

                    READER->weight = atof( tempData );


                    }

                     else{
                            cout<<"Invalid Input\n";
                            goto PlayerWeightError;

                            }






                    cout<<"Player position\n";
                    cin>>READER->position;




                    t_shirt_Error:
                    cout<<"Player T-shirt number\n";
                    cin>>tempData;

                    if( isInt(tempData) ){

                    READER->t_shirt_number = (int) atof( tempData );


                    }




                    else {

                        cout<<"Invalid Input\n";
                        goto t_shirt_Error;

                                }








                    cout<<"Player nationality\n";
                    cin>>READER->nationality;


                    PlayerSalaryError:
                    cout<<"Player Salary\n";
                    cin>>tempData;



                    if( isFloat(tempData) ){

                        READER->salaty = atof(tempData);


                    }

                     else{

                           cout<<"Invalid Input\n";
                           goto PlayerSalaryError;

                            }

                    id_error:
                    cout<<"Player ID\n";
                    cin>>tempData;

                            if( isIDrepeated(tempData)  ){


                                cout<<"error! ID already used. \n";
                                goto id_error;

                            }

                            else{


                             strcpy(READER->ID,tempData);


                            }



                                // all Data is read to the new node

                                            if( START == NULL ){ // if the linked list has no nodes

                                                START = READER;
                                                END = START;

                                            }

                                            else if(START != NULL){ // if linked list contains at least one node


                                                END->next = READER; // if this is for first time it also set START->next = READER , bcs of START and end points to same memory
                                                END = END->next;

                                            }

                                            else{ // if unexpected thing occur


                                                cout<<"Internal ERROR. Logic Error \n";


                                            }


system("cls");
cout<<"All data is been read\n";
cout<<"Press any key to continue\n";
getch();

insertion();                                           // done Adding at end of the linked list

}



void insert_at_middle_from_keyboard(){ // insert a new Player to the end of linked list

        system("cls");



        if(START==NULL){


                    system("cls");
                    cout<<"No Data, cannot insert at middle\n";
                    cout<<"press any key to continue\n";
                    getch();

                    insertion();


        }


        bool found = false;
        Player *selectedPlayer = START;


        char ID_to_insert_before[20];
        cout<<"Enter ID of a player you wanted to insert new Player before\n";
        cin>>ID_to_insert_before;



        for(Player *I=START; I!=NULL; I=I->next){

            if( strcmp(I->ID,ID_to_insert_before) == 0 ){

                found = true;
                break;

            }

        }



        if(!found){


            system("cls");
            cout<<"Player not found with given ID\n";

            cout<<"\n\nPress any key to continue\n";
            getch();
            insertion();
        }


        else{

                    system("cls");

                    cout<<"Enter data for the new player\n\n";


                    READER =  new Player();
                    char tempData[100];

                    cout<<"Player name\n";
                    cin>>READER->name;


                    PlayerAgeError:
                    cout<<"Player age\n";
                    cin>>tempData;

                    if(isInt(tempData)){

                        READER->age = (int) atof(tempData);

                    }



                     else{

                            cout<<"Invalid Input \n";
                            goto PlayerAgeError;

                        }




                    PlayerHeightError:
                    cout<<"Player height\n";
                    cin>>tempData;

                    if(isFloat( tempData) ){

                        READER->height = atof( tempData );

                    }

                    else{

                            cout<<"Invalid Input\n";
                            goto PlayerHeightError;

                        }






                    PlayerWeightError:
                    cout<<"Player weight\n";
                    cin>>tempData;


                    if( isFloat(tempData) ){

                    READER->weight = atof( tempData );


                    }

                     else{
                            cout<<"Invalid Input\n";
                            goto PlayerWeightError;

                            }






                    cout<<"Player position\n";
                    cin>>READER->position;




                    t_shirt_Error:
                    cout<<"Player T-shirt number\n";
                    cin>>tempData;

                    if( isInt(tempData) ){

                    READER->t_shirt_number = (int) atof( tempData );


                    }




                    else {

                        cout<<"Invalid Input\n";
                        goto t_shirt_Error;

                                }








                    cout<<"Player nationality\n";
                    cin>>READER->nationality;


                    PlayerSalaryError:
                    cout<<"Player Salary\n";
                    cin>>tempData;



                    if( isFloat(tempData) ){

                        READER->salaty = atof(tempData);


                    }

                     else{

                           cout<<"Invalid Input\n";
                           goto PlayerSalaryError;

                            }

                    id_error:
                    cout<<"Player ID\n";
                    cin>>tempData;

                            if( isIDrepeated(tempData)  ){


                                cout<<"error! ID already used. \n";
                                goto id_error;

                            }

                            else{


                             strcpy(READER->ID,tempData);


                            }



                    // inserting at middle






        Player *pre = new Player();
        pre->next = START;

        for(Player *I=START; I!=NULL; I=I->next){



            if( strcmp(I->ID,ID_to_insert_before) == 0 ){


                if(I==START){


                  READER->next= START;
                  START = READER;
                  break;

                }

                else{

                pre->next = READER;
                READER->next = I;
                break;

                }



            }


            pre = pre->next;

        }

    system("cls");
    cout<<"Inserted \n";
    cout<<"Press any key to continue\n";
    getch();
    insertion();



}





}




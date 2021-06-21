



 /// A header file for searching functions




    void find_player_with_small_salary(){




       if(START==NULL){


        system("cls");
        cout<<"No data. cannot search\n";
        cout<<"\npress any key to continue\n";
        getch();
        searching();


       }

       else{



            Player *Player_with_small_salary;

                    Player_with_small_salary = START;

                    for( Player *I = START;  I!=NULL ; I=I->next){

                        if(  I->salaty < Player_with_small_salary->salaty ){

                            Player_with_small_salary = I;
                        }


                    }

system("cls");

cout<<"Player with smallest salary:\n\n";
cout<<"Player name:"<<Player_with_small_salary->name<<endl;
cout<<"Salary: "<<Player_with_small_salary->salaty<<endl;

cout<<"\n\n Press any key to continue\n";
getch();
searching();


   }

}

    void find_player_with_high_salary(){


      if(START==NULL){


        system("cls");
        cout<<"No data. cannot search\n";
        cout<<"\npress any key to continue\n";
        getch();
        searching();


       }



else{


    Player *Player_with_high_salary = new Player();

            Player_with_high_salary = START;

                    for( Player *I = START;  I!=NULL ; I=I->next){

                        if(  I->salaty > Player_with_high_salary->salaty ){

                            Player_with_high_salary = I;
                        }


                    }
system("cls");

cout<<"Player with highest salary:\n\n";
cout<<"Player name:"<<Player_with_high_salary->name<<endl;
cout<<"Salary: "<<Player_with_high_salary->salaty<<endl;

cout<<"\n\n Press any key to continue\n";
getch();
searching();

            }

}

    void search_by_height(){


    system("cls");


    if(START==NULL){


       cout<<"No data! cannot search \n";
       cout<<"\n\npress any key to continue\n ";

       getch();
       searching();


    }




struct Player foundPlayers[1000];
int top = -1;
int stackSize = 0;


int found = -1;


float key;
char tempKey[10];


input_error:
cout<<"Enter your search key\n";
cin>>tempKey;



if( isFloat(tempKey) ){

    key = atof( tempKey );


}


else{

    system("cls");

    cout<<"Invalid key, press any key to continue\n";
    getch();
    system("cls");
    goto input_error;



}

            for(Player *I = START ; I!=NULL; I=I->next){ // finding matching players

                    if( I->height==key ) {


                            top++;
                            stackSize++;
                            foundPlayers[top] = *I;


                       }

            }


            cout<<stackSize<<" items matched your search\n";

        if(stackSize > 0){

            for(int i=0; i<stackSize; i++){


                cout<<"Name :----------------------------- "<<foundPlayers[i].name<<endl;
                cout<<"Height:---------------------------- "<<foundPlayers[i].height<<endl;
                cout<<"ID:-------------------------------- "<<foundPlayers[i].ID<<endl;
                cout<<"____________________________________________\n\n";

            }


        cout<<"\n\n Press any key to continue\n";
        getch();
        searching();





    }

        else {


        system("cls");
        cout<<"No matching item found\n";
        cout<<"\n\nPress any key to continue\n";
        getch();
        searching();



        }

}

    void search_by_weight(){

    system("cls");


    if(START==NULL){


       cout<<"No data! cannot search \n";
       cout<<"\n\npress any key to continue\n ";

       getch();
       searching();


    }




struct Player foundPlayers[1000];
int top = -1;
int stackSize = 0;


int found = -1;

float key;
char tempKey[10];


input_error:
cout<<"Enter your search key\n";
cin>>tempKey;



if( isFloat(tempKey) ){

    key = atof( tempKey );


}


else{

    system("cls");

    cout<<"Invalid key, press any key to continue\n";
    getch();
    system("cls");
    goto input_error;



}



            for(Player *I = START ; I!=NULL; I=I->next){

                    if( I->weight==key ) {


                            top++;
                            stackSize++;
                            foundPlayers[top] = *I;


                       }

            }


            cout<<stackSize<<" items matched your search\n";



        if(stackSize > 0 ){

            for(int i=0; i<stackSize; i++){


                cout<<"Name  :---------------------------- "<<foundPlayers[i].name<<endl;
                cout<<"Weight:---------------------------- "<<foundPlayers[i].weight<<endl;
                cout<<"ID:-------------------------------- "<<foundPlayers[i].ID<<endl;
                cout<<"____________________________________________\n\n";

            }


                cout<<"\n\n Press any key to continue\n";
                getch();
                searching();


        }

        else {


        system("cls");
        cout<<"No matching item found\n";
        cout<<"\n\nPress any key to continue\n";
        getch();
        searching();




        }




}

    void search_by_age(){


    system("cls");


    if(START==NULL){


       cout<<"No data! cannot search \n";
       cout<<"\n\npress any key to continue\n ";

       getch();
       searching();


    }




struct Player foundPlayers[1000];
int top = -1;
int stackSize = 0;


int found = -1;

int key;
char tempKey[10];


input_error:
cout<<"Enter your search key\n";
cin>>tempKey;



if( isInt(tempKey) ){

    key = atof( tempKey );


}


else{

    system("cls");

    cout<<"Invalid key, press any key to continue\n";
    getch();
    system("cls");
    goto input_error;



}


            for(Player *I = START ; I!=NULL; I=I->next){

                    if( I->age==key ) {


                            top++;
                            stackSize++;
                            foundPlayers[top] = *I;


                       }

            }


            cout<<stackSize<<" items matched your search\n\n\n";


        if(stackSize > 0){


            for(int i=0; i<stackSize; i++){


                cout<<"Name :----------------------- "<<foundPlayers[i].name<<endl;
                cout<<"Age :------------------------ "<<foundPlayers[i].age<<endl;
                cout<<"ID:-------------------------- "<<foundPlayers[i].ID<<endl;
                cout<<"____________________________________________________\n\n";

            }


                cout<<"\n\n Press any key to continue\n";
                getch();
                searching();



            }



    else{


        system("cls");
        cout<<"No matching item found\n";
        cout<<"\n\nPress any key to continue\n";
        getch();
        searching();


    }



}

    void search_by_t_shirt_number(){



    system("cls");


    if(START==NULL){


       cout<<"No data! cannot search \n";
       cout<<"\n\npress any key to continue\n ";

       getch();
       searching();


    }



struct Player foundPlayers[1000];
int top = -1;
int stackSize = 0;


int found = -1;
int key;
char tempKey[10];


input_error:
cout<<"Enter your search key\n";
cin>>tempKey;



if( isInt(tempKey) ){

    key = atof( tempKey );


}


else{

    system("cls");

    cout<<"Invalid key, press any key to continue\n";
    getch();
    system("cls");
    goto input_error;



}



            for(Player *I = START ; I!=NULL; I=I->next){

                    if( I->t_shirt_number==key ) {


                            top++;
                            stackSize++;
                            foundPlayers[top] = *I;


                       }

            }


            cout<<stackSize<<" items matched your search\n";

            if(stackSize > 0) {


            for(int i=0; i<stackSize; i++){


                cout<<"Name : ---------------------------- "<<foundPlayers[i].name<<endl;
                cout<<"T shirt number:-------------------- "<<foundPlayers[i].t_shirt_number<<endl;
                cout<<"ID:-------------------------------- "<<foundPlayers[i].ID<<endl;
                cout<<"____________________________________________________\n\n";

            }


                cout<<"\n\n Press any key to continue\n";
                getch();
                searching();


                    }



    else{


        system("cls");
        cout<<"No matching item found\n";
        cout<<"\n\nPress any key to continue\n";
        getch();
        searching();


    }



}

    void search_by_name(){



    system("cls");


    if(START==NULL){


       cout<<"No data! cannot search \n";
       cout<<"\n\npress any key to continue\n ";

       getch();
       searching();


    }




        struct Player foundPlayers[1000];
        int top = -1;
        int stackSize = 0;


        int found = -1;

        char key[100];

        cout<<"Enter your search key\n";
        cin>>key;


            for(Player *I = START; I!=NULL; I=I->next){

                    if( strcmp(I->name,key) == 0 ) {


                            top++;
                            stackSize++;
                            foundPlayers[top] = *I;


                       }

            }




    if(stackSize>0){
            cout<<stackSize<<" items matched your search \n\n\n";


            for(int i=0; i<stackSize; i++){


                cout<<"Name :---------------------------- "<<foundPlayers[i].name<<endl;
                cout<<"ID:------------------------------- "<<foundPlayers[i].t_shirt_number<<endl;


                cout<<"______________________________________\n";



            }

                cout<<"\n\n Press any key to continue\n";
                getch();
                searching();


            }

    else{


        system("cls");
        cout<<"No matching item found\n";
        cout<<"\n\nPress any key to continue\n";
        getch();
        searching();


    }


}

    void search_by_nationality(){


    system("cls");


    if(START==NULL){


       cout<<"No data! cannot search \n";
       cout<<"\n\npress any key to continue\n ";

       getch();
       searching();


    }





struct Player foundPlayers[1000];
int top = -1;
int stackSize = 0;


int found = -1;

char key[100];

cout<<"Enter your search key\n";
cin>>key;


            for(Player *I = START ; I!=NULL; I=I->next){

                    if( strcmp(I->nationality,key)==0 ) {


                            top++;
                            stackSize++;
                            foundPlayers[top] = *I;


                       }

            }


            cout<<stackSize<<" items matched your search\n";


            if(stackSize > 0){

            for(int i=0; i<stackSize; i++){


                cout<<"Name       :---------------------------- " <<foundPlayers[i].name<<endl;
                cout<<"Nationality:---------------------------- " <<foundPlayers[i].nationality<<endl;
                cout<<"ID         :---------------------------- " <<foundPlayers[i].ID<<endl;
                cout<<"____________________________________________________\n\n";

            }


        cout<<"\n\n Press any key to continue\n";
        getch();
        searching();



            }

            else{



        system("cls");
        cout<<"No matching item found\n";
        cout<<"\n\nPress any key to continue\n";
        getch();
        searching();


            }


}

    void search_by_position(){


    system("cls");


    if(START==NULL){


       cout<<"No data! cannot search \n";
       cout<<"\n\npress any key to continue\n ";

       getch();
       searching();


    }


struct Player foundPlayers[1000];
int top = -1;
int stackSize = 0;


int found = -1;

char key[100];

cout<<"Enter your search key\n";
cin>>key;


            for(Player *I = START ; I!=NULL; I=I->next){

                    if( strcmp(I->position,key)==0 ) {


                            top++;
                            stackSize++;
                            foundPlayers[top] = *I;


                       }

            }


            cout<<stackSize<<" items matched your search\n";


    if(stackSize > 0) {

            for(int i=0; i<stackSize; i++){


                cout<<"Name    :-------------------------- "<<foundPlayers[i].name<<endl;
                cout<<"position:-------------------------- "<<foundPlayers[i].position<<endl;
                cout<<"ID      :-------------------------- "<<foundPlayers[i].ID<<endl;
                cout<<"____________________________________________________\n\n";



            }

        cout<<"\n\n Press any key to continue\n";
        getch();
        searching();


    }

    else {


        system("cls");
        cout<<"No matching item found\n";
        cout<<"\n\nPress any key to continue\n";
        getch();
        searching();


    }


}

    void search_by_salary(){

    system("cls");


    if(START==NULL){


       cout<<"No data! cannot search \n";
       cout<<"\n\npress any key to continue\n ";

       getch();
       searching();

    }



    struct Player foundPlayers[1000];
    int top = -1;
    int stackSize = 0;


int found = -1;

float key;
char tempKey[15];

cout<<"Enter your search key\n";
cin>>tempKey;


if( isFloat(tempKey) ){


              for(Player *I = START ; I!=NULL; I=I->next){

                    if( I->salaty==key ) {


                            top++;
                            stackSize++;
                            foundPlayers[top] = *I;


                       }

            }


            cout<<stackSize<<" items matched your search\n";

        if(stackSize > 0){

            for(int i=0; i<stackSize; i++){


                cout<<"Name   :--------------------------- "<<foundPlayers[i].name<<endl;
                cout<<"Salary :--------------------------- "<<foundPlayers[i].salaty<<endl;
                cout<<"ID     :--------------------------- "<<foundPlayers[i].ID<<endl;
                cout<<"____________________________________________________\n\n";
            }

               cout<<"\n\n Press any key to continue\n";
               getch();
               searching();

            }





        else {

        system("cls");
        cout<<"No matching item found\n";
        cout<<"\n\nPress any key to continue\n";
        getch();
        searching();



        }







}

else{


        system("cls");
        cout<<"Invalid Input\n";
        cout<<"\n\nPress any key to continue\n";
        getch();
        searching();


}






}



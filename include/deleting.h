



 // deleting functions




void delete_the_firt_element(){ // deletes the first element



    if(START!=NULL){

        Player *tempPlayer = START;
        START = tempPlayer->next;
        delete tempPlayer;

            system("cls");
            cout<<"First element deleted\n";
            cout<<"Press any key to continue\n";

            getch();
            system("cls");
            deletion();

    }

    else{


        system("cls");
        cout<<"Empty list unable to delete\n";
        getch();
        deletion();

    }



}



void delete_the_last_element(){ // Error

    Player *player_to_delete = NULL;




    if(START!=NULL){


        for(Player *I=START; I!=NULL;I=I->next){


            if( START->next == NULL ){ // if there is only one node



                Player *temp =START;
                START = START->next;

                delete temp;


                system("cls");
                cout<<"Deleted last element\n";
                cout<<"Press any key to continue\n";

                getch();
                deletion();

            }



            else { // if more than one node



                    Player *prev = START;

                    for(Player *I=START; I!=NULL;I=I->next){

                        if(I->next==NULL){

                            prev->next = NULL;
                            delete I;


                            system("cls");
                            cout<<"Deleted last element\n";
                            cout<<"Press any key to continue\n";

                            getch();
                            deletion();
                            break;

                        }



                        prev = I;

                    }



            }




        }





    }

    else{


        system("cls");
        cout<<"Empty list unable to delete\n";
        cout<<"Press any key to continue\n";
        getch();
        deletion();

    }





 }



 void delete_by_name(){ // OK for

system("cls");

        if(START==NULL){


            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();


        }



    else{

        int occurence = 0;



        char name_to_delete[50];
        cout<<"Name to delete from the players list\n";
        cin>>name_to_delete;
                                Player *I = START;
                                while(I!=NULL){ // get how many times the attribute is repeated

                                    if( strcmp(I->name ,name_to_delete) == 0 ){

                                            occurence++;

                                            }
                                    I = I->next;

                                }

    if(occurence>0){
        while(occurence>0){ // for each repeated attribute delete them

                I = START;
                Player *pre = new Player();
                      pre->next = START;

                            while( I!=NULL ){

                                if( strcmp(I->name ,name_to_delete) == 0 ){

                                       if(I==START){

                                        Player *tmp = START;
                                        START=START->next;
                                        delete tmp;
                                        break;
                                      }

                                      Player *t = I->next;
                                      pre->next = t;
                                      delete  I;
                                      break;

                                        }

                                I = I->next;
                                pre = pre->next;

                            }
                            occurence--;




        }


        system("cls");
        cout<<"Items deleted\n";
        cout<<"press any key to continue\n";
        getch();
        deletion();


        }


        else { // if no matches found

        system("cls");
        cout<<"No matches found\n";
        cout<<"Press any key to continue\n";
        getch();
        deletion();

        }


    }
}



void delete_by_age(){



        system("cls");

        int age_to_delete=0;

        if(START==NULL){


            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();


        }


        int occurence = 0;

        age_input_error:
        char tempAge[10];
        cout<<"Age to delete from the players list\n";
        cin>>tempAge;

        if( isInt(tempAge) ){

            age_to_delete = atof(tempAge);


        }

        else{

            system("cls");
            cout<<"Invalid Age ,";
            cout<<"Press any key to continue\n";
            getch();
            system("cls");
            goto age_input_error;

        }
                                Player *I = START;
                                while(I!=NULL){ // get how many times the attribute is repeated

                                    if( age_to_delete == I->age ){
                                        occurence++;
                                            }
                                    I = I->next;
                                }
if(occurence>0){

        while(occurence>0){ // for each repeated attribute delete them

                I = START;
                Player *pre = new Player();
                      pre->next = START;

                            while( I!=NULL ){
                                if( age_to_delete == I->age ){

                                       if(I==START){

                                        Player *tmp = START;
                                        START=START->next;
                                        delete tmp;
                                        break;
                                            }

                                      Player *t = I->next;
                                      pre->next = t;
                                      delete  I;
                                      break;
                                        }

                                I = I->next;
                                pre = pre->next;

                            }
                            occurence--;
                     }

        system("cls");
        cout<<"Items deleted\n";
        cout<<"press any key to continue\n";
        getch();
        deletion();


                     }


                    else { // if no maths found


                     system("cls");
                     cout<<"No matches found \n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();


                     }


}



void delete_by_height(){



system("cls");

        if(START==NULL){


            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();


        }


        int occurence = 0;
        int height_to_delete;
        char tempHeight[10];

        height_input_error:
        cout<<"Height to delete from the players list\n";
        cin>>tempHeight;

        if( isFloat(tempHeight) ){

            height_to_delete = atof(tempHeight);

        }

        else{

            system("cls");
            cout<<"Invalid Height input\n";
            cout<<"Press any key to continue\n";
            getch();
            system("cls");
            goto height_input_error;

        }




                                Player *I = START;
                                while(I!=NULL){ // get how many times the attribute is repeated

                                    if( height_to_delete == I->height ){
                                        occurence++;
                                            }
                                    I = I->next;
                                }

    if( occurence > 0 ){

        while(occurence>0){ // for each repeated attribute delete them

                I = START;
                Player *pre = new Player();
                      pre->next = START;

                            while( I!=NULL ){
                                if( height_to_delete == I->height ){

                                       if(I==START){

                                        Player *tmp = START;
                                        START=START->next;
                                        delete tmp;
                                        break;
                                              }

                                      Player *t = I->next;
                                      pre->next = t;
                                      delete  I;
                                      break;
                                        }

                                I = I->next;
                                pre = pre->next;

                            }
                            occurence--;
                     }


                     system("cls");
                     cout<<"Items deleted\n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();

                    }

                    else { // if no maths found


                     system("cls");
                     cout<<"No matches found \n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();


                     }
}



void delete_by_weight(){

        system("cls");


        if(START==NULL){


            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();


        }

        int occurence = 0;

        int weight_to_delete;
        char tempWeight[10];


        weight_input_error:
        cout<<"Height to delete from the players list\n";
        cin>>tempWeight;

        if( isFloat(tempWeight) ){

            weight_to_delete = atof(tempWeight);

        }

        else{


            system("cls");
            cout<<"Invalid weight search key\n";
            cout<<"Press any key to continue\n";
            getch();
            system("cls");
            goto weight_input_error;


        }





                                Player *I = START;
                                while(I!=NULL){ // get how many times the attribute is repeated

                                    if( weight_to_delete == I->weight ){
                                        occurence++;
                                            }
                                    I = I->next;
                                }
if(occurence>0){

        while(occurence>0){ // for each repeated attribute delete them

                I = START;
                Player *pre = new Player();
                      pre->next = START;

                            while( I!=NULL ){
                                if( weight_to_delete == I->weight ){


                                      if(I==START){

                                        Player *tmp = START;
                                        START=START->next;
                                        delete tmp;
                                        break;

                                      }


                                      Player *t = I->next;
                                      pre->next = t;
                                      delete  I;
                                      break;
                                        }

                                I = I->next;
                                pre = pre->next;

                            }
                            occurence--;
                     }

                     system("cls");
                     cout<<"Items deleted \n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();

                     }


                    else { // if no maths found


                     system("cls");
                     cout<<"No matches found \n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();


                     }


}



void delete_by_position(){


        system("cls");


        if(START==NULL){


            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();


        }

        int occurence = 0;

        char position_to_delete[50];
        cout<<"Position to delete from the players list\n";
        cin>>position_to_delete;
                                Player *I = START;
                                while(I!=NULL){ // get how many times the attribute is repeated

                                    if( strcmp (position_to_delete, I->position)==0 ){

                                        occurence++;
                                            }
                                    I = I->next;
                                }

        if(occurence>0){

        while(occurence>0){ // for each repeated attribute delete them

                I = START;
                Player *pre = new Player();
                      pre->next = START;

                            while( I!=NULL ){
                                if(  strcmp (position_to_delete, I->position) ==0 ){



                                      if(I==START){

                                        Player *tmp = START;
                                        START=START->next;
                                        delete tmp;
                                        break;

                                      }



                                      Player *t = I->next;
                                      pre->next = t;
                                      delete  I;
                                      break;
                                        }

                                I = I->next;
                                pre = pre->next;

                            }
                            occurence--;
                     }

                     system("cls");
                     cout<<"Items deleted \n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();

                     }


                    else { // if no maths found


                     system("cls");
                     cout<<"No matches found \n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();


                     }
}



void delete_by_nationality(){


        system("cls");


        if(START==NULL){


            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();


        }

        int occurence = 0;

        char natinality_to_delete[50];
        cout<<"Nationality to delete from the players list\n";
        cin>>natinality_to_delete;
                                Player *I = START;
                                while(I!=NULL){ // get how many times the attribute is repeated

                                    if( strcmp (natinality_to_delete, I->nationality) == 0){

                                        occurence++;
                                            }
                                    I = I->next;
                                }


        if(occurence>0){

        while(occurence>0){ // for each repeated attribute delete them

                I = START;
                Player *pre = new Player();
                      pre->next = START;

                            while( I!=NULL ){
                                if(  strcmp (natinality_to_delete, I->nationality) == 0){



                                      if(I==START){

                                        Player *tmp = START;
                                        START=START->next;
                                        delete tmp;
                                        break;

                                      }

                                      Player *t = I->next;
                                      pre->next = t;
                                      delete  I;
                                      break;
                                        }

                                I = I->next;
                                pre = pre->next;

                            }
                            occurence--;
                     }


                     system("cls");
                     cout<<"Items deleted\n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();


                     }


                    else { // if no maths found


                     system("cls");
                     cout<<"No matches found \n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();


                     }
}



void delete_by_salary(){


        system("cls");


        if(START==NULL){


            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();


        }



        int occurence = 0;

        float salary_to_delete;
        char tempSalary[20];


        salary_input_error:
        cout<<"Salary to delete from the players list\n";
        cin>>tempSalary;

        if( isFloat(tempSalary) ){


            salary_to_delete = atof( tempSalary );

        }

        else{

            system("cls");
            cout<<"Invalid salary search key \n";
            cout<<"Press any key to continue \n";

            system("cls");
            goto salary_input_error;


        }


                                Player *I = START;
                                while(I!=NULL){ // get how many times the attribute is repeated

                                    if( salary_to_delete == I->salaty ){

                                        occurence++;
                                            }
                                    I = I->next;
                                }


        if(occurence>0){

        while(occurence>0){ // for each repeated attribute delete them

                I = START;
                Player *pre = new Player();
                      pre->next = START;

                            while( I!=NULL ){
                                if(   salary_to_delete == I->salaty  ){

                                      if(I==START){

                                        Player *tmp = START;
                                        START=START->next;
                                        delete tmp;
                                        break;

                                      }



                                      Player *t = I->next;
                                      pre->next = t;
                                      delete  I;
                                      break;
                                        }

                                I = I->next;
                                pre = pre->next;

                            }
                            occurence--;
                     }




        system("cls");
        cout<<"Items Deleted \n";
        cout<<"Press any key to continue\n";
        getch();
        deletion();






                }


                    else { // if no maths found


                     system("cls");
                     cout<<"No matches found \n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();


                     }

}


void delete_by_tshirt(){

        system("cls");

        if(START==NULL){


            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();


        }

        int occurence = 0;

        int tshirt_to_delete;
        char tempTshirt[10];

        tshirt_input_error:
        cout<<"T Shirt to delete from the players list\n";
        cin>>tempTshirt;


        if( isInt(tempTshirt) ){

            tshirt_to_delete = atof(tempTshirt);


        }

        else{

            system("cls");
            cout<<"Invalid T shirt input\n";
            cout<<"Press any key to continue\n";
            getch();
            system("cls");
            goto tshirt_input_error;


        }
                                Player *I = START;
                                while(I!=NULL){ // get how many times the attribute is repeated

                                    if( tshirt_to_delete == I->t_shirt_number ){

                                        occurence++;
                                            }
                                    I = I->next;
                                }

        if(occurence>0){

        while(occurence>0){ // for each repeated attribute delete them

                I = START;
                Player *pre = new Player();
                      pre->next = START;

                            while( I!=NULL ){
                                if(  tshirt_to_delete == I->t_shirt_number ){


                                      if(I==START){

                                        Player *tmp = START;
                                        START=START->next;
                                        delete tmp;
                                        break;

                                      }



                                      Player *t = I->next;
                                      pre->next = t;
                                      delete  I;
                                      break;
                                        }

                                I = I->next;
                                pre = pre->next;

                            }
                            occurence--;
                     }


                     system("cls");
                     cout<<"Items deleted \n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();


                    }



                    else { // if no maths found


                     system("cls");
                     cout<<"No matches found \n";
                     cout<<"Press any key to continue\n";
                     getch();
                     deletion();


                     }






}


void delete_by_ID(){ // OK for


system("cls");

        if(START==NULL){


            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();


        }



    else{

        int occurence = 0;



        char ID_to_delete[50];
        cout<<"ID to delete from the players list\n";
        cin>>ID_to_delete;
                                Player *I = START;
                                while(I!=NULL){ // get how many times the attribute is repeated

                                    if( strcmp(I->ID ,ID_to_delete) == 0 ){

                                            occurence++;

                                            }
                                    I = I->next;

                                }

    if(occurence>0){
        while(occurence>0){ // for each repeated attribute delete them

                I = START;
                Player *pre = new Player();
                      pre->next = START;

                            while( I!=NULL ){

                                if( strcmp(I->ID ,ID_to_delete) == 0 ){

                                       if(I==START){

                                        Player *tmp = START;
                                        START=START->next;
                                        delete tmp;
                                        break;
                                      }

                                      Player *t = I->next;
                                      pre->next = t;
                                      delete  I;
                                      break;

                                        }

                                I = I->next;
                                pre = pre->next;

                            }
                            occurence--;




        }


        system("cls");
        cout<<"Items deleted\n";
        cout<<"press any key to continue\n";
        getch();
        deletion();


        }


        else { // if no matches found

        system("cls");
        cout<<"No matches found\n";
        cout<<"Press any key to continue\n";
        getch();
        deletion();

        }


    }
}


void delete_n(int n){


        system("cls");


        if(n<1){

        cout<<"Row number must be greater than 0,Unable to delete \n";
        cout<<"\n\nPress any key to go back\n";
        getch();
        deletion();

        }

        else if( n > get_number_of_registerd_palyers()  ){

        cout<<"Out of range! ,Unable to delete \n";
        cout<<"\n\nPress any key to go back\n";
        getch();
        deletion();



        }


        else {




                int c = 0;
                            Player *I = START;
                            Player *pre = new Player();
                                  pre->next = START;

                                    while( I!=NULL ){
                                            c++;
                                            if( c==n ){

                                                if(I==START){

                                                        Player *tmp = START;
                                                        START = START->next;
                                                        delete tmp;
                                                        break;
                                                }

                                                else{


                                                    pre->next = I->next;
                                                    delete I;
                                                    break;


                                                }


                                            }


                                       I=I->next;
                                       pre = pre->next;

                                    }



        cout<<"Row deleted \n";
        cout<<"\n\nPress any key to go back\n";
        getch();
        deletion();


     }

}


void delete_player_with_small_age(){


    system("cls");

    if(START==NULL){


            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();


        }

        Player *theSmallest = START;


                                for( Player *I=START; I!=NULL; I=I->next ){ // search a player with smallest age

                                    if( I->age <   theSmallest->age ){

                                        theSmallest = I;

                                    }


                                }


                            Player *prev = new Player(); // Delete the smallest Node

                                   prev->next = START;

                                   for(Player *I=START; I!=NULL; I=I->next){

                                            if( theSmallest == START ){

                                                Player *tmp = START;
                                                START = START->next;
                                                delete tmp;

                                            }

                                            else if( theSmallest == I ){

                                                prev->next = I->next;
                                                delete I;

                                            }


                                    prev = prev->next;
                                   }


        system("cls");
        cout<<"Player with smallest age deleted\n";
        cout<<"press any key to continue\n";
        getch();
        deletion();




        }


void delete_player_with_highest_age(){


        if(START==NULL){


            system("cls");
            cout<<"No data, unable to delete \n";
            cout<<"press any key to continue\n";
            getch();
            deletion();


        }


        Player *theHighest = START;

                 // search a player with smallest age
                                for( Player *I=START; I!=NULL; I=I->next ){

                                    if( I->age >  theHighest ->age ){

                                        theHighest  = I;

                                    }


                                }

                // Delete the smallest Node
                            Player *prev = new Player();
                                   prev->next = START;

                                   for(Player *I=START; I!=NULL; I=I->next){

                                            if( theHighest  == START ){

                                                Player *tmp = START;
                                                START = START->next;
                                                delete tmp;

                                            }

                                            else if( theHighest==I ){

                                                prev->next = I->next;
                                                delete I;

                                            }


                                    prev = prev->next;
                                   }


        system("cls");
        cout<<"Player with highest age deleted\n";
        cout<<"press any key to continue\n";
        getch();
        deletion();




        }


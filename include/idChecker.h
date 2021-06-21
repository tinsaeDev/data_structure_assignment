

        bool isIDrepeated(char *id){

                bool wtr = false;


                for( Player *I=START; I!=NULL ; I=I->next){


                    if( strcmp( I->ID,id) == 0 ){

                        wtr=true;
                        break;


                    }



                }


        return wtr;

        }

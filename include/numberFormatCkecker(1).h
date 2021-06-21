




         bool isFloat(char *input){

        bool wtr = true;

        int dot_occurence = 0;
        int input_length = strlen(input);



            for(int i=0; i<input_length;i++){


                if( dot_occurence >=2   ){


                    wtr=false;
                    break;

                }





                if(input[i]=='.'){


                    dot_occurence++;
                    continue;

                }






                if( (int) input[i] < 48 || (int) input[i] > 57){ //

                    wtr=false;
                    break;


                }


            }



            return wtr;





        }



        bool isInt(char *input){


        bool wtr = true;
        int input_length = strlen(input);



            for(int i=0; i<input_length;i++){


                if( (int) input[i] < 48 || (int) input[i] > 57 ){


                    wtr=false;
                    break;

                }


            }



            return wtr;

        }

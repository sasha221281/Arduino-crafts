int erkost = 130;
//Tree diagram(Схема ёлки)
/**
     ( R;G;B){RGB diode}

         1

     2_1   2_2

  3_1   3_2   3_3

4_1     4_2     4_3

**/
void setup() {
  pinMode(3, INPUT);//B
  pinMode(2, INPUT);//G
  pinMode(4, INPUT);//R
  pinMode(5, INPUT);//2.2
  pinMode(6, INPUT);//1
  pinMode(7, INPUT);//2.1
  pinMode(8, INPUT);//3.3
  pinMode(9, INPUT);//3.2
  pinMode(10, INPUT);//3.1
  pinMode(11, INPUT);//4.3
  pinMode(12, INPUT);//4.2
  pinMode(13, INPUT);//4.1
  Serial.begin(9600);
}

void loop() {
  for(int k=1;k<7;k++){
//int k = random(1,7);
  if(k==1){
  for(int p = 0;p<11;p++){
  int u = random(2,5);
  analogWrite(u,erkost);
  int t = random(5,8);
  int r = random(8,11);
  int i = random(11,14);
  analogWrite(r,erkost);
  analogWrite(t,erkost);
  analogWrite(i,erkost);
  delay(1000);
  analogWrite(u,0);
  analogWrite(i,0);
  analogWrite(t,0);
  analogWrite(r,0);}}
  else if(k==2){
    for(int i = 0;i<11;i++){
    analogWrite(4,erkost);
    analogWrite(6,erkost);
    analogWrite(7,erkost);
    analogWrite(10,erkost);
    analogWrite(13,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(4,0);
    analogWrite(7,0);
    analogWrite(10,0);
    analogWrite(13,0);
    analogWrite(2,erkost);
    analogWrite(6,erkost);
    analogWrite(9,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(2,0);
    analogWrite(9,0);
    analogWrite(12,0);
 
    analogWrite(3,erkost);
    analogWrite(5,erkost);
    analogWrite(8,erkost);
    analogWrite(6,erkost);
    analogWrite(11,erkost);
    delay(100);
    analogWrite(5,0);
    analogWrite(3,0);
    analogWrite(8,0);
    analogWrite(6,0);
    analogWrite(11,0);

    }
  }
  else if(k==3){
    analogWrite(4,erkost);
    delay(500);
    analogWrite(4,0);
    analogWrite(2,erkost);
    delay(500);
    analogWrite(2,0);
    analogWrite(3,erkost);
    delay(500);
    analogWrite(3,0);
    analogWrite(6,erkost);
    delay(500);
    analogWrite(6,0);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    delay(500);
    analogWrite(7,0);
    analogWrite(5,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(9,erkost);
    delay(500);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(12,erkost);
    delay(500);
    analogWrite(12,0);
    analogWrite(13,0);
    analogWrite(11,0);







    analogWrite(4,erkost);
    analogWrite(2,erkost);
    analogWrite(3,erkost);
    analogWrite(6,erkost);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(9,erkost);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(12,0);
    analogWrite(13,0);
    analogWrite(11,0);
    analogWrite(4,0);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(7,0);
    analogWrite(5,0);
    analogWrite(3,0);
    analogWrite(6,0);
    analogWrite(2,0);
    delay(100);
    analogWrite(4,erkost);
    analogWrite(2,erkost);
    analogWrite(3,erkost);
    analogWrite(6,erkost);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(9,erkost);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(12,0);
    analogWrite(13,0);
    analogWrite(11,0);
    analogWrite(4,0);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(7,0);
    analogWrite(5,0);
    analogWrite(3,0);
    analogWrite(6,0);
    analogWrite(2,0);



    analogWrite(4,erkost);
    delay(100);
    analogWrite(4,0);
    analogWrite(2,erkost);
    delay(100);
    analogWrite(2,0);
    analogWrite(3,erkost);
    delay(100);
    analogWrite(3,0);
    analogWrite(6,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    delay(100);
    analogWrite(7,0);
    analogWrite(5,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(9,erkost);
    delay(100);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(12,0);
    analogWrite(13,0);
    analogWrite(11,0);




    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(12,0);
    analogWrite(13,0);
    analogWrite(11,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(9,erkost);
    delay(100);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    delay(100);
    analogWrite(7,0);
    analogWrite(5,0);
    analogWrite(6,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(3,erkost);
    delay(100);
    analogWrite(3,0);
    analogWrite(2,erkost);
    delay(100);
    analogWrite(2,0);
    analogWrite(4,erkost);
    delay(100);
    analogWrite(4,0);





    analogWrite(4,erkost);
    delay(100);
    analogWrite(4,0);
    analogWrite(2,erkost);
    delay(100);
    analogWrite(2,0);
    analogWrite(3,erkost);
    delay(100);
    analogWrite(3,0);
    analogWrite(6,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    delay(100);
    analogWrite(7,0);
    analogWrite(5,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(9,erkost);
    delay(100);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(12,0);
    analogWrite(13,0);
    analogWrite(11,0);




    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(12,0);
    analogWrite(13,0);
    analogWrite(11,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(9,erkost);
    delay(100);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    delay(100);
    analogWrite(7,0);
    analogWrite(5,0);
    analogWrite(6,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(3,erkost);
    delay(100);
    analogWrite(3,0);
    analogWrite(2,erkost);
    delay(100);
    analogWrite(2,0);
    analogWrite(4,erkost);
    delay(100);
    analogWrite(4,0);






    analogWrite(4,erkost);
    delay(100);
    analogWrite(4,0);
    analogWrite(2,erkost);
    delay(100);
    analogWrite(2,0);
    analogWrite(3,erkost);
    delay(100);
    analogWrite(3,0);
    analogWrite(6,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    delay(100);
    analogWrite(7,0);
    analogWrite(5,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(9,erkost);
    delay(100);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(12,0);
    analogWrite(13,0);
    analogWrite(11,0);





    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(12,0);
    analogWrite(13,0);
    analogWrite(11,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(9,erkost);
    delay(100);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    delay(100);
    analogWrite(7,0);
    analogWrite(5,0);
    analogWrite(6,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(3,erkost);
    delay(100);
    analogWrite(3,0);
    analogWrite(2,erkost);
    delay(100);
    analogWrite(2,0);
    analogWrite(4,erkost);
    delay(100);
    analogWrite(4,0);









    analogWrite(4,erkost);
    delay(100);
    analogWrite(4,0);
    analogWrite(2,erkost);
    delay(100);
    analogWrite(2,0);
    analogWrite(3,erkost);
    delay(100);
    analogWrite(3,0);
    analogWrite(6,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    delay(100);
    analogWrite(7,0);
    analogWrite(5,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(9,erkost);
    delay(100);
    analogWrite(9,0);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(12,0);
    analogWrite(13,0);
    analogWrite(11,0);







    
  }




  else if(k==4){
    for(int i = 0;i<11;i++){
    analogWrite(4,erkost);
    analogWrite(6,erkost);
    analogWrite(7,erkost);
    analogWrite(10,erkost);
    analogWrite(13,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(4,0);
    analogWrite(7,0);
    analogWrite(10,0);
    analogWrite(13,0);


    analogWrite(2,erkost);
    analogWrite(6,erkost);
    analogWrite(9,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(2,0);
    analogWrite(9,0);
    analogWrite(12,0);
 
    analogWrite(3,erkost);
    analogWrite(5,erkost);
    analogWrite(8,erkost);
    analogWrite(6,erkost);
    analogWrite(11,erkost);
    delay(100);
    analogWrite(5,0);
    analogWrite(3,0);
    analogWrite(8,0);
    analogWrite(6,0);
    analogWrite(11,0);


    analogWrite(2,erkost);
    analogWrite(6,erkost);
    analogWrite(9,erkost);
    analogWrite(12,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(2,0);
    analogWrite(9,0);
    analogWrite(12,0);

    }
    analogWrite(4,erkost);
    analogWrite(6,erkost);
    analogWrite(7,erkost);
    analogWrite(10,erkost);
    analogWrite(13,erkost);
    delay(100);
    analogWrite(6,0);
    analogWrite(4,0);
    analogWrite(7,0);
    analogWrite(10,0);
    analogWrite(13,0);

  }
  if(k==5){
    analogWrite(9,erkost);
    delay(200);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    analogWrite(12,erkost);
    delay(200);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(6,erkost);
    delay(200);
    analogWrite(4,erkost);
    delay(200);
    analogWrite(4,0);
    delay(200);
    analogWrite(13,0);
    analogWrite(11,0);
    analogWrite(6,0);
    delay(200);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,0);
    analogWrite(7,0);
    analogWrite(12,0);
    delay(200);
    analogWrite(9,0);
    delay(200);



    analogWrite(9,erkost);
    delay(200);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    analogWrite(12,erkost);
    delay(200);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(6,erkost);
    delay(200);
    analogWrite(2,erkost);
    delay(200);
    analogWrite(2,0);
    delay(200);
    analogWrite(13,0);
    analogWrite(11,0);
    analogWrite(6,0);
    
    delay(200);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,0);
    analogWrite(7,0);
    analogWrite(12,0);
    delay(200);
    analogWrite(9,0);
    delay(200);





    analogWrite(9,erkost);
    delay(200);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    analogWrite(12,erkost);
    delay(200);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(6,erkost);
    delay(200);
    analogWrite(3,erkost);
    delay(200);
    analogWrite(3,0);
    delay(200);
    analogWrite(11,0);
    analogWrite(6,0);
    analogWrite(13,0);
    delay(200);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,0);
    analogWrite(7,0);
    analogWrite(12,0);
    delay(200);
    analogWrite(9,0);
    delay(200);
  }


  if(k==6){
    analogWrite(9,erkost);
    delay(200);
    analogWrite(9,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    analogWrite(12,erkost);
    delay(200);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,0);
    analogWrite(7,0);
    analogWrite(12,0);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(6,erkost);
    analogWrite(4,erkost);
    delay(200);
    analogWrite(13,0);
    analogWrite(11,0);
    analogWrite(6,0);
    analogWrite(4,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    analogWrite(12,erkost);
    delay(200);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,0);
    analogWrite(7,0);
    analogWrite(12,0);
    analogWrite(9,erkost);
    delay(200);
    analogWrite(9,0);
    delay(200);



    analogWrite(9,erkost);
    delay(200);
    analogWrite(9,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    analogWrite(12,erkost);
    delay(200);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,0);
    analogWrite(7,0);
    analogWrite(12,0);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(6,erkost);
    analogWrite(2,erkost);
    delay(200);
    analogWrite(13,0);
    analogWrite(11,0);
    analogWrite(6,0);
    analogWrite(2,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    analogWrite(12,erkost);
    delay(200);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,0);
    analogWrite(7,0);
    analogWrite(12,0);
    analogWrite(9,erkost);
    delay(200);
    analogWrite(9,0);
    delay(200);



    analogWrite(9,erkost);
    delay(200);
    analogWrite(9,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    analogWrite(12,erkost);
    delay(200);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,0);
    analogWrite(7,0);
    analogWrite(12,0);
    analogWrite(13,erkost);
    analogWrite(11,erkost);
    analogWrite(6,erkost);
    analogWrite(3,erkost);
    delay(200);
    analogWrite(13,0);
    analogWrite(11,0);
    analogWrite(6,0);
    analogWrite(3,0);
    analogWrite(10,erkost);
    analogWrite(8,erkost);
    analogWrite(5,erkost);
    analogWrite(7,erkost);
    analogWrite(12,erkost);
    delay(200);
    analogWrite(10,0);
    analogWrite(8,0);
    analogWrite(5,0);
    analogWrite(7,0);
    analogWrite(12,0);
    analogWrite(9,erkost);
    delay(200);
    analogWrite(9,0);
    delay(200);





    
    



    
  }
}}
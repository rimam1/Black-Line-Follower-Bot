// line follower bot


// the basic idea is black line should be in between both ir sensors 
// i.e. the response of both ir sensors will be low when it is on the black line
// and in that condition adjust the bot with a small direction change

int left_forward = 8;
int left_backward = 10;
int right_forward = 11;
int right_backward = 12;

int ir_left = 7;
int ir_right = 8;

int ir_left_read = 0
int ir_right_read = 0

void setup(){
    
    pinMode(left_forward,OUTPUT);
    pinMode(left_backward,OUTPUT);
    pinMode(right_forward,OUTPUT);
    pinMode(right_backward,OUTPUT);
    pinMode(ir_left,INPUT);
    pinMode(ir_right,INPUT);
    Serial.begin(9600);
}

void loop(){

    ir_left_read = digitalRead(ir_left); 
    ir_right_read = digitalRead(ir_right);
       
    if(ir_){
        // in this condition 
        // bot is crossing the path from left side i.e. diverting right
        // so turn bot left
        Serial.println("left turn");
        digitalWrite(right_forward, HIGH);
        digitalWrite(right_backward, LOW);
        digitalWrite(left_forward, LOW);
        digitalWrite(left_backward, LOW); 
        // here u can make left_backward high
        // but then turning speed will be more......control turning speed as per your requirement
        
    }
    else if(left_res == REFLECTING_SFS && right_res == NON_REFLECTING_SFS){
        // here turn right
        Serial.println("right turn");
        digitalWrite(right_forward, LOW);
        digitalWrite(right_backward, LOW);
        digitalWrite(left_forward, HIGH);
        digitalWrite(left_backward, LOW); 
    }

}

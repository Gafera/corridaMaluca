//Modifique o código conforme o número de motores que você vai usar
//Salve a biblioteca AFMotor na pasta "libraries" do Arduino

//Inclui a biblioteca AFMotor

#include "Servo.h" // Inclui a Biblioteca Servo.h

Servo meuservo; // Cria o objeto servo para programação
int angulo = 0; // Ajusta o ângulo inicial do Servo

#include <AFMotor.h>

  AF_DCMotor motor1(1); // Motor conectado à M1
  //AF_DCMotor motor2(2); // Motor conectado à M2
//AF_DCMotor motor3(3); // Motor conectado à M3
  AF_DCMotor motor4(4); // Motor conectado à M4
 
void setup()
{
  //Define a velocidade máxima para os motores 
    motor1.setSpeed(255); 
  //motor2.setSpeed(255); 
  //motor3.setSpeed(255); 
    motor4.setSpeed(255);
    meuservo.attach(9); // Declara o pino do servo

}
 
void loop()
{

  for (angulo = 0; angulo < 180; angulo += 1) { // Comando que muda a posição do servo de 0 para 180°
  meuservo.write(angulo); // Comando para angulo específico
  }
  delay(15);

  for (angulo = 180; angulo >= 1; angulo -= 5) { // Comando que muda a posição do servo de 180 para 0°
meuservo.write(angulo); // Comando para angulo específico
delay(5);
}

 /* 
  //Aciona os motores no sentido horário
  motor1.run(FORWARD); 
  //  motor2.run(FORWARD);
  //motor3.run(FORWARD); 
  motor4.run(FORWARD); 
   
  delay(5000); // Aguarda 5 segundos

  //Desliga os Motores
  motor1.run(RELEASE); 
  //  motor2.run(RELEASE);
  //motor3.run(RELEASE);
  motor4.run(RELEASE);
   
  
  //Aciona os motores no sentido anti-horário
  motor1.run(BACKWARD); 
  //  motor2.run(BACKWARD); 
  //motor3.run(BACKWARD); 
  motor4.run(BACKWARD); 
  
  // Aguarda 3 segundos
  delay(3000);
  
 // Desliga os motores
 motor1.run(RELEASE); 
  // motor2.run(RELEASE);
 //motor3.run(RELEASE);
 motor4.run(RELEASE);

 */
}


import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ronaldo
 */
public class Teste {
    public static void main(String[] args) throws InterruptedException {
        Contador horas = new Contador(0,23);
        Contador minutos = new Contador(0,60);
        
        Relogio r1 = new Relogio(horas, minutos, false);
        Relogio r2 = new Relogio(horas, minutos, true);
        
        System.out.println("Digite 0 caso deseje o formato 24 horas e 1 caso deseje o formato 12 horas.");
        
        Scanner input = new Scanner(System.in);
        int entrada = input.nextInt();
        
        if(entrada == 0){
            
            while(true){
                minutos.contar(minutos);

                Thread.sleep(1000);             // delay de um segundo

                for(int i = 0; i < 5; i ++)
                    System.out.println();

                r1.ticTac(r1);
                r1.mostrarHora(r1);
            }
        }

        else{
            
            while(true){
                minutos.contar(minutos);

                Thread.sleep(1000);

                for(int i = 0; i < 4; i ++)
                    System.out.println();

                r2.ticTac(r2);
                r2.mostrarHora(r2);
            }
        }
    }
}
